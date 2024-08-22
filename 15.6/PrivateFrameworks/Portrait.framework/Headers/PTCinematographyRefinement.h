// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTCINEMATOGRAPHYREFINEMENT_H
#define PTCINEMATOGRAPHYREFINEMENT_H

@class NSMutableArray, NSMutableDictionary, NSNumber;

#import <Foundation/Foundation.h>

#import "PTCinematographyRefinementOptions.h"
#import "PTCinematographyFrameDetectionSmoother.h"

@interface PTCinematographyRefinement : NSObject

@property (nonatomic) NSUInteger firstIndexToLookForTransitions; // ivar: _firstIndexToLookForTransitions
@property (retain, nonatomic) NSMutableArray *frames; // ivar: _frames
@property (retain, nonatomic) NSMutableDictionary *globals; // ivar: _globals
@property (copy, nonatomic) PTCinematographyRefinementOptions *options; // ivar: _options
@property (nonatomic) NSUInteger recordingState; // ivar: _recordingState
@property (retain, nonatomic) NSNumber *refinedFrameNumber; // ivar: _refinedFrameNumber
@property (nonatomic) BOOL shouldReturnAllCachedFrames; // ivar: _shouldReturnAllCachedFrames
@property (retain, nonatomic) PTCinematographyFrameDetectionSmoother *smoother; // ivar: _smoother
@property (readonly, nonatomic) ? timeDelayForRefinement; // ivar: _timeDelayForRefinement


-(BOOL)_needSnapshotForPolicy:(NSUInteger)arg0 ;
-(NSUInteger)_framesIndexForTime:(struct ? )arg0 ;
-(id)_extractFramesReturningAll:(BOOL)arg0 ;
-(id)_extractFramesToIndex:(NSUInteger)arg0 ;
-(id)globalCinematographyDictionary;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)refinedFrames;
-(void)_endSmoothedFrames;
-(void)_logRackFocusPullToFrameAtIndex:(NSUInteger)arg0 fromIndex:(NSUInteger)arg1 label:(id)arg2 ;
-(void)_moveAlongSmoothedFrames;
-(void)_performLinearRackFocusPullToFrameAtIndex:(NSUInteger)arg0 fromIndex:(NSInteger)arg1 ;
-(void)_performRackFocusPullToFrameAtIndex:(NSUInteger)arg0 ;
-(void)_performRackFocusPullsStartingAtIndex:(NSUInteger)arg0 ;
-(void)_updateGlobalsWithSnapshot:(id)arg0 ;
-(void)_updateRecordingStateForSnapshot:(id)arg0 ;
-(void)addFrames:(id)arg0 ;
-(void)endOfFrames;
-(void)startRecording;
-(void)stopRecording;


@end


#endif