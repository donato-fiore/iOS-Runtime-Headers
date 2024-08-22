// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSCRUNCHGESTURERECOGNIZER_H
#define SBFLUIDSCRUNCHGESTURERECOGNIZER_H

@class NSString, FBSDisplayConfiguration;
@protocol SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding;


#import "SBTouchTemplateGestureRecognizer.h"
#import "SBTouchHistory.h"

@interface SBFluidScrunchGestureRecognizer : SBTouchTemplateGestureRecognizer <SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding>



@property (nonatomic) CGFloat absoluteScale; // ivar: _absoluteScale
@property (nonatomic) CGPoint absoluteTranslation; // ivar: _absoluteTranslation
@property (nonatomic) CGPoint additionalTranslationDueToChangingAnchorPoints; // ivar: _additionalTranslationDueToChangingAnchorPoints
@property (readonly, nonatomic) CGPoint centroid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialCentroid; // ivar: _initialCentroid
@property (nonatomic) CGFloat lastPerimeter; // ivar: _lastPerimeter
@property (readonly, nonatomic) NSInteger recognizedTouchType; // ivar: _recognizedTouchType
@property (readonly) Class superclass;
@property (retain, nonatomic) SBTouchHistory *touchHistory; // ivar: _touchHistory


+(id)_panTemplatesForTouchType:(NSInteger)arg0 displayConfiguration:(id)arg1 ;
+(id)_scrunchTemplatesForTouchType:(NSInteger)arg0 displayConfiguration:(id)arg1 ;
+(void)_rotateTemplates:(id)arg0 forDisplayConfiguration:(id)arg1 ;
-(BOOL)_isMatchedTemplateScrunchTemplate;
-(BOOL)_shouldAddNewTouchesAfterGestureRecognition;
-(CGFloat)_hysteresis;
-(CGFloat)animationDistance;
-(CGFloat)averageTouchPathAngleOverTimeDuration:(CGFloat)arg0 ;
-(CGFloat)incrementalGestureMotionForCandidate:(id)arg0 withTransformAnalyzerInfo:(id)arg1 ;
-(CGFloat)peakSpeed;
-(id)_gestureView;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 displayConfiguration:(id)arg2 ;
-(id)logCategory;
-(struct CGPoint )_centroidInGestureViewForPolygon:(id)arg0 ;
-(struct CGPoint )averageTouchVelocityOverTimeDuration:(CGFloat)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )translationInView:(id)arg0 ;
-(struct CGPoint )translationWithoutConsideringScaleInView:(id)arg0 ;
-(struct CGPoint )velocityInView:(id)arg0 ;
-(void)_computeGestureMotionWithTouches:(id)arg0 polygon:(id)arg1 ;
-(void)_installTemplatesForDisplayConfiguration:(id)arg0 ;
-(void)_setMatchedPolygon:(id)arg0 ;
-(void)_updateRecognizedTouchTypeIfNecessaryWithTouches:(id)arg0 ;
-(void)conformsToSBGestureRecognizerTouchHistoryProviding;
-(void)reset;
-(void)setAllowedTouchTypes:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif