// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSPAYMENTCARDFRONTFACEVIEW_H
#define PKPASSPAYMENTCARDFRONTFACEVIEW_H

@class UILabel, UIView, NSMutableArray, UIButton, UIImageView;


#import "PKPassFrontFaceView.h"
#import "PKBackdropView.h"
#import "PKBarcodeStickerView.h"

@interface PKPassPaymentCardFrontFaceView : PKPassFrontFaceView {
    UILabel *_balanceLabel;
    UIView *_scrimView;
    PKBackdropView *_backdropView;
    PKBarcodeStickerView *_topBarcodeView;
    PKBarcodeStickerView *_bottomBarcodeView;
    NSMutableArray *_oldTopBarcodeViews;
    NSMutableArray *_oldBottomBarcodeViews;
    UIButton *_fullScreenButton;
    UIImageView *_compactBankLogoView;
    BOOL _accountIsActive;
    BOOL _accountSupportsTopUp;
}




-(BOOL)showsShare;
-(CGFloat)_barcodePadding;
-(id)_filterAuxiliaryField:(id)arg0 ;
-(id)_filterSecondaryField:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)templateForHeaderBucket;
-(id)templateForLayoutMode:(NSInteger)arg0 ;
-(struct CGSize )_barcodeSize;
-(struct CGSize )contentSize;
-(void)_handleAccountChanged:(id)arg0 ;
-(void)_handlePeerPaymentAccountChanged:(id)arg0 ;
-(void)_initializeBalanceLabelWithTextColor:(id)arg0 ;
-(void)_showFullScreenBarcodeForButton:(id)arg0 ;
-(void)_updateAccountBalanceVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateBalanceLabelFontSize;
-(void)_updateBalanceWithAmount:(id)arg0 ;
-(void)_updateStateForAccount:(id)arg0 animated:(BOOL)arg1 ;
-(void)createBodyContentViews;
-(void)createHeaderContentViews;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setDynamicBarcodeData:(id)arg0 ;
-(void)setModallyPresented:(BOOL)arg0 ;
-(void)setShowsLiveBalance:(BOOL)arg0 ;
-(void)setViewExpanded:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif