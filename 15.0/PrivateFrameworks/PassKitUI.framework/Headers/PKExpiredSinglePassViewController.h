// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKEXPIREDSINGLEPASSVIEWCONTROLLER_H
#define PKEXPIREDSINGLEPASSVIEWCONTROLLER_H

@class UIViewController, PKPass, UIBarButtonItem, NSString;
@protocol WLCardViewDelegate, PKPassDeleteHandler, PKExpiredPassesDetailsResponder;


#import "PKPassView.h"

@interface PKExpiredSinglePassViewController : UIViewController <WLCardViewDelegate, PKPassDeleteHandler, PKExpiredPassesDetailsResponder>

 {
    PKPass *_pass;
    PKPassView *_passView;
    UIBarButtonItem *_deleteBarButton;
    UIBarButtonItem *_recoverBarButton;
    UIBarButtonItem *_flexibleSpace;
    UIBarButtonItem *_infoButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleDeletePassRequestWithPass:(id)arg0 forViewController:(id)arg1 ;
-(id)_barcodePassDetailsViewControllerForBarcodePass:(id)arg0 ;
-(id)_infoButton;
-(id)_paymentPassDetailsViewControllerForPaymentPass:(id)arg0 ;
-(id)initWithPass:(id)arg0 ;
-(id)pass;
-(void)_deletePassConfirmed;
-(void)_deletePassPressed;
-(void)_didPresentDetailViewController;
-(void)_doneButtonPressed;
-(void)_expiredPassRemovalConfirmedAsDeletion:(BOOL)arg0 ;
-(void)_moreButtonPressed;
-(void)_recoverPassConfirmed;
-(void)_recoverPassPressed;
-(void)disableButtons;
-(void)enableButtons;
-(void)passViewSetup;
-(void)passWasUpdated:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif