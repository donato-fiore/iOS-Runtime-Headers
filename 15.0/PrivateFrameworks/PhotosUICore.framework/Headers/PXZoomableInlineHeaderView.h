// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXZOOMABLEINLINEHEADERVIEW_H
#define PXZOOMABLEINLINEHEADERVIEW_H

@class UIView, UIVisualEffectView, UILabel;
@protocol PXGReusableView;


#import "PXZoomableInlineHeaderViewConfiguration.h"

@interface PXZoomableInlineHeaderView : UIView <PXGReusableView>

 {
    PXZoomableInlineHeaderViewConfiguration *_configuration;
    UIVisualEffectView *_effectView;
    UIView *_tintView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (nonatomic) CGRect clippingRect; // ivar: _clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXZoomableInlineHeaderViewConfiguration *userData; // ivar: _userData


+(CGFloat)_heightForStyle:(NSUInteger)arg0 ;
+(CGFloat)_titleBaselineDistanceForFont:(id)arg0 ;
+(id)_subtitleFontForStyle:(NSUInteger)arg0 ;
+(id)_titleFontForStyle:(NSUInteger)arg0 ;
+(struct CGSize )sizeWithConfiguration:(id)arg0 ;
-(id)_tintViewBackgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureViews;
-(void)_platformSpecificViewSetup;
-(void)_setEffectViewCornerRadius:(CGFloat)arg0 ;
-(void)_setupBackgroundView;
-(void)_setupViews;
-(void)_updateButtonWithConfiguration:(id)arg0 ;
-(void)_updateConfiguration;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHidden:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif