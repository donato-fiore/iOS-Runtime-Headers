// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREMOTEADDPAYMENTPASSVIEWCONTROLLER_H
#define PKREMOTEADDPAYMENTPASSVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol PKRemoteAddPassViewControllerProtocol, PKAddPaymentPassViewControllerDelegate;



@interface PKRemoteAddPaymentPassViewController : UIRemoteViewController <PKRemoteAddPassViewControllerProtocol>

 {
    BOOL _finished;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAddPaymentPassViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)_addPaymentPassVC;
-(void)dealloc;
-(void)didFinishWithPass:(id)arg0 error:(id)arg1 ;
-(void)generateRequestWithCertificateChain:(id)arg0 nonce:(id)arg1 nonceSignature:(id)arg2 completionHandler:(id)arg3 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif