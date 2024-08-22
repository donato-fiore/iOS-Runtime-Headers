// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDBUDDYFLOWCONTINUEFOOTERVIEW_H
#define WDBUDDYFLOWCONTINUEFOOTERVIEW_H

@class UIView, NSLayoutConstraint, UIButton;



@interface WDBuddyFlowContinueFooterView : UIView {
    CGFloat _width;
    CGFloat _bottomInset;
    NSLayoutConstraint *_continueButtonBaselineConstraint;
    NSLayoutConstraint *_continueButtonBaselineToBottomConstraint;
}


@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 bottomInset:(CGFloat)arg2 width:(CGFloat)arg3 ;
-(void)_updateForCurrentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif