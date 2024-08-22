// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSONSCREENCODEQRCODEWRAPPERVIEW_H
#define VSONSCREENCODEQRCODEWRAPPERVIEW_H

@class UILabel, UIView, UIImageView;


#import "VSOnscreenCodeWrapperView.h"

@interface VSOnscreenCodeQRCodeWrapperView : VSOnscreenCodeWrapperView

@property (retain, nonatomic) UILabel *infoDescriptionLabel; // ivar: _infoDescriptionLabel
@property (retain, nonatomic) UILabel *infoTitleLabel; // ivar: _infoTitleLabel
@property (retain, nonatomic) UIView *infoView; // ivar: _infoView
@property (retain, nonatomic) UIImageView *qrCodeImage; // ivar: _qrCodeImage
@property (retain, nonatomic) UIView *qrCodeImageContainer; // ivar: _qrCodeImageContainer


-(id)init;
-(void)setupLayout;
-(void)setupLocalizedStrings;
-(void)setupQRCodeImageContainer;
-(void)setupQRCodeInfoView;
-(void)updateUIWithViewModel:(id)arg0 ;


@end


#endif