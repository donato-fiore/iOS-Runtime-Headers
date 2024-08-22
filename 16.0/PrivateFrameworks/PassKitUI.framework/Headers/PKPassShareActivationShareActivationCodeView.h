// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSSHAREACTIVATIONSHAREACTIVATIONCODEVIEW_H
#define PKPASSSHAREACTIVATIONSHAREACTIVATIONCODEVIEW_H

@class UIView, UILabel, NSString;
@protocol PKPassShareActivationShareActivationCodeViewDelegate;


#import "PKContinuousButton.h"

@interface PKPassShareActivationShareActivationCodeView : UIView {
    id<PKPassShareActivationShareActivationCodeViewDelegate> *_delegate;
    UIView *_activationCodeBackgroundView;
    UILabel *_activationCodeLabel;
    PKContinuousButton *_phoneButton;
    PKContinuousButton *_shareButton;
    PKContinuousButton *_copyButton;
}


@property (retain, nonatomic) NSString *activationCode; // ivar: _activationCode
@property (nonatomic) BOOL showPhoneCallButton; // ivar: _showPhoneCallButton


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_copyActivationCode;
-(void)_copyButtonPressed;
-(void)_phoneButtonPressed;
-(void)_shareButtonPressed;
-(void)_showCopyMenu;
-(void)layoutSubviews;


@end


#endif