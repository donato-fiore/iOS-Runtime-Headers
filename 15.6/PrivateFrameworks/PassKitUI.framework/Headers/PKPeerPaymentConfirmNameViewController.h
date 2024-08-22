// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTCONFIRMNAMEVIEWCONTROLLER_H
#define PKPEERPAYMENTCONFIRMNAMEVIEWCONTROLLER_H

@class PKFamilyMember, UIBarButtonItem, NSString;
@protocol PKPaymentSetupViewControllerDelegate, PKPeerPaymentConfirmNameViewControllerDelegate;


#import "PKPaymentSetupFieldsViewController.h"

@interface PKPeerPaymentConfirmNameViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupViewControllerDelegate>

 {
    PKFamilyMember *_familyMember;
    NSInteger _context;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_spinnerButton;
    BOOL _showSpinner;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPeerPaymentConfirmNameViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFamilyMember:(id)arg0 delegate:(id)arg1 context:(NSInteger)arg2 ;
-(void)_cancelPressed;
-(void)_continue;
-(void)_donePressed;
-(void)showSpinner:(BOOL)arg0 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif