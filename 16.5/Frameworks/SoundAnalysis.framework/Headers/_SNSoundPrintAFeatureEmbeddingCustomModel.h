// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SNSOUNDPRINTAFEATUREEMBEDDINGCUSTOMMODEL_H
#define _SNSOUNDPRINTAFEATUREEMBEDDINGCUSTOMMODEL_H

@class SNSoundPrintFeatureEmbeddingCustomModel, NSString, NSArray;
@protocol MLCustomModel;



@interface _SNSoundPrintAFeatureEmbeddingCustomModel : SNSoundPrintFeatureEmbeddingCustomModel <MLCustomModel>

 {
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    NSArray *_outputShape;
}




-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif