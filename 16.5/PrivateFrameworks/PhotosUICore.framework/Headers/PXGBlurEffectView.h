// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGBLUREFFECTVIEW_H
#define PXGBLUREFFECTVIEW_H

@class UIView, UIVisualEffectView;
@protocol PXGReusableView;


#import "PXGBlurEffectViewConfiguration.h"

@interface PXGBlurEffectView : UIView <PXGReusableView>

 {
    UIVisualEffectView *_effectView;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXGBlurEffectViewConfiguration *userData; // ivar: _userData


-(struct CGPoint )convertHostedChildCenter:(struct CGPoint )arg0 fromGlobalLayer:(id)arg1 ;
-(void)addHostedLayer:(id)arg0 ;
-(void)addHostedView:(id)arg0 ;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif