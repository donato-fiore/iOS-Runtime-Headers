// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSANALYTICSUSAGEEVENTSPROCESSOR_H
#define TPSANALYTICSUSAGEEVENTSPROCESSOR_H

@class NSDate;


#import "TPSAnalyticsProcessor.h"

@interface TPSAnalyticsUsageEventsProcessor : TPSAnalyticsProcessor {
    NSDate *_currentDate;
}




+(BOOL)_tipStatusValidForLiftProcessing:(id)arg0 contextualInfo:(id)arg1 firstShownDate:(id)arg2 ;
+(id)_firstShownDateForTipStatus:(id)arg0 ;
+(id)_preHintRangeOutOfBoundsForIdentifier:(id)arg0 ;
+(id)_preHintUsageKeyForIdentifier:(id)arg0 ;
+(id)_usageEventsProcessedKeyForIdentifier:(id)arg0 ;
-(id)init;
-(void)_calculateLift:(id)arg0 completion:(id)arg1 ;
-(void)_countsForPredicate:(id)arg0 streamName:(id)arg1 interval:(id)arg2 userStore:(BOOL)arg3 completion:(id)arg4 ;
-(void)_saveHistoricalUsage:(id)arg0 completion:(id)arg1 ;
-(void)_savePreHintRangeOutOfBounds:(BOOL)arg0 forIdentifier:(id)arg1 ;
-(void)processAnalytics:(id)arg0 ;
-(void)resetAnalytics;
-(void)setCurrentDate:(id)arg0 ;


@end


#endif