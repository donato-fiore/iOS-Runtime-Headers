// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTBARCODEVIEWCONTROLLER_H
#define PKPAYMENTBARCODEVIEWCONTROLLER_H

@class UIViewController, UILabel, UIButton, UILayoutGuide, UIImageView, PKPaymentPass, NSData;


#import "PKRightAngleRotatingView.h"

@interface PKPaymentBarcodeViewController : UIViewController {
    PKRightAngleRotatingView *_barcodeView;
    UILabel *_disclaimerText;
    UIButton *_closeButton;
    UILayoutGuide *_barcodeGuide;
    UIImageView *_compactBankLogoView;
    PKPaymentPass *_pass;
    ? _viewSizeInfo;
}


@property (retain, nonatomic) NSData *barcodeData; // ivar: _barcodeData


-(BOOL)_canShowWhileLocked;
-(id)initWithPass:(id)arg0 ;
-(struct ? )_barcodePadding;
-(struct CGSize )_barcodeSize;
-(void)_closeButtonPressed:(id)arg0 ;
-(void)invalidate;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif