// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTHISTOGRAM_H
#define PPTHISTOGRAM_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPTHistogram : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    unique_ptr<ppt::PPTHistogram_Internal<unsigned long, double>, std::default_delete<ppt::PPTHistogram_Internal<unsigned long, double>>> _histogramPtr;
}


@property (readonly) CGFloat area;
@property (readonly) NSUInteger binCount;
@property (readonly) CGFloat binWidth;
@property (readonly) CGFloat maxSample;
@property (readonly) CGFloat mean;
@property (readonly) CGFloat median;
@property (readonly) CGFloat minSample;
@property (readonly) CGFloat mode;
@property (readonly) ? range;
@property (readonly) NSUInteger sampleCount;
@property (readonly) CGFloat variance;


+(BOOL)supportsSecureCoding;
-(*NSUInteger)cumulativeFrequencyBins;
-(*NSUInteger)frequencyBins;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHistogram:(id)arg0 ;
-(CGFloat)valueForPercentile:(CGFloat)arg0 ;
-(NSInteger)binIndexFor:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBinCount:(NSUInteger)arg0 range:(struct ? )arg1 ;
-(id)initWithBinCount:(NSUInteger)arg0 range:(struct ? )arg1 samples:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistogram:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif