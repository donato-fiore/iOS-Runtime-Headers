// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKHOVERCONTROLLER_H
#define PKHOVERCONTROLLER_H

@class UIView, UIHoverGestureRecognizer, NSTimer, NSArray, CADisplayLink, NSAttributedString, NSString;
@protocol PKPencilObserverGestureRecognizerDelegate, PKInputPointAltitudeAndAzimuthEdgeFilterDelegate, PKHoverControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKInputPointWeightedAverageFilter.h"
#import "PKInputPointAltitudeAndAzimuthNoiseFilter.h"
#import "PKInputPointAltitudeAndAzimuthBucketingFilter.h"
#import "PKInputPointAltitudeAndAzimuthZLimitFilter.h"
#import "PKInputPointAltitudeAndAzimuthEdgeFilter.h"
#import "PKInputPointExtraLatencyFilter.h"
#import "PKInputPointReduceFramerateFilter.h"
#import "PKInputPointPredictionFilter.h"

@interface PKHoverController : NSObject <PKPencilObserverGestureRecognizerDelegate, PKInputPointAltitudeAndAzimuthEdgeFilterDelegate>

 {
    ? _delegateFlags;
    ? _gestureRecognizerFlags;
    UIView *_view;
    vector<PKInputPoint, std::allocator<PKInputPoint>> _inputPoints;
    BOOL _activeInputPoint;
    BOOL _activeHoverHold;
    BOOL _waitingForHoverHold;
    CGFloat _waitingForHoverHoldTimestamp;
    CGFloat _latestInputPointTimestamp;
    CGFloat _latestHoldTimestamp;
    CGFloat _latestInputPointSentTimestamp;
    ? _cachedLatestInputPoint;
    CGPoint _latestHoldLocation;
    CGFloat _latestHoldZPosition;
    BOOL _didPauseOtherControllers;
    BOOL _isPaused;
    UIView *_hoverLabelView;
    NSUInteger _currentInputPointCounter;
    UIHoverGestureRecognizer *_gestureRecognizer;
    NSTimer *_eventGeneratorTimer;
    PKInputPointWeightedAverageFilter *_weightedAverageFilter;
    PKInputPointAltitudeAndAzimuthNoiseFilter *_altitudeAndAzimuthNoiseFilter;
    PKInputPointAltitudeAndAzimuthBucketingFilter *_altitudeAndAzimuthBucketingFilter;
    PKInputPointAltitudeAndAzimuthZLimitFilter *_altitudeAndAzimuthZLimitFilter;
    PKInputPointAltitudeAndAzimuthEdgeFilter *_altitudeAndAzimuthEdgeFilter;
    PKInputPointExtraLatencyFilter *_extraLatencyFilter;
    PKInputPointReduceFramerateFilter *_reduceFramerateFilter;
    PKInputPointPredictionFilter *_predictionFilter;
    NSArray *_allInputPointFilters;
    CGFloat _intentionalHoverStartTimestamp;
    CGFloat _intentionalHoverMinZValue;
    CGFloat _intentionalHoverMaxZValue;
    BOOL _didReceiveNewPointToPredict;
    CGFloat _timestampForLatestGestureUpdate;
    CADisplayLink *_displayLink;
    BOOL _shouldShowHoverDebugLayer;
    BOOL _hasSeenAnyHoverEvent;
    BOOL _hasSeenAnyHoverEventWithAltitude;
    BOOL _shouldLogHoverEvents;
    BOOL _shouldGenerate120HzEvents;
    id<PKHoverControllerDelegate> *_delegate;
    NSAttributedString *_currentLabel;
    CGFloat _maximumTimeIntervalBetweenEvents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(CGFloat)currentMovementSpeed;
-(CGFloat)inputPointFilter:(id)arg0 distanceToEdge:(struct ? )arg1 ;
-(struct ? )currentInputPoint;
-(void)_endIntentionalHoverTracking;
-(void)_handleHoverInputPoint:(struct ? )arg0 ;
-(void)_hoverGesture:(id)arg0 ;
-(void)_pause:(id)arg0 ;
-(void)_resume:(id)arg0 ;
-(void)_sendDidUpdate:(struct ? )arg0 ;
-(void)_sendDidUpdateNow:(struct ? )arg0 ;
-(void)_setupHoverGestureRecognizerInView:(id)arg0 ;
-(void)_setupPredictorForNewPoint:(BOOL)arg0 ;
-(void)_trackIntentionalHover:(struct ? )arg0 ;
-(void)_triggerHoldGestureIfNecessary;
-(void)_updateInputPointFilters;
-(void)checkDidLiftAfterGestureEnd;
-(void)hideLabel;
-(void)logInputPoint:(struct ? )arg0 ;
-(void)updateCurrentInputPointWithInputPoint:(struct ? )arg0 ;
-(void)vsync:(CGFloat)arg0 ;


@end


#endif