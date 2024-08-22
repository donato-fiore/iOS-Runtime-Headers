// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ASCABLEQRCODEVIEW_H
#define _ASCABLEQRCODEVIEW_H

@class UIView, NSString;


#import "_ASCABLEQRCodeImageView.h"
#import "_ASCABLEQRCodeBadgeView.h"

@interface _ASCABLEQRCodeView : UIView {
    NSString *_message;
    _ASCABLEQRCodeImageView *_imageView;
    UIView *_platterView;
    _ASCABLEQRCodeBadgeView *_badgeView;
}




-(id)_qrCodeASImage;
-(id)_qrCodeCIImage;
-(id)_qrCodeColor;
-(id)initWithMessage:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updatePlatterBorderStyle;
-(void)_updateQRCodeImage;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif