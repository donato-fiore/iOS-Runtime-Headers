// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SNVGGISHFEATUREEMBEDDINGCUSTOMMODEL_H
#define _SNVGGISHFEATUREEMBEDDINGCUSTOMMODEL_H

@class MLModelDescription, MLModel;
@protocol MLCustomModel;

#import <Foundation/Foundation.h>


@interface _SNVGGishFeatureEmbeddingCustomModel : NSObject <MLCustomModel>

 {
    MLModelDescription *_modelDescription;
    MLModel *_model;
}




-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif