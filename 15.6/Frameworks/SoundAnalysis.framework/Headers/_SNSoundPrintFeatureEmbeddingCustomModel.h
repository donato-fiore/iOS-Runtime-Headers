// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SNSOUNDPRINTFEATUREEMBEDDINGCUSTOMMODEL_H
#define _SNSOUNDPRINTFEATUREEMBEDDINGCUSTOMMODEL_H

@class MLModelDescription, NSDictionary;
@protocol SNMLModel;

#import <Foundation/Foundation.h>


@interface _SNSoundPrintFeatureEmbeddingCustomModel : NSObject {
    MLModelDescription *_modelDescription;
    id<SNMLModel> *_model;
    NSDictionary *_outerToInnerInputFeatureNameMappings;
    NSDictionary *_outerToInnerOutputFeatureNameMappings;
}




-(id)initWithModel:(id)arg0 modelDescription:(id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif