// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REMLSINGLEWEIGHTEDMODEL_H
#define _REMLSINGLEWEIGHTEDMODEL_H

@class REMLWeightedModel;
@protocol _REMLSingleWeightedModelProperties;


#import "REMLModel.h"

@interface _REMLSingleWeightedModel : REMLWeightedModel <_REMLSingleWeightedModelProperties>

 {
    REMLModel *_model;
}


@property (readonly, nonatomic) REMLModel *model;


-(BOOL)loadModelFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveModelToURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithFeatureSet:(id)arg0 priorMean:(float)arg1 biasFeature:(id)arg2 modelVarianceEpsilon:(float)arg3 ;
-(id)predictWithFeatures:(id)arg0 ;
-(void)enumerateModels:(id)arg0 ;
-(void)trainModelWithFeatureMap:(id)arg0 positiveEvent:(id)arg1 ;


@end


#endif