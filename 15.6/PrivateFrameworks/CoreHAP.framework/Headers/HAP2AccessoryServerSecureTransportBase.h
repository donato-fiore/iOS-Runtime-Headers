// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2ACCESSORYSERVERSECURETRANSPORTBASE_H
#define HAP2ACCESSORYSERVERSECURETRANSPORTBASE_H

@class NSString;
@protocol HAP2AccessoryServerTransportDelegate, HAP2AccessoryServerSecureTransport, HAP2AccessoryServerSecureTransportDelegate, HAPEncryptedSession, HAP2AccessoryServerTransport, HAP2AccessoryServerTransportCommon;


#import "HAP2AccessoryServerTransportBase.h"

@interface HAP2AccessoryServerSecureTransportBase : HAP2AccessoryServerTransportBase <HAP2AccessoryServerTransportDelegate, HAP2AccessoryServerSecureTransport>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerSecureTransportDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<HAPEncryptedSession> *encryptedSession; // ivar: _encryptedSession
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maxRequestTimeout;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerTransport> *transport; // ivar: _transport
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerTransportCommon> *underlyingTransport;


+(id)defaultEncryptedSession;
-(BOOL)mergeWithNewTransport:(id)arg0 ;
-(NSUInteger)protocolFeaturesForVersion:(id)arg0 ;
-(id)decryptData:(id)arg0 type:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)encryptData:(id)arg0 error:(*id)arg1 ;
-(id)endpointForCharacteristic:(id)arg0 ;
-(id)endpointForCharacteristics:(id)arg0 ;
-(id)initWithOperationQueue:(id)arg0 delegateQueue:(id)arg1 transport:(id)arg2 ;
-(id)initWithOperationQueue:(id)arg0 delegateQueue:(id)arg1 transport:(id)arg2 encryptedSession:(id)arg3 ;
-(id)mimeTypeForCharacteristicRequests;
-(id)mimeTypeForWellKnownEndpoint:(NSUInteger)arg0 ;
-(id)wellKnownEndpoint:(NSUInteger)arg0 ;
-(void)_decryptResponse:(id)arg0 request:(id)arg1 completion:(id)arg2 ;
-(void)_encryptRequest:(id)arg0 completion:(id)arg1 ;
-(void)_sendRequest:(id)arg0 completion:(id)arg1 ;
-(void)didChangeStateWithError:(id)arg0 ;
-(void)doCloseWithError:(id)arg0 completion:(id)arg1 ;
-(void)doOpenWithCompletion:(id)arg0 ;
-(void)doSendRequest:(id)arg0 completion:(id)arg1 ;
-(void)doUpdateMaxRequestTimeout:(CGFloat)arg0 ;
-(void)transport:(id)arg0 didChangeState:(NSUInteger)arg1 error:(id)arg2 ;
-(void)transport:(id)arg0 didReceiveEvent:(id)arg1 ;


@end


#endif