// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSIMAGENORMALIZEDHISTOGRAM_H
#define MPSIMAGENORMALIZEDHISTOGRAM_H

@class MPSKernel;


#import "MPSImageStatisticsMinAndMax.h"

@interface MPSImageNormalizedHistogram : MPSKernel {
    NSUInteger histogramEntries;
    BOOL histogramAlpha;
    ? minPixelValue;
    ? maxPixelValue;
    BOOL useMinMaxHistogramKernel;
    MPSImageStatisticsMinAndMax *_minmaxFilter;
}


@property (nonatomic) ? clipRectSource; // ivar: _clipRectSource
@property (readonly, nonatomic) ? histogramInfo;
@property (nonatomic) BOOL zeroHistogram; // ivar: _zeroHistogram


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)histogramSizeForSourceFormat:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 histogramInfo:(struct ? *)arg1 ;
-(void)dealloc;
-(void)encodeInternalToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceTexture:(id)arg2 minmaxTexture:(id)arg3 histogram:(id)arg4 histogramOffset:(NSUInteger)arg5 inputExtent:(struct ? )arg6 srcStyle:(int)arg7 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 minmaxTexture:(id)arg2 histogram:(id)arg3 histogramOffset:(NSUInteger)arg4 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceTexture:(id)arg2 minmaxTexture:(id)arg3 histogram:(id)arg4 histogramOffset:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif