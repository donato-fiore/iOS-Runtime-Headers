// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKINAPPPAYMENTSERVICE_H
#define PKINAPPPAYMENTSERVICE_H


#import <Foundation/Foundation.h>

#import "PKXPCService.h"

@interface PKInAppPaymentService : NSObject {
    PKXPCService *_remoteService;
}




-(BOOL)secureElementStatus:(*NSUInteger)arg0 ;
-(NSInteger)cardsAvailableForAMPWithCountryCode:(id)arg0 ;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg0 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)paymentHardwareStatusWithType:(NSUInteger)arg0 ;
-(void)cardDataForMerchantIdentifier:(id)arg0 countryCode:(id)arg1 completion:(id)arg2 ;
-(void)cardsAvailableForAMPWithCountryCode:(id)arg0 completion:(id)arg1 ;
-(void)enrollPaymentPassWithUniqueIdentifier:(id)arg0 merchantSession:(id)arg1 completion:(id)arg2 ;
-(void)merchantStatusCheck:(id)arg0 merchantDomain:(id)arg1 sourceApplicationSecondaryIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)paymentHardwareStatusWithType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)paymentServicesMerchantURLForAPIType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg0 forHostIdentifier:(id)arg1 hostSceneIdentifier:(id)arg2 orientation:(id)arg3 completion:(id)arg4 ;
-(void)registerPaymentListenerEndpoint:(id)arg0 forHostIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)secureElementStatusWithCompletion:(id)arg0 ;


@end


#endif