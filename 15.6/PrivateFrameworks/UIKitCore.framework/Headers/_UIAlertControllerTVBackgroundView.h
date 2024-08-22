// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIALERTCONTROLLERTVBACKGROUNDVIEW_H
#define _UIALERTCONTROLLERTVBACKGROUNDVIEW_H

@class NSMutableDictionary, NSString;
@protocol UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying;


#import "UIView.h"
#import "_UIFloatingShadowView.h"

@interface _UIAlertControllerTVBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>

 {
    BOOL _isHighlighted;
    BOOL _isPressed;
    UIView *_backgroundView;
    _UIFloatingShadowView *_shadowView;
    NSMutableDictionary *_alphas;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldShowShadow; // ivar: _shouldShowShadow
@property (nonatomic) BOOL shouldUseTintColorAsBackgroundColor; // ivar: _shouldUseTintColorAsBackgroundColor
@property (readonly) Class superclass;


+(struct CGSize )backgroundInsetAmount;
-(CGFloat)_alphaForHighlighted:(BOOL)arg0 pressed:(BOOL)arg1 ;
-(CGFloat)alphaForState:(NSUInteger)arg0 ;
-(id)_displayedBackgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)setAlpha:(CGFloat)arg0 forState:(NSUInteger)arg1 ;
-(void)setCornerRadius:(CGFloat)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPressed:(BOOL)arg0 ;
-(void)setRoundedCornerPosition:(NSUInteger)arg0 ;
-(void)tintColorDidChange;


@end


#endif