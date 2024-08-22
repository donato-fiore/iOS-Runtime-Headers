// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKIDSMANAGER_H
#define PKIDSMANAGER_H

@class NSMutableArray, NSMutableDictionary, NSHashTable, NSString, NSArray, IDSService;
@protocol IDSServiceDelegate, OS_dispatch_queue, PKIDSManagerDataSource;

#import <Foundation/Foundation.h>

#import "PKProximityAdvertiser.h"

@interface PKIDSManager : NSObject <IDSServiceDelegate>

 {
    NSMutableArray *_remoteDevices;
    NSMutableArray *_paymentRequests;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_thumbnailCompletionHandlers;
    PKProximityAdvertiser *_proximityAdvertiser;
    NSHashTable *_delegates;
    os_unfair_lock_s _delegatesLock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _requestCLTMThrottleUncapToken;
}


@property (nonatomic) NSObject<PKIDSManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (readonly, nonatomic) NSArray *paymentRequests;
@property (retain, nonatomic) NSMutableArray *pendingCancellations; // ivar: _pendingCancellations
@property (retain, nonatomic) NSMutableDictionary *pendingDiscoveries; // ivar: _pendingDiscoveries
@property (retain, nonatomic) NSMutableDictionary *recentlySeenUUIDs; // ivar: _recentlySeenUUIDs
@property (readonly, weak, nonatomic) NSArray *remoteDevices;
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (readonly) Class superclass;


-(BOOL)_queue_deviceIsRegistered:(id)arg0 ;
-(BOOL)_queue_hasRegisteredAccounts;
-(BOOL)_queue_hasRemoteDevices;
-(BOOL)hasRemoteDevices;
-(NSInteger)_paymentAuthorizationStatusForPaymentResult:(id)arg0 forRemotePaymentRequest:(id)arg1 ;
-(id)_fetchPaymentInstrumentsForRequestingDevice:(id)arg0 ;
-(id)_preparePaymentDeviceResponseForRequestingDevice:(id)arg0 userDisabled:(BOOL)arg1 ;
-(id)_queue_cancelRemotePaymentRequest:(id)arg0 completion:(id)arg1 ;
-(id)_queue_requestForIdentifier:(id)arg0 ;
-(id)cancelRemotePaymentRequest:(id)arg0 completion:(id)arg1 ;
-(id)init;
-(id)initWithIDSService:(id)arg0 ;
-(id)initWithTargetQueue:(id)arg0 ;
-(id)requestForIdentifier:(id)arg0 ;
-(id)requestInstrumentThumbnail:(id)arg0 forRemoteDevice:(id)arg1 size:(struct CGSize )arg2 completion:(id)arg3 ;
-(id)sendPayment:(id)arg0 forRemotePaymentRequest:(id)arg1 completion:(id)arg2 ;
-(id)sendPaymentClientUpdate:(id)arg0 forRemotePaymentRequest:(id)arg1 completion:(id)arg2 ;
-(id)sendPaymentHostUpdate:(id)arg0 forRemotePaymentRequest:(id)arg1 completion:(id)arg2 ;
-(id)sendPaymentResult:(id)arg0 forRemotePaymentRequest:(id)arg1 completion:(id)arg2 ;
-(id)sendPaymentStatus:(NSInteger)arg0 forRemotePaymentRequest:(id)arg1 completion:(id)arg2 ;
-(id)sendRemotePaymentRequest:(id)arg0 completion:(id)arg1 ;
-(id)sendSetupRequest:(id)arg0 appDisplayName:(id)arg1 completion:(id)arg2 ;
-(void)_archiveDevicesToDisk;
-(void)_createThumbnailCacheDirectory;
-(void)_paymentCancellationReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_paymentClientUpdateReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_paymentDiscoveryRequestReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_paymentDiscoveryResponseReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_paymentHostUpdateReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_paymentRequestReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_paymentResponseReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_paymentResultReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_paymentSetupRequestReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_populateDevicesIfNeeded;
-(void)_postCTLMThrottleUncapNotification;
-(void)_promptDetailsForVirtualCardRequestReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
// -(void)_queue_addThumbnailCompletionHandler:(id)arg0 forKey:(unk)arg1  ;
-(void)_queue_logCloudPairingState;
-(void)_queue_removeThumbnailCompletionHandlersForKeys:(id)arg0 ;
-(void)_queue_sendDeviceDiscoveryRequestToAllDevicesWithProximity:(BOOL)arg0 ;
-(void)_queue_sendDeviceDiscoveryRequestWithProximity:(BOOL)arg0 devices:(id)arg1 ;
-(void)_queue_sendDiscoveryResponse:(id)arg0 toDeviceWithFromID:(id)arg1 ;
-(void)_registerCTLMThrottleUncapNotification;
-(void)_registerListeners;
-(void)_thumbnailRequestReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_thumbnailResponseReceived:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)_unregisterCTLMThrottleUncapNotification;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)deleteArchivedDevices;
-(void)discoverRemoteDevices;
-(void)discoverRemoteDevicesWithProximity:(BOOL)arg0 ;
-(void)invalidateMessage:(id)arg0 ;
-(void)promptDetailsForVirtualCard:(id)arg0 showNotification:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeDelegate:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;


@end


#endif