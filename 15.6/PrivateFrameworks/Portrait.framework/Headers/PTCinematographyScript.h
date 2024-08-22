// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTCINEMATOGRAPHYSCRIPT_H
#define PTCINEMATOGRAPHYSCRIPT_H

@class AVAsset, NSArray, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, PTCinematographyScriptChanges;

#import <Foundation/Foundation.h>

#import "PTCinematographyFocusFramesOptions.h"
#import "PTCinematographyFocusPuller.h"
#import "PTGlobalCinematographyMetadata.h"
#import "PTCinematographyTrackAllocator.h"
#import "PTCinematographyTrack.h"

@interface PTCinematographyScript : NSObject {
    BOOL _framesAreMutable;
    BOOL _baseDecisionsAreMutable;
    NSObject<OS_dispatch_queue> *_serialQueue;
    float _userAperture;
}


@property (retain, nonatomic) AVAsset *asset; // ivar: _asset
@property (retain, nonatomic) NSArray *baseDecisions; // ivar: _baseDecisions
@property (weak, nonatomic) NSObject<PTCinematographyScriptChanges> *changesDelegate; // ivar: _changesDelegate
@property (nonatomic) BOOL didInternalizeTracks; // ivar: _didInternalizeTracks
@property (retain, nonatomic) NSMutableArray *effectiveDecisions; // ivar: _effectiveDecisions
@property (retain, nonatomic) PTCinematographyFocusFramesOptions *focusFramesOptions; // ivar: _focusFramesOptions
@property (retain, nonatomic) PTCinematographyFocusPuller *focusPuller; // ivar: _focusPuller
@property (retain, nonatomic) NSArray *frames; // ivar: _frames
@property (retain, nonatomic) PTGlobalCinematographyMetadata *globals; // ivar: _globals
@property (nonatomic) NSInteger loadedTrackAllocatorState; // ivar: _loadedTrackAllocatorState
@property (nonatomic) float loadedUserAperture; // ivar: _loadedUserAperture
@property (retain, nonatomic) NSMutableArray *mutableGroupTracks; // ivar: _mutableGroupTracks
@property (retain, nonatomic) NSMutableArray *mutableTracks; // ivar: _mutableTracks
@property (readonly, nonatomic) ? timeRange; // ivar: _timeRange
@property (retain, nonatomic) PTCinematographyTrackAllocator *trackAllocator; // ivar: _trackAllocator
@property (retain, nonatomic) PTCinematographyTrackAllocator *trackAllocatorForFocusIdentifier; // ivar: _trackAllocatorForFocusIdentifier
@property (retain, nonatomic) NSArray *trackDecisions; // ivar: _trackDecisions
@property (retain, nonatomic) NSMutableDictionary *trackForGroupNumber; // ivar: _trackForGroupNumber
@property (retain, nonatomic) NSMutableDictionary *trackForNumber; // ivar: _trackForNumber
@property (retain, nonatomic) NSMutableDictionary *trackNumberForFocusIdentifier; // ivar: _trackNumberForFocusIdentifier
@property (readonly, nonatomic) NSArray *tracks;
@property (nonatomic) float userAperture;
@property (retain, nonatomic) NSMutableArray *userDecisions; // ivar: _userDecisions
@property (retain, nonatomic) PTCinematographyTrack *zeroDisparityTrack; // ivar: _zeroDisparityTrack


