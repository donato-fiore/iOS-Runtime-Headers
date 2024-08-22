// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CINEMATICDIRECTORSESSION_H
#define CINEMATICDIRECTORSESSION_H

@class NSString;
@protocol CinematicTrackerDelegate, RectangleAnimator, FramingSpaceManager;

#import <Foundation/Foundation.h>

#import "SceneFramingEngine.h"
#import "CinematicTracker.h"
#import "CinematicFramingSessionOptions.h"

@interface CinematicDirectorSession : NSObject <CinematicTrackerDelegate>

 {
    NSObject<RectangleAnimator> *_rectangleAnimator;
    SceneFramingEngine *_sceneFramingEngine;
    id<FramingSpaceManager> *_framingSpaceManager;
    CGRect _currentView;
    CGRect _targetView;
    CinematicTracker *_tracker;
    ? _lastJumpCutTimestamp;
    CinematicFramingSessionOptions *_options;
    NSInteger _sceneState;
    ? _lastSceneStateTransitionTime;
    BOOL _eventHappenedThisFrame;
    unsigned int _numProcessedFrames;
}


@property (nonatomic) CGRect cameraViewport; // ivar: _cameraViewport
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (readonly) Class superclass;
@property (nonatomic) float zoomLevel;


-(float)computeSubjectOccupancyFraction:(id)arg0 ;
-(float)secondsInCurrentStateAtTime:(struct ? )arg0 ;
-(id)computeFocusPoint;
-(id)initWithFramingSpaceManager:(id)arg0 ;
-(struct CGRect )computeSubjectRectangle:(id)arg0 ;
-(struct CGRect )computeTargetViewport:(id)arg0 ;
-(void)cinematicTracker:(id)arg0 didTrackBecomeStationaryFirstTime:(id)arg1 atTime:(struct ? )arg2 ;
-(void)cinematicTracker:(id)arg0 didTrackEnter:(id)arg1 atTime:(struct ? )arg2 ;
-(void)cinematicTracker:(id)arg0 didTrackLeave:(id)arg1 atTime:(struct ? )arg2 ;
-(void)computeSceneFramingForMetadata:(id)arg0 ;
-(void)handleMovingSceneForMetadata:(id)arg0 activeStationaryTracks:(id)arg1 activeMovingTracks:(id)arg2 validTracks:(id)arg3 ;
-(void)handleStationarySceneForMetadata:(id)arg0 activeStationaryTracks:(id)arg1 activeMovingTracks:(id)arg2 validTracks:(id)arg3 ;
-(void)reframeOnTracks:(id)arg0 withMetadata:(id)arg1 ;
-(void)reset;
-(void)updateStateTo:(NSInteger)arg0 atTime:(struct ? )arg1 ;


@end


#endif