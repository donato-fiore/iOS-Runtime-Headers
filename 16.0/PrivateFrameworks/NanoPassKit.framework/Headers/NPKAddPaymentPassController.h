// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKADDPAYMENTPASSCONTROLLER_H
#define NPKADDPAYMENTPASSCONTROLLER_H

@class PKAddPaymentPassController, PKAddPaymentPassRequestConfiguration, NSString, PKXPCService;
@protocol NPKAddPaymentPassControllerClientProtocol, PKXPCServiceDelegate;



@interface NPKAddPaymentPassController : PKAddPaymentPassController <NPKAddPaymentPassControllerClientProtocol, PKXPCServiceDelegate>



@property (retain, nonatomic) PKAddPaymentPassRequestConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFinishCallbackSent; // ivar: _didFinishCallbackSent
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKXPCService *remoteService; // ivar: _remoteService
@property (readonly) Class superclass;


+(BOOL)canAddPaymentPass;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)initWithRequestConfiguration:(id)arg0 delegate:(id)arg1 ;
-(void)_sendDidFinishWithPass:(id)arg0 error:(id)arg1 ;
-(void)didFinishWithPass:(id)arg0 error:(id)arg1 ;
-(void)dismissWithCompletion:(id)arg0 ;
-(void)generateRequestWithCertificateChain:(id)arg0 nonce:(id)arg1 nonceSignature:(id)arg2 completionHandler:(id)arg3 ;
-(void)presentWithCompletion:(id)arg0 ;
-(void)remoteService:(id)arg0 didEstablishConnection:(id)arg1 ;
-(void)remoteService:(id)arg0 didInterruptConnection:(id)arg1 ;


@end


#endif