// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCOFFERBUTTON_H
#define ASCOFFERBUTTON_H

@class UIControl, UIViewPropertyAnimator, CAAnimation, UILabel;
@protocol ASCOfferButtonDelegate;


#import "ASCOfferButtonBackgroundImageView.h"
#import "ASCOfferMetadata.h"
#import "ASCModalViewInteraction.h"
#import "ASCOfferTheme.h"

@interface ASCOfferButton : UIControl

@property (retain, nonatomic) UIViewPropertyAnimator *currentTransition; // ivar: _currentTransition
@property (weak, nonatomic) NSObject<ASCOfferButtonDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isFixedHeight) BOOL fixedHeight; // ivar: _fixedHeight
@property (retain, nonatomic) CAAnimation *imageAnimation;
@property (readonly, nonatomic) ASCOfferButtonBackgroundImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) ASCOfferMetadata *metadata; // ivar: _metadata
@property (retain, nonatomic) ASCModalViewInteraction *modalInteraction; // ivar: _modalInteraction
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabelIfLoaded; // ivar: _subtitleLabelIfLoaded
@property (nonatomic) NSInteger subtitlePosition; // ivar: _subtitlePosition
@property (retain, nonatomic) ASCOfferTheme *theme; // ivar: _theme
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *titleLabelIfLoaded; // ivar: _titleLabelIfLoaded


-(BOOL)accessibilityActivate;
-(BOOL)canBecomeFocused;
-(BOOL)canTransitionToMetadata:(id)arg0 ;
-(BOOL)chainTransitionToMetadata:(id)arg0 scalingDurationBy:(CGFloat)arg1 withCompletion:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isAccessibilityElement;
-(BOOL)shouldTransitionImageViewFromMetadata:(id)arg0 toMetadata:(id)arg1 ;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)description;
-(id)focusEffect;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)makeLayout;
-(id)transitionColorForMetadata:(id)arg0 ;
-(id)transitionImageForMetadata:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)beginModalStateWithCancelBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endModalState;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionToMetadata:(id)arg0 scalingDurationBy:(CGFloat)arg1 withCompletion:(id)arg2 ;
-(void)transitionToMetadata:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateFocusState;
-(void)updateImageStyleProperties;
-(void)updateLabelStyleProperties;


@end


#endif