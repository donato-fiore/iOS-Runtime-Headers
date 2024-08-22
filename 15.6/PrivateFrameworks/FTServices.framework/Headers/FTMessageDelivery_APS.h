// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMESSAGEDELIVERY_APS_H
#define FTMESSAGEDELIVERY_APS_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol FTMessageQueueDelegate, APSConnectionDelegate, FTMessageDeliveryAPSConnection, FTMessageDeliveryAPSMobileNetworkManager;


#import "FTMessageDelivery.h"

@interface FTMessageDelivery_APS : FTMessageDelivery <FTMessageQueueDelegate, APSConnectionDelegate>

 {
    id<FTMessageDeliveryAPSConnection> *_connection;
    id<FTMessageDeliveryAPSMobileNetworkManager> *_mobileNetworkManager;
    Class _APSOutgoingMessageClass;
    NSMutableArray *_enabledTopics;
    NSMutableDictionary *_ftMessageMap;
    NSMutableDictionary *_startDateMap;
    NSMutableDictionary *_bodyMap;
    NSMutableDictionary *_apsMessageMap;
    NSMutableDictionary *_timerMap;
    NSMutableDictionary *_deathTimerMap;
    NSMutableDictionary *_retriesMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_fillMessageParameters:(*id)arg0 ftMessage:(*id)arg1 ;
-(BOOL)_isBusyWithMessage:(id)arg0 ;
-(BOOL)_sendMessageAsynchronously:(id)arg0 error:(*id)arg1 ;
-(BOOL)_shouldSendSOSForFailure:(id)arg0 ;
-(BOOL)busy;
-(BOOL)sendMessage:(id)arg0 ;
-(NSInteger)_retryCountForMessage:(id)arg0 ;
-(NSInteger)maxLargeMessageSize;
-(NSInteger)maxMessageSize;
-(id)_apsMessageBodyForMessage:(id)arg0 ;
-(id)_apsMessageForMessage:(id)arg0 body:(id)arg1 ;
-(id)_apsOutgoingMessageForFTMessage:(id)arg0 ;
-(id)_bodyForMessage:(id)arg0 ;
-(id)_currentAPSMessages;
-(id)_currentMessages;
-(id)_currentTimers;
-(id)_messageForAPSOutgoingMessage:(id)arg0 ;
-(id)_requiredTopics;
-(id)allMessages;
-(id)connection;
-(id)init;
-(id)initWithAPSConnection:(id)arg0 mobileNetworkManager:(id)arg1 ;
-(void)_clearMapForMessageID:(id)arg0 ;
-(void)_dequeueIfNeeded;
-(void)_invalidateDeathTimerForMessageID:(id)arg0 ;
-(void)_invalidateTimerForMessageID:(id)arg0 ;
-(void)_messageACKTimedOut:(id)arg0 ;
-(void)_messageAckGracePeriodTimedOut:(id)arg0 ;
-(void)_messageCompletelyTimedOut:(id)arg0 ;
-(void)_messageNeedsRetry:(id)arg0 ;
-(void)_messageSendTimedOut:(id)arg0 ;
-(void)_noteMessageACKd:(id)arg0 ftMessage:(id)arg1 ;
-(void)_noteMessageFailed:(id)arg0 ftMessage:(id)arg1 retryBehavior:(int)arg2 error:(id)arg3 ;
-(void)_noteMessageSent:(id)arg0 ftMessage:(id)arg1 body:(id)arg2 ;
-(void)_noteMessageSucceeded:(id)arg0 ftMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(NSInteger)arg4 ;
-(void)_notifyDelegateAboutError:(id)arg0 resultCode:(NSInteger)arg1 forMessage:(id)arg2 ;
-(void)_powerLogEvent:(id)arg0 dictionary:(id)arg1 ;
-(void)_sendMessage:(id)arg0 ftMessage:(id)arg1 ;
-(void)_serverBagLoaded:(id)arg0 ;
-(void)_setEnabledTopics:(id)arg0 ;
-(void)_setMapForMessage:(id)arg0 apsMessage:(id)arg1 messageBody:(id)arg2 timeoutTime:(CGFloat)arg3 timeoutSelector:(SEL)arg4 retries:(id)arg5 ;
-(void)_updateTopics;
-(void)cancelMessage:(id)arg0 ;
-(void)connection:(id)arg0 didChangeConnectedStatus:(BOOL)arg1 ;
-(void)connection:(id)arg0 didFailToSendOutgoingMessage:(id)arg1 error:(id)arg2 ;
-(void)connection:(id)arg0 didReceiveMessageForTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didSendOutgoingMessage:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)queue:(id)arg0 hitTimeoutForMessage:(id)arg1 ;


@end


#endif