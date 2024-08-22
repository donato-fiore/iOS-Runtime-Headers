// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTINFORMATIONEVENTEXTENSIONHOSTCONTEXT_H
#define PKPAYMENTINFORMATIONEVENTEXTENSIONHOSTCONTEXT_H

@protocol PKPaymentInformationEventExtensionHostContextProtocol, OS_dispatch_queue;


#import "PKPaymentInformationEventExtensionBaseContext.h"

@interface PKPaymentInformationEventExtensionHostContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionHostContextProtocol>

 {
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)replyQueue;
-(id)vendorContext;
-(id)vendorContextWithErrorHandler:(id)arg0 ;
-(void)handleConfigurationRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleInformationRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleSignatureRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif