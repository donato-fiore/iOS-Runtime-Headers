// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REACTIVITYSUMMARYPREDICTOR_H
#define REACTIVITYSUMMARYPREDICTOR_H

@class NSSet;
@protocol REActivitySummaryPredictorProperties;


#import "REPredictor.h"

@interface REActivitySummaryPredictor : REPredictor <REActivitySummaryPredictorProperties>

 {
    NSSet *_queries;
}


@property float activeEnergyPercentComplete; // ivar: _activeEnergyPercentComplete
@property float exerciseTimePercentComplete; // ivar: _exerciseTimePercentComplete
@property float standHourPercentComplete; // ivar: _standHourPercentComplete


+(CGFloat)updateInterval;
+(id)supportedFeatures;
-(id)_init;
-(id)featureValueForFeature:(id)arg0 element:(id)arg1 engine:(id)arg2 trainingContext:(id)arg3 ;
-(void)_runQuery:(id)arg0 ;
-(void)_startActivitySummaryQueryWithRetries:(NSInteger)arg0 ;
-(void)_stopQueries;
-(void)_stopQuery:(id)arg0 ;
-(void)_updateWithActivitySummary:(id)arg0 completion:(id)arg1 ;
-(void)pause;
-(void)resume;
-(void)update;


@end


#endif