// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXANIMATEDHEADERVIEW_H
#define PXANIMATEDHEADERVIEW_H

@class UIView, UIFont, CAGradientLayer, NSString;


#import "PXAnimatedLabel.h"

@interface PXAnimatedHeaderView : UIView

@property (retain) PXAnimatedLabel *currentLabel; // ivar: _currentLabel
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (retain) PXAnimatedLabel *sizingLabel; // ivar: _sizingLabel
@property (retain, nonatomic) NSString *text; // ivar: _text


-(BOOL)_requiresDigitAnimationForNewText:(id)arg0 ;
-(BOOL)_requiresLabelSwitchForNewText:(id)arg0 ;
-(id)_labelWithText:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_animateLabelSwitchFromLabel:(id)arg0 toLabel:(id)arg1 andAnimationStyle:(NSInteger)arg2 completionBlock:(id)arg3 ;
-(void)_updateSizingWithText:(id)arg0 ;
-(void)commonInit;
-(void)layoutSubviews;


@end


#endif