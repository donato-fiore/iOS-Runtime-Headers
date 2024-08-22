// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUDATASET_H
#define NUDATASET_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface NUDataSet : NSObject <NSCopying, NSMutableCopying>

 {
    ? _stats;
    ? _flags;
    DataSet _data;
}


@property (readonly, nonatomic) CGFloat coefficientOfVariation;
@property (readonly, nonatomic) CGFloat confidenceInterval95;
@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) CGFloat estimatedCoefficientOfVariation;
@property (readonly, nonatomic) CGFloat estimatedConfidenceInterval95;
@property (readonly, nonatomic) CGFloat estimatedStandardDeviation;
@property (readonly, nonatomic) CGFloat estimatedStandardError;
@property (readonly, nonatomic) CGFloat geometricMean;
@property (readonly, nonatomic) CGFloat max;
@property (readonly, nonatomic) CGFloat mean;
@property (readonly, nonatomic) CGFloat median;
@property (readonly, nonatomic) CGFloat medianAbsoluteDeviation;
@property (readonly, nonatomic) CGFloat min;
@property (readonly, nonatomic) CGFloat standardDeviation;
@property (readonly, nonatomic) CGFloat standardError;
@property (readonly, nonatomic) CGFloat sum;
@property (readonly, nonatomic) CGFloat variance;


-(*void)_const_data;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDataSet:(id)arg0 ;
-(CGFloat)percentile:(CGFloat)arg0 ;
-(CGFloat)valueAtIndex:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)filter:(id)arg0 ;
-(id)init;
-(id)initWithDataSet:(id)arg0 ;
-(id)initWithValue:(CGFloat)arg0 ;
-(id)initWithValues:(*CGFloat)arg0 count:(NSInteger)arg1 ;
-(id)map:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_resetStats;
-(void)enumerateValues:(id)arg0 ;


@end


#endif