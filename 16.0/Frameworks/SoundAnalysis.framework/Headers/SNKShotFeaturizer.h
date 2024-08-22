// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNKSHOTFEATURIZER_H
#define SNKSHOTFEATURIZER_H


#import <Foundation/Foundation.h>


@interface SNKShotFeaturizer : NSObject



+(id)featurizeFiles:(id)arg0 hallucinatorModelURL:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
// +(id)featurizeFiles:(id)arg0 hallucinatorModelURL:(id)arg1 queue:(id)arg2 resultHandler:(id)arg3 completionHandler:(unk)arg4  ;
+(id)performSegmentationRequest:(id)arg0 error:(*id)arg1 ;
+(id)plistFromFeaturizationResult:(id)arg0 error:(*id)arg1 ;


@end


#endif