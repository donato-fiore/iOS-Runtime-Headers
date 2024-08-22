// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMTRIGGER_H
#define HMTRIGGER_H

@class HMFUnfairLock, NSArray, NSString, NSDate, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMUser.h"
#import "HMDevice.h"
#import "HMMutableArray.h"
#import "HMHome.h"
#import "HMTriggerPolicy.h"

@interface HMTrigger : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, copy, nonatomic) NSArray *actionSets;
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (copy, nonatomic) NSString *configuredName; // ivar: _configuredName
@property (readonly, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, weak, nonatomic) HMUser *creator;
@property (readonly, nonatomic) HMDevice *creatorDevice;
@property (retain, nonatomic) HMMutableArray *currentActionSets; // ivar: _currentActionSets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMHome *home; // ivar: _home
@property (copy, nonatomic) NSDate *lastFireDate; // ivar: _lastFireDate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) HMUser *owner; // ivar: _owner
@property (retain, nonatomic) HMDevice *ownerDevice; // ivar: _ownerDevice
@property (readonly, nonatomic) HMTriggerPolicy *policy; // ivar: _policy
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)isValidPolicy:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(BOOL)_updateActionSetFromResponse:(id)arg0 responsePayload:(id)arg1 ;
// -(BOOL)_updateTriggerNameFromResponse:(id)arg0 responsePayload:(unk)arg1  ;
-(BOOL)compatibleWithApp;
-(id)_serializeForAdd;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 configuredName:(id)arg1 ;
-(id)logIdentifier;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_addActionSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)_addActionSetOfType:(id)arg0 completionHandler:(id)arg1 ;
-(void)_enable:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_handleTriggerFired:(id)arg0 ;
-(void)_handleTriggerFiredNotification:(id)arg0 ;
-(void)_recomputeAssistantIdentifier;
-(void)_registerNotificationHandlers;
-(void)_removeActionSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateActionSet:(id)arg0 add:(BOOL)arg1 completionHandler:(id)arg2 ;
// -(void)_updateClientWithResults:(id)arg0 withError:(unk)arg1  ;
-(void)_updateName:(id)arg0 configuredName:(id)arg1 completionHandler:(id)arg2 ;
-(void)addActionSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)addActionSetOfType:(id)arg0 completionHandler:(id)arg1 ;
-(void)addActionSetWithCompletionHandler:(id)arg0 ;
-(void)enable:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)recomputeAssistantIdentifier;
-(void)removeActionSet:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePolicy:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateName:(id)arg0 configuredName:(id)arg1 completionHandler:(id)arg2 ;
-(void)updatePolicy:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif