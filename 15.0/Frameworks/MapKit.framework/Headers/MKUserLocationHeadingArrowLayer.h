// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKUSERLOCATIONHEADINGARROWLAYER_H
#define MKUSERLOCATIONHEADINGARROWLAYER_H

@class CAShapeLayer, NSString, UITraitCollection;
@protocol MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator;


#import "_MKPuckAnnotationView.h"

@interface MKUserLocationHeadingArrowLayer : CAShapeLayer <MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator>

 {
    CGFloat _maxUncertaintyAngleToShowArrow;
    CGFloat _baseRadius;
    CGFloat _tipRadius;
    CGFloat _baseHalfAngle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat headingRadians; // ivar: _headingRadians
@property (nonatomic) NSUInteger mapType; // ivar: _mapType
@property (nonatomic) CGFloat minimumAccuracyRadius; // ivar: _minimumAccuracyRadius
@property (readonly) Class superclass;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, weak, nonatomic) _MKPuckAnnotationView *userLocationView; // ivar: _userLocationView


-(BOOL)_shouldBeVisibleForAccuracy:(CGFloat)arg0 ;
-(CGFloat)_baseRadiusWhenVisible:(BOOL)arg0 ;
-(CGFloat)_tipRadiusWhenVisible:(BOOL)arg0 ;
-(id)_animationToSetVisible:(BOOL)arg0 ;
-(id)_bezierPathWithBaseRadius:(CGFloat)arg0 tipRadius:(CGFloat)arg1 baseHalfAngle:(CGFloat)arg2 ;
-(id)initWithUserLocationView:(id)arg0 ;
-(struct CGPath *)_pathWhenVisible:(BOOL)arg0 ;
-(struct CGPoint )_positionWhenVisible:(BOOL)arg0 ;
-(void)animateToSetVisible:(BOOL)arg0 completion:(id)arg1 ;
-(void)setAccuracyRadius:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)updateHeading:(CGFloat)arg0 ;
-(void)updateHeadingAccuracy:(CGFloat)arg0 previousAccuracy:(CGFloat)arg1 ;
-(void)updateTintColor:(id)arg0 ;


@end


#endif