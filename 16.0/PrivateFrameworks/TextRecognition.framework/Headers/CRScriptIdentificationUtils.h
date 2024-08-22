// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSCRIPTIDENTIFICATIONUTILS_H
#define CRSCRIPTIDENTIFICATIONUTILS_H


#import <Foundation/Foundation.h>


@interface CRScriptIdentificationUtils : NSObject



+(NSInteger)computeAssignedIndex:(*void)arg0 scriptRatioThresholds:(id)arg1 ;
+(struct vector<float *, std::allocator<float *>> )getBufferData:(*void)arg0 ;
+(struct vector<std::unique_ptr<CRImageBuffer>, std::allocator<std::unique_ptr<CRImageBuffer>>> )createMaps:(struct CGSize )arg0 channels:(NSInteger)arg1 ;
+(struct vector<std::unique_ptr<CRImageBuffer>, std::allocator<std::unique_ptr<CRImageBuffer>>> )createMapsFromMLMultiArray:(id)arg0 size:(struct CGSize )arg1 channels:(NSInteger)arg2 ;
+(void)assignScriptCategory:(id)arg0 probability:(*void)arg1 assignedIndex:(NSInteger)arg2 scriptCount:(struct vector<long, std::allocator<long>> )arg3 ;
+(void)checkUseSequenceScriptLocale:(id)arg0 probability:(*void)arg1 assignedIndex:(NSInteger)arg2 size:(struct CGSize )arg3 ;
+(void)computeSingleTextFeatureScriptCategory:(id)arg0 scriptMap:(*void)arg1 scriptRatioThresholds:(id)arg2 ;
+(void)computeTextFeatureScriptCategory:(id)arg0 scriptMap:(*void)arg1 scriptMapFullTile:(*void)arg2 withScaleIds:(*void)arg3 scriptRatioThresholds:(id)arg4 ;


@end


#endif