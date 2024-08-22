// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ACCESSORYSERVERTRANSPORTCOAP_H
#define HAP2ACCESSORYSERVERTRANSPORTCOAP_H

@class HMFActivity, NSString;
@protocol HAP2CoAPClientDelegate, HAP2CoAPClient, OS_nw_connection, HAP2AccessoryServerDiscovery, HAP2AccessoryServerTransportCoAPClientFactory;


#import "HAP2AccessoryServerTransportBaseWithDelegate.h"
#import "HAP2AccessoryServerDiscoveryAccessoryInfo.h"

@interface HAP2AccessoryServerTransportCoAP : HAP2AccessoryServerTransportBaseWithDelegate <HAP2CoAPClientDelegate>

 {
    id *_stateChangeCompletion;
    id *_sendRequestCompletion;
    HMFActivity *_resolveActivity;
    id<HAP2CoAPClient> *_coapClient;
    NSUInteger _maxTransmitAttempts;
    CGFloat _initialACKTimeout;
    NSObject<OS_nw_connection> *_nwConnection;
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
    id<HAP2AccessoryServerDiscovery> *_discovery;
    HAP2AccessoryServerDiscoveryAccessoryInfo *_acessoryInfo;
    CGFloat _addressResolutionTimeout;
    id<HAP2AccessoryServerTransportCoAPClientFactory> *_coapClientFactory;
    coap_address_t _ipAddress;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)mergeWithNewTransport:(id)arg0 ;
-(NSUInteger)protocolFeaturesForVersion:(id)arg0 ;
-(id)endpointForCharacteristic:(id)arg0 ;
-(id)endpointForCharacteristics:(id)arg0 ;
-(id)initWithAccessoryInfo:(id)arg0 discovery:(id)arg1 operationQueue:(id)arg2 ;
-(id)initWithOperationQueue:(id)arg0 delegateQueue:(id)arg1 ;
-(id)initWithOperationQueue:(id)arg0 delegateQueue:(id)arg1 serviceName:(id)arg2 serviceType:(id)arg3 serviceDomain:(id)arg4 addressResolutionTimeout:(CGFloat)arg5 discovery:(id)arg6 accessoryInfo:(id)arg7 coapClient:(id)arg8 coapClientFactory:(id)arg9 ;
-(id)initWithServiceName:(id)arg0 type:(id)arg1 domain:(id)arg2 operationQueue:(id)arg3 ;
-(id)mimeTypeForCharacteristicRequests;
-(id)mimeTypeForWellKnownEndpoint:(NSUInteger)arg0 ;
-(id)underlyingTransport;
-(id)wellKnownEndpoint:(NSUInteger)arg0 ;
-(void)client:(id)arg0 didReceiveEvent:(id)arg1 ;
-(void)clientDidDisconnect:(id)arg0 error:(id)arg1 ;
-(void)doCloseWithError:(id)arg0 completion:(id)arg1 ;
-(void)doOpenWithCompletion:(id)arg0 ;
-(void)doSendRequest:(id)arg0 completion:(id)arg1 ;
-(void)doUpdateMaxRequestTimeout:(CGFloat)arg0 ;


@end


#endif