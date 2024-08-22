// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIBUYBUTTONLOCKUP_H
#define VUIBUYBUTTONLOCKUP_H

@class UILabel, NSLayoutConstraint, UIButton;


#import "VUIUIStackView.h"

@interface VUIBuyButtonLockup : VUIUIStackView {
    UILabel *_iAPLabel;
    NSLayoutConstraint *_buttonHeightConstraint;
    NSInteger _lastOrientation;
}


@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (nonatomic) BOOL hasIAP; // ivar: _hasIAP


-(BOOL)_isLargeContentSize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateForPreferredContentSize;
-(void)dealloc;


@end


#endif