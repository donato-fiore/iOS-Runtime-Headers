// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGINPUTSUGGESTERMETRICSLOGGER_H
#define PSGINPUTSUGGESTERMETRICSLOGGER_H

@class PETEventTracker2;

#import <Foundation/Foundation.h>


@interface PSGInputSuggesterMetricsLogger : NSObject {
    PETEventTracker2 *_tracker;
}




-(id)init;
-(id)initWithTracker:(id)arg0 ;
-(int)_errorTypeProto:(unsigned char)arg0 ;
-(int)_predictionDataSourceTypeProto:(unsigned char)arg0 ;
-(int)_triggerSourceTypeProto:(NSUInteger)arg0 ;
-(void)_populatePredictionItems:(id)arg0 proto:(id)arg1 ;
-(void)_populateQueryFields:(id)arg0 proto:(id)arg1 ;
-(void)_populateTreatmentFields:(id)arg0 proto:(id)arg1 ;
-(void)_populateTriggerAttributeFields:(id)arg0 proto:(id)arg1 ;
-(void)_populateTriggerFields:(id)arg0 proto:(id)arg1 ;
-(void)logEngagement:(id)arg0 request:(id)arg1 position:(NSUInteger)arg2 config:(id)arg3 ;
-(void)logError:(unsigned char)arg0 request:(id)arg1 trigger:(id)arg2 config:(id)arg3 ;
-(void)logImpression:(id)arg0 request:(id)arg1 config:(id)arg2 ;
-(void)logPrediction:(id)arg0 request:(id)arg1 latencyMillis:(CGFloat)arg2 config:(id)arg3 ;
-(void)logQuery:(id)arg0 config:(id)arg1 ;
-(void)logSpeedMetricForLocaleIdentifier:(id)arg0 messageDurationMilliseconds:(int)arg1 messageLength:(int)arg2 messageWords:(int)arg3 zkwConfig:(id)arg4 wordBoundaryConfig:(id)arg5 ;
-(void)logTrigger:(id)arg0 request:(id)arg1 config:(id)arg2 ;


@end


#endif