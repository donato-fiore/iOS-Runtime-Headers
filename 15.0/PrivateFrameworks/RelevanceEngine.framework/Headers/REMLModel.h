// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMLMODEL_H
#define REMLMODEL_H

@class NSString;
@protocol REMLModelProperties, RERelevanceEngineMetricsRecorder;

#import <Foundation/Foundation.h>

#import "REConcurrentDictionary.h"

@interface REMLModel : NSObject <REMLModelProperties>

 {
    REConcurrentDictionary *_predictionCache;
    BOOL _wantsPredictionCache;
    BOOL _implementsDebugSaving;
}


@property (nonatomic) BOOL allowsExploreExploit; // ivar: _allowsExploreExploit
@property (readonly, nonatomic) float averagePrediction;
@property (nonatomic) float exploreExploitModulator; // ivar: _exploreExploitModulator
@property (readonly, nonatomic) NSUInteger featureBitWidth;
@property (readonly, nonatomic) NSInteger getNumberOfCoordinates;
@property (readonly, nonatomic) NSUInteger maxFeatureCount;
@property (retain, nonatomic) NSString *metricsInteraction; // ivar: _metricsInteraction
@property (retain, nonatomic) NSObject<RERelevanceEngineMetricsRecorder> *metricsRecorder; // ivar: _metricsRecorder
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) float normalizedEntropy;
@property (nonatomic) float priorMean; // ivar: _priorMean
@property (nonatomic) float simulationExploreExploitModulator; // ivar: _simulationExploreExploitModulator
@property (readonly, nonatomic) NSUInteger totalExampleCount;
@property (readonly, nonatomic) NSUInteger totalPositiveCount;
@property (nonatomic) float varianceEpsilon; // ivar: _varianceEpsilon


+(id)modelWithFeatureSet:(id)arg0 priorMean:(float)arg1 modelVarianceEpsilon:(float)arg2 ;
-(BOOL)_loadModelFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveDebugModelToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveModelToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadModelFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)requiresDirectory;
-(BOOL)saveModelToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)wantsPredictionCache;
-(NSUInteger)_getTotalExampleCount;
-(NSUInteger)_getTotalPositiveCount;
-(float)_getAveragePrediction;
-(float)_getNormalizedEntropy;
-(id)_predictWithFeatures:(id)arg0 ;
-(id)init;
-(id)initWithFeatureSet:(id)arg0 priorMean:(float)arg1 modelVarianceEpsilon:(float)arg2 ;
-(id)predictWithFeatures:(id)arg0 ;
-(id)predictionSetWithFeatures:(id)arg0 ;
-(void)_clearCache;
-(void)_clearModel;
-(void)_trainWithFeatures:(id)arg0 positiveEvent:(id)arg1 ;
-(void)clearModel;
-(void)logCoreAnalyticsMetrics;
-(void)setWantsPredictionCache:(BOOL)arg0 ;
-(void)trainWithFeatures:(id)arg0 positiveEvent:(id)arg1 ;


@end


#endif