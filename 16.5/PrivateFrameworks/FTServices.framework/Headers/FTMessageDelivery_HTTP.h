// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMESSAGEDELIVERY_HTTP_H
#define FTMESSAGEDELIVERY_HTTP_H

@class IDSServerBag;
@protocol FTMessageQueueDelegate, FTMessageDeliveryRemoteURLConnectionFactory, FTMessageDeliveryRemoteURLConnection, FTMessageDeliveryHTTPMobileNetworkManager;


#import "FTMessageDelivery.h"

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate>

 {
    id<FTMessageDeliveryRemoteURLConnectionFactory> *_remoteConnectionFactory;
    id<FTMessageDeliveryRemoteURLConnection> *_remoteConnection;
    id<FTMessageDeliveryHTTPMobileNetworkManager> *_mobileNetworkManager;
    BOOL _pendingRetryAfterAirplaneMode;
    CGFloat _retryTimeAfterAirplaneMode;
    id *_retryBackoffProvider;
    IDSServerBag *_idsServerBag;
    IDSServerBag *_iMessageServerBag;
}




-(BOOL)_sendMessageAsynchronously:(id)arg0 error:(*id)arg1 ;
-(BOOL)_tryRetryMessageWithTimeInterval:(CGFloat)arg0 ;
-(BOOL)busy;
-(BOOL)sendMessage:(id)arg0 ;
-(BOOL)sendMessageAtTopOfTheQueue:(id)arg0 ;
-(id)_processResultData:(id)arg0 forMessage:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithIDSServerBag:(id)arg0 ;
-(id)initWithIDSServerBag:(id)arg0 iMessageServerBag:(id)arg1 remoteConnectionFactory:(id)arg2 mobileNetworkManager:(id)arg3 retryBackoffProvider:(id)arg4 ;
-(void)_cleanupURLConnection;
-(void)_clearRetryTimer;
-(void)_dequeueIfNeeded;
-(void)_informDelegatesOfMessage:(id)arg0 result:(id)arg1 resultCode:(NSInteger)arg2 error:(id)arg3 ;
-(void)_notifyDelegateAboutError:(id)arg0 ;
-(void)_serverBagLoaded:(id)arg0 ;
-(void)_updateWiFiAssertions;
-(void)_urlRequestWithURL:(id)arg0 andData:(id)arg1 message:(id)arg2 completionBlock:(id)arg3 ;
-(void)cancelMessage:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)networkStateChanged;
-(void)queue:(id)arg0 hitTimeoutForMessage:(id)arg1 ;


@end


#endif