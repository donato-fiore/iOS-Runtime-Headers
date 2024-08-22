// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAWORKERHEALTHMONITOR_H
#define PHAWORKERHEALTHMONITOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PHAWorkerHealthMonitor : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSMutableDictionary *cachedAverageScoresByWorkerType; // ivar: _cachedAverageScoresByWorkerType
@property (readonly, nonatomic) NSMutableDictionary *lastTrimDateByWorkerType; // ivar: _lastTrimDateByWorkerType
@property (nonatomic) CGFloat maxScoreRecentnessInterval; // ivar: _maxScoreRecentnessInterval
@property (readonly, nonatomic) NSMutableDictionary *scoresByWorkerType; // ivar: _scoresByWorkerType


-(BOOL)_isHealthyForWorkerType:(short)arg0 ;
-(BOOL)_needsTrimScoresForWorkerType:(short)arg0 ;
-(BOOL)isHealthyForWorkerType:(short)arg0 ;
-(float)_averageScoreForWorkerType:(short)arg0 ;
-(float)_calculateAverageScoreForWorkerType:(short)arg0 ;
-(float)averageScoreForWorkerType:(short)arg0 ;
-(id)_scoresForWorkerType:(short)arg0 ;
-(id)init;
-(id)statusAsDictionary;
-(void)_trimScoresForWorkerType:(short)arg0 ;
-(void)recordResultsFromWorkerJob:(id)arg0 ;
-(void)reset;


@end


#endif