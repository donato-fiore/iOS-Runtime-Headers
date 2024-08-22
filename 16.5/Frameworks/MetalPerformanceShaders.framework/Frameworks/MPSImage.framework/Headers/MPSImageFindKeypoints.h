// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSIMAGEFINDKEYPOINTS_H
#define MPSIMAGEFINDKEYPOINTS_H

@class MPSKernel;


#import "MPSImageHistogram.h"

@interface MPSImageFindKeypoints : MPSKernel {
    ? _keypointRangeInfo;
    MPSImageHistogram *histogramKernel;
}


@property (readonly, nonatomic) ? keypointRangeInfo;


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 info:(struct ? *)arg1 ;
-(void)encodeInternalToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceTexture:(id)arg2 regions:(struct ? *)arg3 numberOfRegions:(NSUInteger)arg4 keypointCountBuffer:(id)arg5 keypointCountBufferOffset:(NSUInteger)arg6 keypointDataBuffer:(id)arg7 keypointDataBufferOffset:(NSUInteger)arg8 rectangles:(struct ? *)arg9 histogramBuffer:(id)arg10 keypointInfoBuffer:(id)arg11 rowCountersBuffer:(id)arg12 heightCountersBuffer:(id)arg13 maxRectangleHeight:(NSUInteger)arg14 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 regions:(struct ? *)arg2 numberOfRegions:(NSUInteger)arg3 keypointCountBuffer:(id)arg4 keypointCountBufferOffset:(NSUInteger)arg5 keypointDataBuffer:(id)arg6 keypointDataBufferOffset:(NSUInteger)arg7 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceTexture:(id)arg2 regions:(struct ? *)arg3 numberOfRegions:(NSUInteger)arg4 keypointCountBuffer:(id)arg5 keypointCountBufferOffset:(NSUInteger)arg6 keypointDataBuffer:(id)arg7 keypointDataBufferOffset:(NSUInteger)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif