// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTHISTOGRAM_H
#define PPTHISTOGRAM_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPTHistogram : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    unique_ptr<ppt::PPTHistogram_Internal<unsigned long, double>, std::default_delete<ppt::PPTHistogram_Internal<unsigned long, double>>> _histogramPtr;
}


@property (readonly) NSUInteger binCount;
@property (readonly) NSUInteger dimensionCount;
@property (readonly) NSUInteger sampleCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHistogram:(id)arg0 ;
-(CGFloat)dimensionArea:(int)arg0 ;
-(CGFloat)dimensionMaxSample:(int)arg0 ;
-(CGFloat)dimensionMean:(int)arg0 ;
-(CGFloat)dimensionMedian:(int)arg0 ;
-(CGFloat)dimensionMinSample:(int)arg0 ;
-(CGFloat)dimensionMode:(int)arg0 ;
-(CGFloat)dimensionVariance:(int)arg0 ;
-(CGFloat)valueForPercentile:(CGFloat)arg0 ;
-(NSUInteger)hash;
-(id)JSONRepresentation;
-(id)binData;
-(id)binDataAt:(id)arg0 ;
-(id)binIndicesFor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cumulativeFrequencyBins;
-(id)description;
-(id)dimensionCategories:(int)arg0 ;
-(id)dimensionLabel:(int)arg0 ;
-(id)frequencyBins;
-(id)initWithBinCount:(NSUInteger)arg0 range:(struct ? )arg1 ;
-(id)initWithBinCount:(NSUInteger)arg0 range:(struct ? )arg1 samples:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensions:(id)arg0 ;
-(id)initWithHistogram:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)processBinData:(struct PPTHistogramBin_Internal<unsigned long, double> )arg0 ;
-(struct ? )dimensionRange:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)recordOneDimensionSamples:(id)arg0 ;
-(void)recordSample:(id)arg0 ;
-(void)recordSample:(id)arg0 withAccumulatorValue:(id)arg1 ;


@end


#endif