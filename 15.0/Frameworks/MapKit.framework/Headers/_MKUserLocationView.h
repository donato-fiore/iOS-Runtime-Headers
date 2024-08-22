// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKUSERLOCATIONVIEW_H
#define _MKUSERLOCATIONVIEW_H

@class MKPuckAnnotationView, UIImage, UIColor, UIView, UIBlurEffect, NSString;
@protocol _MKBalloonCalloutViewConfiguring, _MKKVOProxyDelegate;


#import "_MKUserLocationViewImageProvider.h"
#import "_MKKVOProxy.h"

@interface _MKUserLocationView : MKPuckAnnotationView <_MKBalloonCalloutViewConfiguring, _MKKVOProxyDelegate>

 {
    CGFloat _externalMaxAccuracyRadius;
    BOOL _radiusBasedAccuracyOpacity;
    BOOL _hasExplicitCalloutStyle;
    _MKUserLocationViewImageProvider *_imageProvider;
    UIImage *_balloonImage;
    UIColor *_balloonImageTintColor;
    _MKKVOProxy *_kvoProxy;
}


@property (readonly, nonatomic, getter=_balloonCalloutShouldCenterWhenOffscreen) BOOL balloonCalloutShouldCenterWhenOffscreen;
@property (readonly, nonatomic, getter=_balloonCalloutShouldShowArrow) BOOL balloonCalloutShouldShowArrow;
@property (readonly, nonatomic, getter=_balloonCalloutStyle) NSInteger balloonCalloutStyle;
@property (readonly, nonatomic, getter=_balloonContentView) UIView *balloonContentView;
@property (readonly, nonatomic, getter=_balloonImage) UIImage *balloonImage;
@property (readonly, nonatomic, getter=_balloonImageTintColor) UIColor *balloonImageTintColor;
@property (readonly, nonatomic, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;
@property (readonly, nonatomic, getter=_balloonMaterial) UIBlurEffect *balloonMaterial;
@property (readonly, nonatomic, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
@property (readonly, nonatomic, getter=_balloonTintColor) UIColor *balloonTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_showingPreciseAuthorizedLocation, setter=_setShowingPreciseAuthorizedLocation:) BOOL showingPreciseAuthorizedLocation; // ivar: _showingPreciseAuthorizedLocation
@property (readonly) Class superclass;


-(BOOL)_allowedToShowCallout;
-(BOOL)shouldShowCallout;
-(NSUInteger)_innerPulseFrameWhenDisabled:(NSUInteger)arg0 ;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(void)_dismissCallout:(BOOL)arg0 ;
-(void)_mkObserveValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)_setCalloutStyle:(NSInteger)arg0 ;
-(void)_showCallout:(BOOL)arg0 ;
-(void)_startObservingAnnotation;
-(void)_stopObservingAnnotation;
-(void)_updateCalloutOffset;
-(void)_updateCalloutStyle;
-(void)_updateLegacyConfiguration;
-(void)_updateMaxRadiusToShowAccuracyRing;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAnnotation:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setDetailCalloutAccessoryView:(id)arg0 ;
-(void)setLeftCalloutAccessoryView:(id)arg0 ;
-(void)setMaxRadiusToShowAccuracyRing:(CGFloat)arg0 ;
-(void)setRightCalloutAccessoryView:(id)arg0 ;


@end


#endif