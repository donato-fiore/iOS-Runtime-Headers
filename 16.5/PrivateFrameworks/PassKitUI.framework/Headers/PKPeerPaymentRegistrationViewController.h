// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTREGISTRATIONVIEWCONTROLLER_H
#define PKPEERPAYMENTREGISTRATIONVIEWCONTROLLER_H

@class UIViewController, NSDictionary, NSString;
@protocol PKPaymentSetupDelegate;


#import "PKPeerPaymentRegistrationFlowController.h"

@interface PKPeerPaymentRegistrationViewController : UIViewController <PKPaymentSetupDelegate>

 {
    PKPeerPaymentRegistrationFlowController *_flowController;
    NSDictionary *_userInfo;
    id *_dismissHandler;
    BOOL _dismissed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithUserInfo:(id)arg0 ;
-(void)_dismiss;
-(void)paymentSetupDidFinish:(id)arg0 ;
-(void)setDismissHandler:(id)arg0 ;
-(void)startRegistrationFlowWithCompletion:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif