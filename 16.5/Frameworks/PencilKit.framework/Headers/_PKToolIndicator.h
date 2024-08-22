// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PKTOOLINDICATOR_H
#define _PKTOOLINDICATOR_H

@class UIView, UIButton<PKInkToolButton>;
@protocol _PKToolIndicatorDelegate;


#import "PKInk.h"

@interface _PKToolIndicator : UIView

@property (nonatomic) NSUInteger animationState; // ivar: _animationState
@property (nonatomic) NSUInteger attributeSet; // ivar: _attributeSet
@property (weak, nonatomic) NSObject<_PKToolIndicatorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PKInk *ink; // ivar: _ink
@property (nonatomic) BOOL isEmbossed; // ivar: _isEmbossed
@property (nonatomic) BOOL isUsedOnDarkBackground; // ivar: _isUsedOnDarkBackground
@property (nonatomic) NSUInteger sizeState; // ivar: _sizeState
@property (retain, nonatomic) UIButton<PKInkToolButton> *toolButton; // ivar: _toolButton


+(id)_defaultAnimator;
// +(void)_animationWithSetup:(id)arg0 animationBlock:(unk)arg1 completion:(id)arg2 animated:(unk)arg3  ;
-(id)_createToolButtonForInk:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameForHiddenToolButton;
-(struct CGRect )_frameForVisibleToolButton;
-(struct CGRect )_toolIndicatorCenteringRect;
-(void)_dismissInkAnimation:(id)arg0 animated:(BOOL)arg1 ;
-(void)_presentInkAnimation:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setupToolButton:(id)arg0 forInk:(id)arg1 ;
-(void)_switchToInkAnimation:(id)arg0 animated:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif