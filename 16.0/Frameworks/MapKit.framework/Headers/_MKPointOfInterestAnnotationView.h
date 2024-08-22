// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKPOINTOFINTERESTANNOTATIONVIEW_H
#define _MKPOINTOFINTERESTANNOTATIONVIEW_H

@class MKMapFeatureAnnotationView, UIColor, UIImage, UIView, UIBlurEffect, NSString;
@protocol _MKBalloonCalloutViewConfiguring;


#import "_MKMarkerAnnotationBaseImageView.h"
#import "MKMapView.h"

@interface _MKPointOfInterestAnnotationView : MKMapFeatureAnnotationView <_MKBalloonCalloutViewConfiguring>

 {
    _MKMarkerAnnotationBaseImageView *_anchorDotView;
    NSInteger _balloonCalloutStyle;
    UIColor *_balloonFillColor;
    UIColor *_balloonStrokeColor;
    UIImage *_balloonImage;
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
@property (weak, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (readonly) Class superclass;


-(BOOL)_isMetroArea;
-(BOOL)shouldShowCallout;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg0 ;
-(NSInteger)_baseImageType;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addAnchorDotView;
-(void)_resolveBalloonAttributes;
-(void)_updateAnchorOffset;
-(void)_updateFromMap;
-(void)setAnnotation:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif