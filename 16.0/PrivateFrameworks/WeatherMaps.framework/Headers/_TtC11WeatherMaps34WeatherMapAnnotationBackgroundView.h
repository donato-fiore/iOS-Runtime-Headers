// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS34WEATHERMAPANNOTATIONBACKGROUNDVIEW_H
#define _TTC11WEATHERMAPS34WEATHERMAPANNOTATIONBACKGROUNDVIEW_H

@class UIView;



@interface _TtC11WeatherMaps34WeatherMapAnnotationBackgroundView : UIView {
    ? gradientLayer;
    ? materialView;
    ? disablesImplicitAnimations;
    ? background;
}


@property (nonatomic) CGFloat _cornerRadius;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)layoutSubviews;


@end


#endif