+(struct ? )defaultMinimumUserFocusDuration;
-(BOOL)_isEditCreatedTrack:(id)arg0 ;
-(BOOL)_loadWithAsset:(id)arg0 changesDictionary:(id)arg1 error:(*id)arg2 ;
-(BOOL)_removeUserDecision:(id)arg0 ;
-(BOOL)_resolveIfGroupDecision:(id)arg0 ;
-(BOOL)_shouldAddTrackDecision:(id)arg0 afterDecision:(id)arg1 ;
-(BOOL)_useFixedTransition;
-(BOOL)addTrack:(id)arg0 ;
-(BOOL)addUserDecision:(id)arg0 ;
-(BOOL)focusOnDetection:(id)arg0 strong:(BOOL)arg1 ;
-(BOOL)focusOnGroupIdentifier:(NSInteger)arg0 atTime:(struct ? )arg1 strong:(BOOL)arg2 ;
-(BOOL)focusOnTrack:(id)arg0 atTime:(struct ? )arg1 strong:(BOOL)arg2 ;
-(BOOL)focusOnTrackIdentifier:(NSInteger)arg0 atTime:(struct ? )arg1 strong:(BOOL)arg2 ;
-(BOOL)removeAllUserDecisions;
-(BOOL)removeTrack:(id)arg0 ;
-(BOOL)removeUserDecision:(id)arg0 ;
-(id)_bestDetectionForGroupIdentifier:(NSInteger)arg0 time:(struct ? )arg1 ;
-(id)_calculateTrackDecisions;
-(id)_detectionWithGroupIdentifier:(NSInteger)arg0 atOrBeforeTime:(struct ? )arg1 ;
-(id)_detectionWithTrackIdentifier:(NSInteger)arg0 atOrBeforeTime:(struct ? )arg1 ;
-(id)_effectiveDecisionsFromBaseDecisionsRange:(struct _NSRange )arg0 userDecisionsRange:(struct _NSRange )arg1 endTime:(struct ? )arg2 ;
-(id)_effectiveDecisionsFromZippedDecisions:(id)arg0 endTime:(struct ? )arg1 ;
-(id)_existingGroupTrackForGroupIdentifier:(NSInteger)arg0 ;
-(id)_internalizeGroupTrackForDetection:(id)arg0 ;
-(id)_internalizeTrackForDetection:(id)arg0 ;
-(id)_internalizeTrackNumberForFocusIdentifier:(id)arg0 ;
-(id)_internalizeTrackWithGroupNumberFromDetection:(id)arg0 ;
-(id)_internalizeTrackWithNumberFromDetection:(id)arg0 ;
-(id)_latestDetectionOfGroupIdentifier:(NSInteger)arg0 atOrBeforeFrameIndex:(NSUInteger)arg1 timeLimit:(struct ? )arg2 ;
-(id)_latestDetectionOfTrackIdentifier:(NSInteger)arg0 atOrBeforeFrameIndex:(NSUInteger)arg1 timeLimit:(struct ? )arg2 ;
-(id)_trackDecisionsInTimeRange:(struct ? )arg0 ;
-(id)_userCreatedTracks;
-(id)_userDecisionDictionaries;
-(id)_userDecisionDictionariesTrimmedByTimeRange:(struct ? )arg0 ;
-(id)_userDecisionToFocusOnDetection:(id)arg0 time:(struct ? )arg1 strong:(BOOL)arg2 group:(BOOL)arg3 ;
-(id)_userTrackDictionaries;
-(id)_userTrackDictionariesTrimmedByTimeRange:(struct ? )arg0 ;
-(id)_zipBaseDecisionsRange:(struct _NSRange )arg0 userDecisionsRange:(struct _NSRange )arg1 ;
-(id)baseDecisionsInTimeRange:(struct ? )arg0 ;
-(id)changesDictionary;
-(id)changesDictionaryTrimmedByTimeRange:(struct ? )arg0 ;
-(id)decisionAfterTime:(struct ? )arg0 ;
-(id)decisionAtOrBeforeTime:(struct ? )arg0 ;
-(id)decisionBeforeTime:(struct ? )arg0 ;
-(id)decisionNearestTime:(struct ? )arg0 ;
-(id)decisionsInTimeRange:(struct ? )arg0 ;
-(id)frameAtTime:(struct ? )arg0 tolerance:(struct ? )arg1 ;
-(id)frameNearestTime:(struct ? )arg0 ;
-(id)framesInTimeRange:(struct ? )arg0 ;
-(id)init;
-(id)loadWithAsset:(id)arg0 changesDictionary:(id)arg1 completion:(id)arg2 ;
-(id)primaryDecisionAtTime:(struct ? )arg0 ;
-(id)secondaryDecisionAtTime:(struct ? )arg0 ;
-(id)trackForDecision:(id)arg0 ;
-(id)trackForGroupIdentifier:(NSInteger)arg0 ;
-(id)trackForIdentifier:(NSInteger)arg0 ;
-(id)userDecisionsInTimeRange:(struct ? )arg0 ;
-(struct ? )_startTimeOfFixedTransitionToDecision:(id)arg0 ;
-(struct ? )_timeRangeOfTransitionfromDecision:(id)arg0 toDecision:(id)arg1 ;
-(struct ? )_timeRangeOfTransitionfromDecision:(id)arg0 toDecision:(id)arg1 didShortenTransition:(*BOOL)arg2 ;
-(struct ? )timeRangeOfTransitionAfterDecision:(id)arg0 ;
-(struct ? )timeRangeOfTransitionBeforeDecision:(id)arg0 ;
-(void)_addDecision:(id)arg0 toTrackDecisions:(id)arg1 ;
-(void)_addDecisions:(id)arg0 toTrackDecisions:(id)arg1 ;
-(void)_addDetectionsFromCustomTrack:(id)arg0 ;
-(void)_addDetectionsFromFixedFocusTrack:(id)arg0 ;
-(void)_addGroupDecision:(id)arg0 toTrackDecisions:(id)arg1 nextDecision:(id)arg2 ;
-(void)_addGroupTrack:(id)arg0 ;
-(void)_addTrack:(id)arg0 identifier:(NSInteger)arg1 ;
-(void)_addZeroDisparityTrack;
-(void)_internalizeBaseDecisionsFromFrames:(id)arg0 ;
-(void)_internalizeDetectionsFromTrack:(id)arg0 ;
-(void)_internalizeFocusPullerFromFrames:(id)arg0 ;
-(void)_internalizeLoadedFrames:(id)arg0 changesDictionary:(id)arg1 reloading:(BOOL)arg2 ;
-(void)_internalizeTracksFromChangesDictionary:(id)arg0 ;
-(void)_internalizeTracksFromFrames:(id)arg0 ;
-(void)_internalizeUserApertureFromChangesDictionary:(id)arg0 ;
-(void)_internalizeUserDecisionsFromChangesDictionary:(id)arg0 ;
-(void)_internalizeUserDecisionsFromFrames:(id)arg0 ;
-(void)_invalidateTrackDecisions;
-(void)_notifyDelegateOfChangesToDecisionsInTimeRange:(struct ? )arg0 ;
-(void)_notifyDelegateOfChangesToFramesInTimeRange:(struct ? )arg0 ;
-(void)_reloadTrackAllocator;
-(void)_removeAllUserTracksForReloading;
-(void)_removeDetectionsWithTrackIdentifier:(NSInteger)arg0 ;
-(void)_removeTrack:(id)arg0 ;
-(void)_updateDecisionsAndFramesInTimeRange:(struct ? )arg0 ;
-(void)_updateEffectiveDecisionsInTimeRange:(struct ? )arg0 ;
-(void)_updateFramesForDecision:(id)arg0 upToTime:(struct ? )arg1 ;
-(void)_updateFramesForDecisions:(id)arg0 indexRange:(struct _NSRange )arg1 ;
-(void)_updateFramesForDecisions:(id)arg0 timeRange:(struct ? )arg1 ;
-(void)_updateFramesForFinalDecision:(id)arg0 ;
-(void)_updateFramesForTransitionFromDecision:(id)arg0 toDecision:(id)arg1 ;
-(void)_updateFramesForTransitionFromDecision:(id)arg0 toDecision:(id)arg1 timeRange:(struct ? )arg2 ;
-(void)_updateFramesFromDecision:(id)arg0 toDecision:(id)arg1 ;
-(void)_updateFramesInIndexRange:(struct _NSRange )arg0 forTransition:(id)arg1 fromDetection:(id)arg2 toDetection:(id)arg3 ;
-(void)_updateFramesInIndexRange:(struct _NSRange )arg0 forTransition:(id)arg1 fromDetection:(id)arg2 toDetection:(id)arg3 overTimeRange:(struct ? )arg4 ;
-(void)_updateFramesInIndexRange:(struct _NSRange )arg0 toFocusOnDetection:(id)arg1 ;
-(void)_updateFramesInIndexRange:(struct _NSRange )arg0 toFocusOnTrackIdentifier:(NSInteger)arg1 ;
-(void)_updateFramesInTimeRange:(struct ? )arg0 forTransition:(id)arg1 fromDetection:(id)arg2 toDetection:(id)arg3 ;
-(void)_updateFramesInTimeRange:(struct ? )arg0 toFocusOnTrackIdentifier:(NSUInteger)arg1 ;
-(void)addBaseDecision:(id)arg0 ;
-(void)addFrame:(id)arg0 ;
-(void)reloadWithChangesDictionary:(id)arg0 ;


@end


#endif