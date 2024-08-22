// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNWRAPMODEL_H
#define SNWRAPMODEL_H


#import <Foundation/Foundation.h>


@interface SNWrapModel : NSObject



+(id)generateFeatureMappingsFromOuterFeatureNames:(id)arg0 toInnerFeatureNames:(id)arg1 ;
+(id)generateFeatureMappingsFromOuterFeatureNames:(id)arg0 toInnerFeatureNames:(id)arg1 matcher:(id)arg2 ;
+(id)generateInputFeatureMappingsFromOuterDescription:(id)arg0 toInnerDescription:(id)arg1 ;
+(id)generateOutputFeatureMappingsFromOuterDescription:(id)arg0 toInnerDescription:(id)arg1 ;
+(id)innerInputFeatureProviderFromOuter:(id)arg0 outerToInnerInputFeatureNameMappings:(id)arg1 error:(*id)arg2 ;
+(id)outerOutputFeatureProviderFromInner:(id)arg0 outerToInnerOutputFeatureNameMappings:(id)arg1 error:(*id)arg2 ;


@end


#endif