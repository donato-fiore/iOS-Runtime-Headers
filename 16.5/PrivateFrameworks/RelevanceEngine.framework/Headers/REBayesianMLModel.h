// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REBAYESIANMLMODEL_H
#define REBAYESIANMLMODEL_H

@protocol REBayesianMLModelProperties;


#import "REMLModel.h"
#import "REExportedTable.h"

@interface REBayesianMLModel : REMLModel <REBayesianMLModelProperties>

 {
    BayesianModel _model;
    NSUInteger _numberOfFeatures;
}


@property (readonly, nonatomic) REExportedTable *content;


+(NSUInteger)featureBitWidth;
+(NSUInteger)maxFeatureCount;
-(BOOL)_loadModelFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveDebugModelToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveModelToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveModelToURL:(id)arg0 includeDebugData:(BOOL)arg1 error:(*id)arg2 ;
-(NSInteger)_getNumberOfCoordinates;
-(NSUInteger)_getTotalExampleCount;
-(NSUInteger)_getTotalPositiveCount;
-(NSUInteger)_maxFeatureCoordinates;
-(float)_getAveragePrediction;
-(float)_getNormalizedEntropy;
-(id)_predictWithFeatures:(id)arg0 ;
-(id)initWithFeatureSet:(id)arg0 priorMean:(float)arg1 modelVarianceEpsilon:(float)arg2 ;
-(void)_clearModel;
-(void)_loadFeatureVector:(*void)arg0 fromFeatureMap:(id)arg1 ;
-(void)_trainWithFeatures:(id)arg0 positiveEvent:(id)arg1 ;
-(void)logCoreAnalyticsMetrics;


@end


#endif