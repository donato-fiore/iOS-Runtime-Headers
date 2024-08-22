// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS24WEATHERMAPANNOTATIONVIEW_H
#define _TTC11WEATHERMAPS24WEATHERMAPANNOTATIONVIEW_H

@class MKAnnotationView, NSString, UIBezierPath;



@interface _TtC11WeatherMaps24WeatherMapAnnotationView : MKAnnotationView {
    ? dataSource;
    ? delegate;
    ? viewModel;
    ? axBalloonContentView;
    ? mapAnnotation;
    ? $__lazy_storage_$_locationLabel;
    ? $__lazy_storage_$_pinView;
}


@property (nonatomic) CGPoint accessibilityActivationPoint;
@property (nonatomic) CGRect accessibilityFrame;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) UIBezierPath *accessibilityPath;
@property (nonatomic) NSUInteger accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) BOOL isAccessibilityElement;


-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif