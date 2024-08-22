// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCENEFRAMINGENGINE_H
#define SCENEFRAMINGENGINE_H

@protocol FramingSpaceManager;

#import <Foundation/Foundation.h>

#import "CinematicFramingSessionFramingParameters.h"
#import "CinematicFramingSessionOptions.h"

@interface SceneFramingEngine : NSObject {
    CGRect _currentTargetViewport;
    ? _lastFrameWithDetectionsTimestamp;
    CGRect _deadband;
    BOOL _lastFrameHadSubjects;
    unsigned short _framingState;
    CGRect _subjectRectHistoryBuffer;
    unsigned short _subjectRectHistoryCount;
    unsigned short _subjectRectHistoryHeadIdx;
    ? _subjectRectHistoryUpdateTime;
    BOOL _subjectRectStationary;
    ? _subjectRectStationaryTime;
    CGRect _driftStartDeadband;
    ? _driftStartTime;
    ? _driftEndTime;
    CGRect _recenterStartDeadband;
    ? _recenterStartTime;
    ? _recenterEndTime;
    ? _returningHomeStartTime;
    ? _returningHomeStartRect;
    ? _returningHomeTargetRect;
    CinematicFramingSessionFramingParameters *_activeFramingParameters;
    id<FramingSpaceManager> *_framingSpaceManager;
}


@property (retain, nonatomic) CinematicFramingSessionFramingParameters *activeFramingParameters;
@property (readonly, nonatomic) CGRect currentTargetViewport;
@property (nonatomic) CGRect defaultViewport; // ivar: defaultViewport
@property (retain, nonatomic) CinematicFramingSessionOptions *options; // ivar: _options


-(BOOL)isCurrentFramingIdeal:(struct CGRect )arg0 withTolerance:(float)arg1 ;
-(BOOL)isSubjectRectStationary:(struct CGRect )arg0 ;
-(float)calculateViewportWidthToFitSubjectsInDeadband:(struct CGRect )arg0 ;
-(float)computeDeadbandHeightForWidth:(float)arg0 ;
-(float)computeDeadbandHeightFromViewportHeight:(float)arg0 ;
-(float)computeDeadbandWidthForHeight:(float)arg0 ;
-(float)computeDeadbandWidthFromViewportWidth:(float)arg0 ;
-(float)computeViewportWidthFromDeadbandWidth:(float)arg0 ;
-(float)minAllowedDeadbandWidth;
-(float)minAllowedScreenWidth;
-(id)initWithFramingSpaceManager:(id)arg0 ;
-(struct ? )determineSceneFramingForTracks:(id)arg0 userViewport:(struct CGRect )arg1 atTime:(struct ? )arg2 ;
-(struct ? )determineSceneSummaryForTracks:(id)arg0 userViewport:(struct CGRect )arg1 atTime:(struct ? )arg2 ;
-(struct ? )determineTemporallyStableTargetCropForTracks:(id)arg0 userViewport:(struct CGRect )arg1 atTime:(struct ? )arg2 ;
-(struct CGRect )calculateBaselineViewportForTracks:(id)arg0 atTime:(struct ? )arg1 ;
-(struct CGRect )calculateSubjectEnclosingRectangleForTracks:(id)arg0 withBaselineWidth:(float)arg1 userViewport:(struct CGRect )arg2 atTime:(struct ? )arg3 maxSubjectRelativeWidthOut:(*float)arg4 ;
-(struct CGRect )calculateViewportCenteredAround:(struct CGRect )arg0 withWidth:(float)arg1 ;
-(struct CGRect )computeCroppedSubjectEnclosingRectForViewportWidth:(float)arg0 subjectEnclosingRect:(struct CGRect )arg1 ;
-(struct CGRect )computeDeadbandFromViewport:(struct CGRect )arg0 ;
-(struct CGRect )computeViewportFromDeadband:(struct CGRect )arg0 ;
-(struct CGRect )determineDeadbandForSubjectEnclosingRect:(struct CGRect )arg0 oldDeadband:(struct CGRect )arg1 newDeadbandWidth:(float)arg2 ;
-(void)clearSubjectHistory;
-(void)reset;
-(void)transitionToFramingState:(unsigned short)arg0 atTime:(struct ? )arg1 ;
-(void)updateDeadbandToFitScene:(struct ? )arg0 tracks:(id)arg1 userViewport:(struct CGRect )arg2 atTime:(struct ? )arg3 ;
-(void)updateDeadbandWithSubjectRect:(struct CGRect )arg0 idealDeadband:(struct CGRect )arg1 slackDeadband:(struct CGRect )arg2 atTime:(struct ? )arg3 ;
-(void)updateSubjectMovement:(struct CGRect )arg0 atTime:(struct ? )arg1 ;


@end


#endif