// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMIMETRICSAGGREGATEDACCURACYLOGS_H
#define SGMIMETRICSAGGREGATEDACCURACYLOGS_H

@class PBCodable;
@protocol NSCopying;


#import "SGMIMetricsAggregatedAccuracyLog.h"
#import "SGMIMetricsTrialMetadata.h"

@interface SGMIMetricsAggregatedAccuracyLogs : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *activeAggregatedAccuracyLogForThePastFourWeeks; // ivar: _activeAggregatedAccuracyLogForThePastFourWeeks
@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *activeAggregatedAccuracyLogSinceModelInitialization; // ivar: _activeAggregatedAccuracyLogSinceModelInitialization
@property (retain, nonatomic) SGMIMetricsTrialMetadata *activeTrialMetadata; // ivar: _activeTrialMetadata
@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *backgroundAggregatedAccuracyLogForThePastFourWeeks; // ivar: _backgroundAggregatedAccuracyLogForThePastFourWeeks
@property (retain, nonatomic) SGMIMetricsAggregatedAccuracyLog *backgroundAggregatedAccuracyLogSinceModelInitialization; // ivar: _backgroundAggregatedAccuracyLogSinceModelInitialization
@property (retain, nonatomic) SGMIMetricsTrialMetadata *backgroundTrialMetadata; // ivar: _backgroundTrialMetadata
@property (readonly, nonatomic) BOOL hasActiveAggregatedAccuracyLogForThePastFourWeeks;
@property (readonly, nonatomic) BOOL hasActiveAggregatedAccuracyLogSinceModelInitialization;
@property (readonly, nonatomic) BOOL hasActiveTrialMetadata;
@property (readonly, nonatomic) BOOL hasBackgroundAggregatedAccuracyLogForThePastFourWeeks;
@property (readonly, nonatomic) BOOL hasBackgroundAggregatedAccuracyLogSinceModelInitialization;
@property (readonly, nonatomic) BOOL hasBackgroundTrialMetadata;
@property (nonatomic) BOOL hasHoursSinceReference;
@property (nonatomic) unsigned int hoursSinceReference; // ivar: _hoursSinceReference


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif