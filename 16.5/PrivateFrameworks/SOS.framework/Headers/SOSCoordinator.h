// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSCOORDINATOR_H
#define SOSCOORDINATOR_H

@class IDSService, NSMutableArray, NSMutableDictionary, NSString, NSHashTable;
@protocol IDSServiceDelegate, OS_dispatch_semaphore, OS_dispatch_queue, SOSCoreAnalyticsReporting;

#import <Foundation/Foundation.h>


@interface SOSCoordinator : NSObject <IDSServiceDelegate>

 {
    IDSService *_idsService;
    NSMutableArray *_processingEventUUIDs;
    NSObject<OS_dispatch_semaphore> *_eventProcessingSemaphore;
    NSObject<OS_dispatch_queue> *_eventUUIDArrayQueue;
    NSObject<OS_dispatch_queue> *_pendingMessagesQueue;
    NSMutableDictionary *_pendingMessagesById;
    NSMutableDictionary *_pendingMessageRetriesById;
    BOOL _ackSuccess;
}


@property (retain, nonatomic) NSObject<SOSCoreAnalyticsReporting> *coreAnalyticsReporter; // ivar: _coreAnalyticsReporter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_sendUrgentMessageToPairedDevice:(id)arg0 retries:(id)arg1 ;
-(BOOL)isIncomingMessageValidHandoffAck:(id)arg0 ;
-(BOOL)isIncomingMessageValidSOSHandoff:(id)arg0 ;
-(BOOL)isPairedDeviceNearby;
-(BOOL)processEventWithUUID:(id)arg0 triggerMechanism:(NSInteger)arg1 ;
-(BOOL)sendUrgentMessageToPairedDevice:(id)arg0 ;
-(BOOL)shouldHandoffToPairedDevice:(NSInteger)arg0 ;
-(BOOL)shouldRetryMessage:(id)arg0 ;
-(BOOL)tryPushToPairedDeviceWithUUID:(id)arg0 triggerMechanism:(NSInteger)arg1 ;
-(NSInteger)SOSCoordinationMessageTypeForString:(id)arg0 ;
-(NSInteger)sourceDevice;
-(id)effectivePairedDevice;
-(id)init;
-(void)_handleServiceUpdate:(id)arg0 ;
-(void)_updateStateForPairedDevice:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)handleSOSMessageTypeHandoffSOS:(id)arg0 ;
-(void)handleSOSMessageTypeHandoffSOSAck:(id)arg0 ;
-(void)handleSOSMessageTypeProgressionSync:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)reportHandoff:(NSInteger)arg0 result:(NSInteger)arg1 ;
-(void)sendAckToHandoffMessage:(id)arg0 success:(BOOL)arg1 ;
-(void)sendUpdateToObserversWithStatus:(id)arg0 progression:(NSInteger)arg1 shouldHandleThirdParty:(BOOL)arg2 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)syncProgressionWithPairedDevice:(NSInteger)arg0 sosStatus:(id)arg1 ;


@end


#endif