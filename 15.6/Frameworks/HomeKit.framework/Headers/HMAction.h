// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACTION_H
#define HMACTION_H

@class HMFUnfairLock, NSString, NSUUID;
@protocol HMObjectMerge, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HMActionSet.h"
#import "_HMContext.h"

@interface HMAction : NSObject <HMObjectMerge, NSSecureCoding, NSCopying>

 {
    HMFUnfairLock *_lock;
}


@property (weak) HMActionSet *actionSet; // ivar: _actionSet
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL requiresDeviceUnlock;
@property (readonly) Class superclass;
@property (readonly) NSUInteger type;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (copy) NSUUID *uuid; // ivar: _uuid
@property (readonly, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg0 home:(id)arg1 ;
-(BOOL)_handleUpdates:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProtoBuf;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 actionSet:(id)arg1 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif