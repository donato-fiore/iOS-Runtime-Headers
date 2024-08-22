// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSIMAGEHISTOGRAM_H
#define MPSIMAGEHISTOGRAM_H

@class MPSKernel;



@interface MPSImageHistogram : MPSKernel {
    NSUInteger histogramEntries;
    BOOL histogramAlpha;
    ? minPixelValue;
    ? maxPixelValue;
    BOOL useMinMaxHistogramKernel;
    ? _minPixelThresholdValue;
    NSUInteger _histogramAtomicType;
}


@property (nonatomic) ? clipRectSource; // ivar: _clipRectSource
@property (readonly, nonatomic) ? histogramInfo;
@property ? minPixelThresholdValue;
@property (nonatomic) BOOL zeroHistogram; // ivar: _zeroHistogram


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)histogramSizeForSourceFormat:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 histogramInfo:(struct ? *)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif