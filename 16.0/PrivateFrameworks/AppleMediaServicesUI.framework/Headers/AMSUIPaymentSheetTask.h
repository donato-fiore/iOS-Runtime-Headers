// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIPAYMENTSHEETTASK_H
#define AMSUIPAYMENTSHEETTASK_H

@class AMSPaymentSheetTask, NSString;
@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate;



@interface AMSUIPaymentSheetTask : AMSPaymentSheetTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)presentationSceneIdentifierForPaymentAuthorizationController:(id)arg0 ;
-(id)presentationWindowForPaymentAuthorizationController:(id)arg0 ;
-(void)paymentAuthorizationControllerDidFinish:(id)arg0 ;


@end


#endif