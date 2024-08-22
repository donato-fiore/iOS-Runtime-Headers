// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGFOCUSEFFECTVIEW_H
#define PXGFOCUSEFFECTVIEW_H

@class _UIFloatingContentView, UIView;


#import "PXGFocusableView.h"
#import "PXGFocusEffectViewConfiguration.h"

@interface PXGFocusEffectView : PXGFocusableView {
    _UIFloatingContentView *_floatingContentView;
    UIView *_hostedContentView;
    int _activeSelectPressesCount;
    CGRect _clippingRect;
}


@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *hostedContentView;
@property (copy, nonatomic) PXGFocusEffectViewConfiguration *userData;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )convertHostedChildCenter:(struct CGPoint )arg0 fromGlobalLayer:(id)arg1 ;
-(struct CGRect )clippingRect;
-(void)_handleSelectTap:(id)arg0 ;
-(void)_updatePressedAppearance;
-(void)addHostedLayer:(id)arg0 ;
-(void)addHostedView:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setClippingRect:(struct CGRect )arg0 ;


@end


#endif