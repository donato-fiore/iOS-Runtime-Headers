// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGMODELVALIDATOR_H
#define PHAPRIVATEFEDERATEDLEARNINGMODELVALIDATOR_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningModelValidator : NSObject

@property (readonly, nonatomic) NSURL *espressoModelShapeURL; // ivar: _espressoModelShapeURL
@property (readonly, nonatomic) NSURL *espressoModelURL; // ivar: _espressoModelURL


-(BOOL)_generateError:(*id)arg0 errorCode:(NSInteger)arg1 errorMessage:(id)arg2 underlyingError:(id)arg3 ;
-(BOOL)_isFingerprintVersionSupported:(NSInteger)arg0 ;
-(BOOL)isValidWithFingerprintVersionName:(id)arg0 modelInputName:(id)arg1 modelOutputName:(id)arg2 labelName:(id)arg3 labelPolicyName:(id)arg4 lossName:(id)arg5 layersToTrain:(id)arg6 error:(*id)arg7 ;
-(NSInteger)_featureVectorSizeForFingerprintVersionName:(id)arg0 error:(*id)arg1 ;
-(id)_dictionaryForJSONFileURL:(id)arg0 error:(*id)arg1 ;
-(id)_layerConfigForLabelName:(id)arg0 modelConfig:(id)arg1 error:(*id)arg2 ;
-(id)_layerConfigForLayerName:(id)arg0 modelConfig:(id)arg1 error:(*id)arg2 ;
-(id)_layerConfigForModelInputName:(id)arg0 modelConfig:(id)arg1 error:(*id)arg2 ;
-(id)_layerConfigForModelOutputName:(id)arg0 modelConfig:(id)arg1 error:(*id)arg2 ;
-(id)_layerConfigForName:(id)arg0 modelConfig:(id)arg1 attributeName:(id)arg2 useEquality:(BOOL)arg3 error:(*id)arg4 ;
-(id)_sizeForLayerName:(id)arg0 modelShape:(id)arg1 error:(*id)arg2 ;
-(id)initWithEspressoModelURL:(id)arg0 espressoModelShapeURL:(id)arg1 ;


@end


#endif