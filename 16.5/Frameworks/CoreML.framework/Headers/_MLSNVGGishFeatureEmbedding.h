// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MLSNVGGISHFEATUREEMBEDDING_H
#define _MLSNVGGISHFEATUREEMBEDDING_H

@protocol MLCustomModel;

#import <Foundation/Foundation.h>

#import "MLModelDescription.h"

@interface _MLSNVGGishFeatureEmbedding : NSObject <MLCustomModel>

 {
    id<MLCustomModel> *_featureEmbeddingModel;
}


@property (readonly, nonatomic) MLModelDescription *modelDescription; // ivar: _modelDescription


-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif