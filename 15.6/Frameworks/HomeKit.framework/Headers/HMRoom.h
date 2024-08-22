// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMROOM_H
#define HMROOM_H

@class HMFUnfairLock, NSArray, NSUUID, NSString;
@protocol NSSecureCoding, HMObjectMerge, HMMutableApplicationData;

#import <Foundation/Foundation.h>

#import "HMApplicationData.h"
#import "_HMContext.h"
#import "HMHome.h"

@interface HMRoom : NSObject <NSSecureCoding, HMObjectMerge, HMMutableApplicationData>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, copy, nonatomic) NSArray *accessories;
@property (retain, nonatomic) HMApplicationData *applicationData; // ivar: _applicationData
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMHome *home; // ivar: _home
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_recomputeAssistantIdentifier;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)_updateRoomName:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)recomputeAssistantIdentifier;
-(void)updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateName:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif