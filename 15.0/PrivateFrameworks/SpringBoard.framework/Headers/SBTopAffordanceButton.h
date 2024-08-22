// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTOPAFFORDANCEBUTTON_H
#define SBTOPAFFORDANCEBUTTON_H

@class UIButton, MTVisualStylingProvider, UIView, NSString, UIPointerInteraction, NSLayoutConstraint;
@protocol UIPointerInteractionDelegate;



@interface SBTopAffordanceButton : UIButton <UIPointerInteractionDelegate>

 {
    MTVisualStylingProvider *_visualStylingProvider;
    UIView *_selectedIndicatorView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property (readonly) Class superclass;
@property (nonatomic) NSInteger topAffordanceButtonType; // ivar: _topAffordanceButtonType
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (weak, nonatomic) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


+(id)buttonWithTopAffordanceButtonType:(NSInteger)arg0 ;
+(id)hoveredSelectedButtonBackgroundColor;
+(id)imageForTopAffordanceButtonType:(NSInteger)arg0 interfaceOrientation:(NSInteger)arg1 ;
+(id)landscapeImageNameForTopAffordanceButtonType:(NSInteger)arg0 ;
+(id)portraitImageNameForTopAffordanceButtonType:(NSInteger)arg0 ;
+(id)selectedButtonBackgroundColor;
+(id)symbolConfiguration;
-(BOOL)isPointerInteractionEnabled;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_selectedIndicatorAlpha;
-(id)_selectedIndicatorViewWithImage:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_extendedHitTestBounds;
-(struct CGRect )_selectedIndicatorBounds;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 duration:(CGFloat)arg2 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif