// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPINTERASSETANALYZER_H
#define VCPINTERASSETANALYZER_H


#import <Foundation/Foundation.h>


@interface VCPInterAssetAnalyzer : NSObject



+(BOOL)canUseLastFrameOfAsset:(id)arg0 withResources:(id)arg1 ;
+(struct CGSize )thumbnailSizeForAsset:(id)arg0 withResources:(id)arg1 ;
-(id)init;
-(int)_generateLastFrameDistanceDescriptor:(*id)arg0 withDescriptorClass:(Class)arg1 forAsset:(id)arg2 ;
-(int)computeDistance:(*float)arg0 fromArray:(id)arg1 toArray:(id)arg2 ;
-(int)computeDistance:(*float)arg0 withDescriptorClass:(id)arg1 fromAsset:(id)arg2 toAsset:(id)arg3 ;
-(int)generateDistanceDescriptor:(*id)arg0 withDescriptorClass:(Class)arg1 forAsset:(id)arg2 withResources:(id)arg3 lastFrame:(BOOL)arg4 ;
-(struct __CVBuffer *)_getThumbnailForAsset:(id)arg0 withResouces:(id)arg1 andPixelFormat:(int)arg2 ;


@end


#endif