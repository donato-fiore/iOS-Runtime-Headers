// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMSTATETRACKER_H
#define HMMSTATETRACKER_H

@class NSMutableArray, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "HMMStateData.h"

@interface HMMStateTracker : NSObject

@property (nonatomic) BOOL autoStopPreviousState; // ivar: _autoStopPreviousState
@property (retain, nonatomic) NSMutableArray *closedStates; // ivar: _closedStates
@property (readonly, nonatomic) HMMStateData *longestState; // ivar: _longestState
@property (nonatomic) NSUInteger longestStateDuration; // ivar: _longestStateDuration
@property (retain, nonatomic) NSMutableDictionary *openStates; // ivar: _openStates
@property (nonatomic) NSUInteger startTime; // ivar: _startTime
@property (readonly, nonatomic, getter=isStarted) BOOL started; // ivar: _started
@property (nonatomic) NSUInteger stateEntryTransitionTime; // ivar: _stateEntryTransitionTime
@property (readonly, nonatomic) NSArray *states;
@property (readonly, nonatomic) NSUInteger totalDuration; // ivar: _totalDuration
@property (readonly, nonatomic) NSUInteger totalStateDuration; // ivar: _totalStateDuration


-(id)initAutoStopPreviousState:(BOOL)arg0 ;
-(void)_exitState:(id)arg0 exitTime:(NSUInteger)arg1 exitData:(id)arg2 ;
-(void)endWithTime:(NSUInteger)arg0 ;
-(void)enterState:(id)arg0 enterTime:(NSUInteger)arg1 enterData:(id)arg2 ;
-(void)exitState:(id)arg0 exitTime:(NSUInteger)arg1 exitData:(id)arg2 ;
-(void)startWithTime:(NSUInteger)arg0 ;
-(void)updateStateDuration:(NSUInteger)arg0 ;


@end


#endif