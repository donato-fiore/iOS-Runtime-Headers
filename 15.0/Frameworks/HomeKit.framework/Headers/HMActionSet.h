// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACTIONSET_H
#define HMACTIONSET_H

@class HMFUnfairLock, NSString, NSSet, NSUUID, NSDate, NSDictionary;
@protocol HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMApplicationData.h"
#import "_HMContext.h"
#import "HMMutableArray.h"
#import "HMHome.h"

@interface HMActionSet : NSObject <HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, copy, nonatomic) NSString *actionSetType; // ivar: _actionSetType
@property (readonly, copy, nonatomic) NSSet *actions;
@property (retain, nonatomic) HMApplicationData *applicationData; // ivar: _applicationData
@property (readonly, copy) NSUUID *applicationDataIdentifier;
@property (copy, nonatomic) NSString *assistantIdentifier; // ivar: _assistantIdentifier
@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (retain, nonatomic) HMMutableArray *currentActions; // ivar: _currentActions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic) BOOL executionInProgress; // ivar: _executionInProgress
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMHome *home; // ivar: _home
@property (readonly, copy, nonatomic) NSDate *lastExecutionDate; // ivar: _lastExecutionDate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy) NSDictionary *shortcutsDictionaryRepresentation;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)actionSetFromProtoBuf:(id)arg0 home:(id)arg1 ;
+(id)allowedActionClasses;
+(id)shortcutsComponentActionSet;
-(BOOL)_addActionFromResponse:(id)arg0 withAction:(id)arg1 completion:(id)arg2 ;
-(BOOL)_doAddAction:(id)arg0 uuid:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)_doRemoveActionWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_handleActionRemovedFromPayload:(id)arg0 completion:(id)arg1 ;
-(BOOL)_handleActionSetRenameFromPayload:(id)arg0 completion:(id)arg1 ;
-(BOOL)_handleActionUpdatedFromResponse:(id)arg0 completion:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(BOOL)requiresDeviceUnlock;
-(id)encodeAsProtoBuf;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(id)arg1 uuid:(id)arg2 ;
-(id)initWithShortcutsDictionaryRepresentation:(id)arg0 home:(id)arg1 ;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_addAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleActionSetExecutedNotification:(id)arg0 ;
-(void)_handleActionSetStartExecutionNotification:(id)arg0 ;
-(void)_recomputeAssistantIdentifier;
-(void)_registerNotificationHandlers;
-(void)_removeAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)_updateAction:(id)arg0 changes:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)addAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)recomputeAssistantIdentifier;
-(void)removeAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateApplicationData:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateName:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif