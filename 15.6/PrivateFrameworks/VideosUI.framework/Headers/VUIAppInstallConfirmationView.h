// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPINSTALLCONFIRMATIONVIEW_H
#define VUIAPPINSTALLCONFIRMATIONVIEW_H

@class UIView, UILabel, NSLayoutConstraint, UIButton, NSString;


#import "VUIBuyButtonLockup.h"
#import "VUIAppInstallLockup.h"

@interface VUIAppInstallConfirmationView : UIView {
    BOOL _didLayout;
    UILabel *_imageSubtitleView;
    VUIBuyButtonLockup *_buyLockup;
    UILabel *_titleView;
    UILabel *_messageView;
    NSLayoutConstraint *_buttonHeightConstraint;
}


@property (retain, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (retain, nonatomic) UIButton *appStoreButton; // ivar: _appStoreButton
@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) VUIAppInstallLockup *lockupView; // ivar: _lockupView
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) UIButton *secondaryLinkButton; // ivar: _secondaryLinkButton
@property (copy, nonatomic) NSString *title; // ivar: _title


+(struct CGSize )iconSize;
-(id)_buttonWithTitleForTV:(id)arg0 textStyle:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutForIos;
-(void)_layoutForTvos;
-(void)layoutSubviews;
-(void)setAgeRating:(id)arg0 ;
-(void)setAppIcon:(id)arg0 ;
-(void)setAppName:(id)arg0 ;
-(void)setAppSubtitle:(id)arg0 ;
-(void)setIAP:(id)arg0 ;


@end


#endif