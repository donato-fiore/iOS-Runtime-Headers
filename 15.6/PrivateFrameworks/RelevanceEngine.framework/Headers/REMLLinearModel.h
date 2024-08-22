// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMLLINEARMODEL_H
#define REMLLINEARMODEL_H

@class NSDictionary;
@protocol REMLLinearModelProperties;


#import "REMLModel.h"

@interface REMLLinearModel : REMLModel <REMLLinearModelProperties>

 {
    NSDictionary *_models;
}


@property (readonly, nonatomic) NSDictionary *models;


-(BOOL)_loadModelFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveModelToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)requiresDirectory;
-(NSInteger)_getNumberOfCoordinates;
-(NSUInteger)_getTotalExampleCount;
-(NSUInteger)_getTotalPositiveCount;
-(float)_getAveragePrediction;
-(float)_getNormalizedEntropy;
-(id)_predictWithFeatures:(id)arg0 ;
-(id)initWithFeatureSet:(id)arg0 interactionDescriptors:(id)arg1 ;
-(id)predictionSetWithFeatures:(id)arg0 ;
-(void)_clearCache;
-(void)_clearModel;
-(void)_enumerateModelsForFeatureMap:(id)arg0 usingBlock:(id)arg1 ;
-(void)_trainWithFeatures:(id)arg0 positiveEvent:(id)arg1 ;
-(void)logCoreAnalyticsMetrics;
-(void)setMetricsRecorder:(id)arg0 ;
-(void)trainWithFeatures:(id)arg0 positiveEvent:(id)arg1 interaction:(id)arg2 ;


@end


#endif