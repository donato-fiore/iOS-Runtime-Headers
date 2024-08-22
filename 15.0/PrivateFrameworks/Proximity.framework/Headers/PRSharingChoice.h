// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRSHARINGCHOICE_H
#define PRSHARINGCHOICE_H

@class NSMutableDictionary, NSData, NSArray, NSSortDescriptor;
@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>


@interface PRSharingChoice : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_scores;
    CGFloat _lastScoreReportMachContinuousTime;
    CGFloat _lastBigHeadFirstReportTime;
    NSData *_lastBigHeadMacAddress;
    NSArray *_lastReportedScores;
    SharingImportanceMeasurements _measurements;
    NSSortDescriptor *_scoreSortDescriptor;
    unique_ptr<SharingImportanceManager, std::default_delete<SharingImportanceManager>> _estimatorRangeOnly;
    unique_ptr<SharingImportanceManager, std::default_delete<SharingImportanceManager>> _estimatorRangeAndAngle;
}


@property BOOL currentlyInitiating; // ivar: _currentlyInitiating
@property CGFloat halfPointingAngleDegrees; // ivar: _halfPointingAngleDegrees
@property (retain, nonatomic) NSObject<OS_os_log> *logger; // ivar: _logger
@property (copy) id *newScoresHandler; // ivar: _newScoresHandler
@property BOOL outputScoreCalculatedWithAngle; // ivar: _outputScoreCalculatedWithAngle
@property BOOL useRegionBasedEstimator; // ivar: _useRegionBasedEstimator


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)addBluetoothProximityEstimate:(struct NeighborMeasurements )arg0 currentMachContTime:(CGFloat)arg1 ;
-(void)addRoseSolutions:(id)arg0 currentMachContTime:(CGFloat)arg1 ;
-(void)createEstimators;
-(void)heartbeatTimeout:(CGFloat)arg0 currentMachContTime:(CGFloat)arg1 useUpdatedScores:(BOOL)arg2 ;
-(void)reportScoresToClientAlways:(BOOL)arg0 useUpdatedScoreList:(BOOL)arg1 currentMachContTime:(CGFloat)arg2 ;
-(void)updateScoresForTime:(CGFloat)arg0 ;
-(void)updateScoresWithNewMeasurement:(*void)arg0 ;


@end


#endif