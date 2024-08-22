// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFURLLABEL_H
#define SFURLLABEL_H

@class UIVisualEffectView, UILabel, UIImageView, UIView, NSAttributedString, UIFont, NSString, UIColor;



@interface SFURLLabel : UIVisualEffectView {
    CGFloat _fadeOutDistance;
    UILabel *_label;
    UIImageView *_fadeOut;
    BOOL _needsUpdateSize;
    ? _textSizeTransitionContext;
}


@property (weak, nonatomic) UIView *URLContainerClipView; // ivar: _URLContainerClipView
@property (nonatomic) BOOL accessibilityIgnoresInvertColors;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) CGFloat baselineOffsetFromBottom;
@property (nonatomic) NSInteger fadeOutEdge; // ivar: _fadeOutEdge
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL isAnimatingTextSize;
@property (readonly, nonatomic) CGFloat lastLineBaselineFrameOriginY;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignmentEdge; // ivar: _textAlignmentEdge
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) CGSize urlSize; // ivar: _urlSize


-(id)accessibilityLabel;
-(id)init;
-(id)initWithFadeOutDistance:(CGFloat)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setNeedsUpdateSize;
-(void)_updateSize;
-(void)_updateSizeIfNeeded;
-(void)beginTextSizeAnimation;
-(void)endTextSizeAnimation;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif