// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKUSERLOCATIONHEADINGCONELAYER_H
#define MKUSERLOCATIONHEADINGCONELAYER_H

@class CAGradientLayer, CAShapeLayer, UIColor, NSString, UITraitCollection;
@protocol MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator;


#import "_MKPuckAnnotationView.h"

@interface MKUserLocationHeadingConeLayer : CAGradientLayer <MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator>

 {
    _MKPuckAnnotationView *_userLocationView;
    CAShapeLayer *_maskLayer;
    CGFloat _headingAccuracy;
    BOOL _shouldMatchAccuracyRadius;
    UIColor *_tintColor;
    CGFloat _halfMinAngle;
    CGFloat _lastAccuracyRadius;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mapType; // ivar: _mapType
@property (nonatomic) CGFloat minimumAccuracyRadius; // ivar: _minimumAccuracyRadius
@property (readonly) Class superclass;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(BOOL)_shouldShowHeadingForAccuracy:(CGFloat)arg0 ;
-(CGFloat)_opacityForAccuracy:(CGFloat)arg0 locationAccuracy:(CGFloat)arg1 ;
-(id)_accuracyGradientLocationsForAccuracyRadius:(CGFloat)arg0 ;
-(id)_colorsForAccuracyRadius:(CGFloat)arg0 ;
-(id)initWithUserLocationView:(id)arg0 shouldMatchAccuracyRadius:(BOOL)arg1 minimumPresentationAngle:(CGFloat)arg2 ;
-(void)_animateToOpacity:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_createMaskLayer;
-(void)_updateColors;
-(void)_updateHeadingMaskForAccuracy:(CGFloat)arg0 previousAccuracy:(CGFloat)arg1 ;
-(void)_updateShowHeadingForAccuracy:(CGFloat)arg0 ;
-(void)animateToSetVisible:(BOOL)arg0 completion:(id)arg1 ;
-(void)setAccuracyRadius:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)updateHeading:(CGFloat)arg0 ;
-(void)updateHeadingAccuracy:(CGFloat)arg0 previousAccuracy:(CGFloat)arg1 ;
-(void)updateTintColor:(id)arg0 ;


@end


#endif