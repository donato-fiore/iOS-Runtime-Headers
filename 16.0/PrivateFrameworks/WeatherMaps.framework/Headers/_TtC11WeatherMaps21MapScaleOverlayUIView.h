// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS21MAPSCALEOVERLAYUIVIEW_H
#define _TTC11WEATHERMAPS21MAPSCALEOVERLAYUIVIEW_H

@class UIView;



@interface _TtC11WeatherMaps21MapScaleOverlayUIView : UIView {
    ? model;
    ? titleHeight;
    ? maximumWidth;
    ? minimumWidth;
    ? padding;
    ? titleDividerSpacing;
    ? $__lazy_storage_$_separatorView;
    ? $__lazy_storage_$_titleVibrancyEffect;
    ? $__lazy_storage_$_titleVibrancyEffectView;
    ? titleLabel;
    ? subtitleLabel;
    ? $__lazy_storage_$_continuousScaleView;
    ? $__lazy_storage_$_discreteScaleView;
}


@property (nonatomic) CGRect bounds;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)handleInvertColorsStatusDidChangeWithNotification:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif