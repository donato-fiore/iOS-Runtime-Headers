// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFCOREMLFEATUREPROVIDERUTILS_H
#define LCFCOREMLFEATUREPROVIDERUTILS_H


#import <Foundation/Foundation.h>


@interface LCFCoreMLFeatureProviderUtils : NSObject



+(id)toMultiArrayTypeBatchProvider:(id)arg0 srcFeatureNames:(id)arg1 srcLabelName:(id)arg2 destFeatureName:(id)arg3 destLabelName:(id)arg4 ;
+(id)toMultiArrayTypeFeatureProvider:(id)arg0 srcFeatureNames:(id)arg1 srcLabelName:(id)arg2 destFeatureName:(id)arg3 destLabelName:(id)arg4 ;


@end


#endif