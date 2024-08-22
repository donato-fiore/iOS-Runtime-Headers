// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVUNIFIEDGESTURERECOGNIZER_H
#define ASVUNIFIEDGESTURERECOGNIZER_H

@class NSMutableSet, NSString, NSTimer;
@protocol ASVSingleFingerGestureDelegate, ASVTwoFingerGestureDelegate, ASVGestureDataSource, ASVUnifiedGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "ASVGesture.h"
#import "ASVGestureFeedbackGenerator.h"

@interface ASVUnifiedGestureRecognizer : NSObject <ASVSingleFingerGestureDelegate, ASVTwoFingerGestureDelegate>

 {
    ? _lastTapLocation;
}


@property (nonatomic) BOOL allowObjectScaling; // ivar: _allowObjectScaling
@property (nonatomic) float animateScaleEnd; // ivar: _animateScaleEnd
@property (nonatomic) float animateScaleStart; // ivar: _animateScaleStart
@property (readonly, nonatomic) float animatedScaleValue;
@property (retain, nonatomic) ASVGesture *currentGesture; // ivar: _currentGesture
@property (nonatomic) float currentObjectScale; // ivar: _currentObjectScale
@property (retain, nonatomic) NSMutableSet *currentTouches; // ivar: _currentTouches
@property (weak, nonatomic) NSObject<ASVGestureDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASVUnifiedGestureRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger enabledGestureTypes; // ivar: _enabledGestureTypes
@property (retain, nonatomic) ASVGestureFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isDecelerating;
@property (readonly, nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isScaleAnimating; // ivar: _isScaleAnimating
@property (nonatomic) CGFloat lastFireFeedbackTime; // ivar: _lastFireFeedbackTime
@property ? lastTapLocation;
@property (nonatomic) CGFloat lastTapTime; // ivar: _lastTapTime
@property (nonatomic) BOOL lastTapWasOnAsset; // ivar: _lastTapWasOnAsset
@property (readonly, nonatomic) float maximumObjectScale;
@property (readonly, nonatomic) float minimumObjectScale;
@property (retain, nonatomic) NSTimer *singleTapTimer; // ivar: _singleTapTimer
@property (nonatomic) CGFloat startScaleAnimationTime; // ivar: _startScaleAnimationTime
@property (readonly) Class superclass;


-(BOOL)gestureTypeIsEnabled:(NSUInteger)arg0 ;
-(float)clampedScaleForScale:(float)arg0 ;
-(id)initWithDelegate:(id)arg0 feedbackGenerator:(id)arg1 ;
-(id)singleFingerGestureForTouch:(id)arg0 dataSource:(id)arg1 enabledGestureTypes:(NSUInteger)arg2 ;
-(id)twoFingerGestureForFirstTouch:(id)arg0 secondTouch:(id)arg1 dataSource:(id)arg2 ;
-(void)gestureBeganRotation:(id)arg0 ;
-(void)gestureBeganScaling:(id)arg0 ;
-(void)gestureDidSnapAwayFromScale:(id)arg0 ;
-(void)gestureDidSnapToScale:(id)arg0 ;
-(void)gestureEndedRotation:(id)arg0 ;
-(void)gestureEndedScaling:(id)arg0 ;
-(void)gestureStartScaleAnimationFrom:(float)arg0 to:(float)arg1 ;
-(void)processTouches:(id)arg0 phase:(NSInteger)arg1 ;
-(void)startGestureFromTouches:(id)arg0 ;
-(void)updateGestureFromTouches:(id)arg0 phase:(NSInteger)arg1 ;


@end


#endif