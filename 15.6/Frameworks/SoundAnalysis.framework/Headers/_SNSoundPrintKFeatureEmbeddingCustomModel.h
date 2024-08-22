// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SNSOUNDPRINTKFEATUREEMBEDDINGCUSTOMMODEL_H
#define _SNSOUNDPRINTKFEATUREEMBEDDINGCUSTOMMODEL_H

@class SNSoundPrintFeatureEmbeddingCustomModel;
@protocol MLCustomModel;



@interface _SNSoundPrintKFeatureEmbeddingCustomModel : SNSoundPrintFeatureEmbeddingCustomModel <MLCustomModel>





-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif