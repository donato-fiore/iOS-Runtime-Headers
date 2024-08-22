// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSTASKINGSERVICE_H
#define DRSTASKINGSERVICE_H

@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "DRSTaskingEventPublisher.h"
#import "DRSTaskingManager.h"

@interface DRSTaskingService : NSObject

@property (readonly, nonatomic) DRSTaskingEventPublisher *eventPublisher; // ivar: _eventPublisher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageQueue; // ivar: _messageQueue
@property (readonly, nonatomic) NSObject<OS_xpc_object> *serviceConnection; // ivar: _serviceConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *serviceDeactivatedSem; // ivar: _serviceDeactivatedSem
@property (readonly, nonatomic) unsigned char state; // ivar: _state
@property (readonly, nonatomic) DRSTaskingManager *taskingManager; // ivar: _taskingManager


+(BOOL)serviceIsEnabled;
+(id)databaseDirectory;
+(id)sharedInstance;
-(BOOL)activateService;
-(id)init;
-(void)_applyCloudChannelConfig:(id)arg0 dueToMessage:(id)arg1 state:(id)arg2 messageType:(NSUInteger)arg3 ;
-(void)_checkForDefaultSubscriptionUpdate;
-(void)_configureInvalidationXPCActivity;
-(void)_configureXPCActivities;
-(void)_handleBroadcastRequestMessaage:(id)arg0 state:(id)arg1 ;
-(void)_handleClearTaskingStateMessage:(id)arg0 state:(id)arg1 ;
-(void)_handleCloudChannelConfigGet:(id)arg0 state:(id)arg1 ;
-(void)_handleCloudChannelConfigReset:(id)arg0 state:(id)arg1 ;
-(void)_handleCloudChannelConfigSet:(id)arg0 state:(id)arg1 ;
-(void)_handleConfigCompletionMessage:(id)arg0 state:(id)arg1 ;
-(void)_handleConfigStateMessage:(id)arg0 state:(id)arg1 ;
-(void)_handleInvalidMessage:(id)arg0 state:(id)arg1 ;
-(void)_handleJSONTaskingSystemMessage:(id)arg0 state:(id)arg1 transaction:(id)arg2 ;
-(void)_sendClearStateReplyForMessage:(id)arg0 rejectionReason:(char *)arg1 ;
-(void)_sendConfigStateReplyForMessage:(id)arg0 rejectionReason:(char *)arg1 state:(unsigned char)arg2 completionType:(NSUInteger)arg3 ;
-(void)_sendReplyForMessage:(id)arg0 replyType:(NSUInteger)arg1 rejectionReason:(char *)arg2 ;
-(void)_waitForDeviceUnlockAndInitializeServiceState;
-(void)deactivateService;
-(void)dealloc;
-(void)handleRequest:(id)arg0 state:(id)arg1 ;


@end


#endif