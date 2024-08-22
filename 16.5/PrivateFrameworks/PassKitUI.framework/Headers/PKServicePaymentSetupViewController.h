// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSERVICEPAYMENTSETUPVIEWCONTROLLER_H
#define PKSERVICEPAYMENTSETUPVIEWCONTROLLER_H

@class UIViewController, PKPaymentProvisioningController, NSString;
@protocol PKServicePaymentSetupViewControllerProtocol, PKPaymentSetupDelegate;



@interface PKServicePaymentSetupViewController : UIViewController <PKServicePaymentSetupViewControllerProtocol, PKPaymentSetupDelegate>

 {
    PKPaymentProvisioningController *_provisioningController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(NSUInteger)supportedInterfaceOrientations;
-(void)_handleError:(id)arg0 completion:(id)arg1 ;
-(void)configureWithPaymentSetupRequest:(id)arg0 completion:(id)arg1 ;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)paymentSetupDidFinish:(id)arg0 withError:(id)arg1 ;
-(void)paymentSetupDidShowError:(id)arg0 ;
-(void)setDisplayPropertiesWithScreenSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif