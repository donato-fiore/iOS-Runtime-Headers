// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXTITLELEGIBILITYDIMMINGVIEW_H
#define PXTITLELEGIBILITYDIMMINGVIEW_H

@class UIView, CALayer, CABackdropLayer, NSString;
@protocol PXGReusableView, NSCopying;



@interface PXTitleLegibilityDimmingView : UIView <PXGReusableView>

 {
    CALayer *_filterLayer;
    CABackdropLayer *_backdropLayer;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (retain, nonatomic) NSString *gradientImageName; // ivar: _gradientImageName
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) NSObject<NSCopying> *userData; // ivar: _userData


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif