// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPGETAPPVIEWCONTROLLER_H
#define PKPAYMENTSETUPGETAPPVIEWCONTROLLER_H

@class PKPaymentSetupProduct, ASCLockupView, NSString;
@protocol PKLinkedApplicationObserver, ASCLockupViewDelegate;


#import "PKExplanationViewController.h"
#import "PKLinkedApplication.h"

@interface PKPaymentSetupGetAppViewController : PKExplanationViewController <PKLinkedApplicationObserver, ASCLockupViewDelegate>

 {
    PKPaymentSetupProduct *_product;
    PKLinkedApplication *_linkedApplication;
    ASCLockupView *_appStoreView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPaymentProduct:(id)arg0 setupContext:(NSInteger)arg1 ;
-(id)presentingViewControllerForLockupView:(id)arg0 ;
-(void)_updateAppStoreViewRequest;
-(void)linkedApplicationDidChangeState:(id)arg0 ;
-(void)lockupViewDidInvalidateIntrinsicContentSize:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif