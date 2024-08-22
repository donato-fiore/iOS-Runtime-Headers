// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKQUICKACTIONBUTTON_H
#define CKQUICKACTIONBUTTON_H

@class UIView, CAShapeLayer, UIButton, NSString, NSMutableArray, NSMutableDictionary, UIImageView;
@protocol CKQuickActionButtonAnimationDelegate, CKQuickActionButtonDelegate;



@interface CKQuickActionButton : UIView

@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (weak, nonatomic) NSObject<CKQuickActionButtonAnimationDelegate> *animationDelegate; // ivar: _animationDelegate
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) CAShapeLayer *borderLayer; // ivar: _borderLayer
@property (readonly, nonatomic) UIButton *button; // ivar: _button
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (retain, nonatomic) NSString *currentAnimationIdentifier; // ivar: _currentAnimationIdentifier
@property (retain, nonatomic) NSMutableArray *deferredAnimationIdentifiers; // ivar: _deferredAnimationIdentifiers
@property (retain, nonatomic) NSMutableDictionary *deferredConfigurationStates; // ivar: _deferredConfigurationStates
@property (weak, nonatomic) NSObject<CKQuickActionButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSUInteger state; // ivar: _state


-(CGFloat)animationDurationForState:(NSUInteger)arg0 ;
-(CGFloat)delayForFinalizingAnimation;
-(CGFloat)delayForImageSwapAnimation;
-(id)buttonImageForState:(NSUInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithInitialState:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )contentEdgeInsetsForState:(NSUInteger)arg0 ;
-(void)configureForState:(NSUInteger)arg0 animated:(BOOL)arg1 identifier:(id)arg2 wasDeferred:(BOOL)arg3 ;
-(void)layoutSubviews;
-(void)updateImageViewFrameForContentEdgeInsets;


@end


#endif