// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16SIRIAUDIOSUPPORTP33_803E311218F114B89697FFF1DFF8ED2632APPLEMEDIASERVICESREQUESTHANDLER_H
#define _TTC16SIRIAUDIOSUPPORTP33_803E311218F114B89697FFF1DFF8ED2632APPLEMEDIASERVICESREQUESTHANDLER_H

@protocol AMSPurchaseDelegate, AMSPurchaseResponseProtocol;

#import <Foundation/Foundation.h>


@interface _TtC16SiriAudioSupportP33_803E311218F114B89697FFF1DFF8ED2632AppleMediaServicesRequestHandler : NSObject <AMSPurchaseDelegate, AMSPurchaseResponseProtocol>





-(id)init;
-(void)handleAuthenticateRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleDialogRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)purchase:(id)arg0 handleAuthenticateRequest:(id)arg1 completion:(id)arg2 ;
-(void)purchase:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;
-(void)purchase:(id)arg0 handleEngagementRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif