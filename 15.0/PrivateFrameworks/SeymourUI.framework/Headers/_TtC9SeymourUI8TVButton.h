// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI8TVBUTTON_H
#define _TTC9SEYMOURUI8TVBUTTON_H

@class UIControl, UILabel;



@interface _TtC9SeymourUI8TVButton : UIControl {
    ? layout;
    ? activityIndicator;
    ? titleLabel;
    ? imageView;
    ? floatingView;
    ? backgroundVisualEffectView;
    ? style;
    ? isLoading;
    ? focusedTextColor;
    ? unfocusedTextColor;
    ? underlyingControlState;
    ? underlyingContentInset;
    ? leadingConstraint;
    ? trailingConstraint;
}


@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif