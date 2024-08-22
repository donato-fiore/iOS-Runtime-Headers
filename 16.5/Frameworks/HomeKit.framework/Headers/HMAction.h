// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACTION_H
#define HMACTION_H

@class NSString, NSUUID;
@protocol HMObjectMerge, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HMActionSet.h"
#import "_HMContext.h"

@interface HMAction : NSObject <HMObjectMerge, NSSecureCoding, NSCopying>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, weak) HMActionSet *actionSet; // ivar: _actionSet
@property (readonly, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;
@property (readonly, nonatomic) _HMContext *context; // ivar: _context
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
+(id)new;
-(BOOL)_handleUpdates:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProtoBuf;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 home:(id)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 actionSet:(id)arg1 ;
-(void)_unconfigure;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif