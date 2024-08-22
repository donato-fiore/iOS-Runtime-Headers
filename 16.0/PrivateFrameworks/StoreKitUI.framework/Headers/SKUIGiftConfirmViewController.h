// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGIFTCONFIRMVIEWCONTROLLER_H
#define SKUIGIFTCONFIRMVIEWCONTROLLER_H



#import "SKUIGiftStepViewController.h"
#import "SKUIGiftConfirmView.h"
#import "SKUIGiftPurchaseRequest.h"
#import "SKUIFocusedTouchGestureRecognizer.h"

@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController {
    SKUIGiftConfirmView *_confirmView;
    BOOL _isShowingConfirmation;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    SKUIFocusedTouchGestureRecognizer *_touchRecognizer;
}




-(id)_buyButtonTitle;
-(id)_confirmButtonTitle;
-(id)_newBuyBarButtonItemWithTitle:(id)arg0 ;
-(id)initWithGift:(id)arg0 configuration:(id)arg1 ;
-(void)_buyButtonAction:(id)arg0 ;
-(void)_cancelBuyConfirmation:(id)arg0 ;
-(void)_finishPurchaseWithResult:(BOOL)arg0 errorMessage:(id)arg1 ;
-(void)_purchaseGift;
-(void)_removeCancelGestureRecognizer;
-(void)_setShowingConfirmation:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_showSuccessPage;
-(void)_termsButtonAction:(id)arg0 ;
-(void)dealloc;
-(void)loadView;


@end


#endif