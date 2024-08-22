// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPMLCLASSIFIERMODEL_H
#define NLPMLCLASSIFIERMODEL_H

@class MLModelDescription;
@protocol MLCustomModel;


#import "NLModel.h"

@interface NLPMLClassifierModel : NLModel <MLCustomModel>

 {
    MLModelDescription *_modelDescription;
}


@property (readonly, copy) MLModelDescription *modelDescription;


-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif