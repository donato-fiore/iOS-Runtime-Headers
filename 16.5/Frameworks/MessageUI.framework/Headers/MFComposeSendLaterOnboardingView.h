// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCOMPOSESENDLATERONBOARDINGVIEW_H
#define MFCOMPOSESENDLATERONBOARDINGVIEW_H

@class UIView, UIButton, UIImageView, UILabel;



@interface MFComposeSendLaterOnboardingView : UIView

@property (readonly, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) UIImageView *sendLaterImageView; // ivar: _sendLaterImageView
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif