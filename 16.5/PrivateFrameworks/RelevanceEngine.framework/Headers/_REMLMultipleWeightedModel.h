// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REMLMULTIPLEWEIGHTEDMODEL_H
#define _REMLMULTIPLEWEIGHTEDMODEL_H

@class REMLWeightedModel, NSMutableDictionary, NSDictionary;
@protocol _REMLMultipleWeightedModelProperties;


#import "REFeature.h"
#import "REFeatureSet.h"

@interface _REMLMultipleWeightedModel : REMLWeightedModel <_REMLMultipleWeightedModelProperties>

 {
    REFeature *_identificationFeature;
    REFeatureSet *_featureSet;
    float _priorMean;
    float _varianceEpsilon;
    NSMutableDictionary *_models;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSDictionary *models;


-(BOOL)loadModelFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveModelToURL:(id)arg0 error:(*id)arg1 ;
-(id)_modelForFeatureMap:(id)arg0 ;
-(id)_modelForKey:(id)arg0 ;
-(id)initWithFeature:(id)arg0 featureSet:(id)arg1 priorMean:(float)arg2 biasFeature:(id)arg3 modelVarianceEpsilon:(float)arg4 ;
-(id)predictWithFeatures:(id)arg0 ;
-(void)enumerateModels:(id)arg0 ;
-(void)trainModelWithFeatureMap:(id)arg0 positiveEvent:(id)arg1 ;


@end


#endif