// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTREMOTEOBJECT_H
#define BLTREMOTEOBJECT_H

@class NSMutableDictionary, NSString, NSLock;
@protocol IDSServiceDelegate, OS_dispatch_queue, BLTAbstractIDSDevice, BLTAbstractIDSService;

#import <Foundation/Foundation.h>

#import "BLTSimpleCache.h"
#import "BLTPBProtobufSequenceNumberManager.h"

@interface BLTRemoteObject : NSObject <IDSServiceDelegate>

 {
    NSMutableDictionary *_idsSendIDToCompletionHandler;
    NSMutableDictionary *_idsSendIDToResponseHandler;
    NSMutableDictionary *_idsFileIDToResponseHandler;
    NSString *_serviceName;
    BOOL _full;
    NSObject<OS_dispatch_queue> *_idsQueue;
    id<BLTAbstractIDSDevice> *_defaultPairedDevice;
    NSMutableDictionary *_idsRequestMessageTypeToSelector;
    NSLock *_sequenceNumberSendLock;
    NSObject<OS_dispatch_queue> *_connectionStatusQueue;
    NSUInteger _stateHandler;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastKnownConnectionStatus; // ivar: _lastKnownConnectionStatus
@property (retain, nonatomic) BLTSimpleCache *mruCacheOfReceives; // ivar: _mruCacheOfReceives
@property (retain, nonatomic) BLTSimpleCache *mruCacheOfSends; // ivar: _mruCacheOfSends
@property (getter=isPairedDeviceReady) BOOL pairedDeviceReady; // ivar: _pairedDeviceReady
@property (readonly, nonatomic) BLTPBProtobufSequenceNumberManager *sequenceNumberManager; // ivar: _sequenceNumberManager
@property (readonly, nonatomic) NSObject<BLTAbstractIDSService> *service; // ivar: _service
@property (readonly) Class superclass;


-(BOOL)_callSendCompletionHandlerWithSuccess:(BOOL)arg0 identifier:(id)arg1 error:(id)arg2 ;
-(BOOL)_idsQueueCallSendCompletionHandlerWithSuccess:(BOOL)arg0 identifier:(id)arg1 error:(id)arg2 ;
-(BOOL)_sequenceErrorDidHappenAndHandled:(NSInteger)arg0 service:(id)arg1 incomingIdentifier:(id)arg2 ;
-(NSUInteger)connectionStatus;
-(id)_wrapError:(id)arg0 identifier:(id)arg1 ;
-(id)initWithServiceName:(id)arg0 idsQueueName:(char *)arg1 ;
-(id)initWithServiceName:(id)arg0 idsQueueName:(char *)arg1 andClientQueue:(id)arg2 ;
-(void)_deviceConnectionStatusChanged:(id)arg0 ;
-(void)_handleNewSessionState:(NSUInteger)arg0 ;
-(void)_queueHandleIDSProtobuf:(id)arg0 ;
// -(void)_queuePerformSend:(id)arg0 responseToRequest:(unk)arg1 withTimeout:(id)arg2 withDescription:(id)arg3 shortDescription:(id)arg4 onlyOneFor:(id)arg5 allowCloudDelivery:(id)arg6 nonWaking:(BOOL)arg7 didSend:(BOOL)arg8 andResponse:(id)arg9  ;
-(void)_queueSendRequest:(id)arg0 ;
-(void)_queueUpdateConnectionStatusWithResetDefaulteDevice:(BOOL)arg0 ;
-(void)_removeAndHandleResponseHandler:(id)arg0 ;
-(void)_sendAckInitialSequenceNumberForSession:(id)arg0 sessionState:(NSUInteger)arg1 ;
-(void)_sendAckInitialSequenceNumberForSession:(id)arg0 withAssert:(BOOL)arg1 sessionState:(*NSUInteger)arg2 ;
-(void)_sendAssertForSession;
-(void)_setStandaloneTestModeEnabled:(BOOL)arg0 ;
-(void)_storeProtobufAction:(SEL)arg0 messageType:(unsigned short)arg1 messageSendType:(NSInteger)arg2 ;
-(void)_updateConnectionStatus;
-(void)_updateConnectionStatusWithResetDefaulteDevice:(BOOL)arg0 ;
-(void)dealloc;
-(void)disableStandaloneTestMode;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(NSUInteger)arg0 maximumSendDelay:(NSUInteger)arg1 minimumResponseDelay:(NSUInteger)arg2 maximumResponseDelay:(NSUInteger)arg3 ;
-(void)handleAckInitialSequenceNumberRequest:(id)arg0 ;
-(void)handleFileURL:(id)arg0 extraMetadata:(id)arg1 ;
-(void)handleIDSProtobuf:(id)arg0 ;
-(void)handleIncomingMessage:(id)arg0 ;
-(void)registerProtobufHandlers;
// -(void)sendFileURL:(id)arg0 withTimeout:(id)arg1 extraMetadata:(id)arg2 responseHandlers:(id)arg3 didSend:(id)arg4 didQueue:(unk)arg5  ;
-(void)sendRequest:(id)arg0 ;
-(void)sendRequest:(id)arg0 type:(unsigned short)arg1 ;
-(void)sendRequest:(id)arg0 type:(unsigned short)arg1 didSend:(id)arg2 ;
-(void)sendRequest:(id)arg0 type:(unsigned short)arg1 withTimeout:(id)arg2 didSend:(id)arg3 ;
// -(void)sendRequest:(id)arg0 type:(unsigned short)arg1 withTimeout:(id)arg2 didSend:(id)arg3 didQueue:(unk)arg4  ;
-(void)sendRequest:(id)arg0 type:(unsigned short)arg1 withTimeout:(id)arg2 withDescription:(id)arg3 didSend:(id)arg4 ;
// -(void)sendRequest:(id)arg0 type:(unsigned short)arg1 withTimeout:(id)arg2 withDescription:(id)arg3 onlyOneFor:(id)arg4 didSend:(id)arg5 andResponse:(unk)arg6  ;
-(void)sendResponse:(id)arg0 type:(unsigned short)arg1 withRequest:(id)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(id)arg6 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)setProtobufAction:(SEL)arg0 forIncomingRequestsOfType:(unsigned short)arg1 ;
-(void)setProtobufAction:(SEL)arg0 forIncomingResponsesOfType:(unsigned short)arg1 ;


@end


#endif