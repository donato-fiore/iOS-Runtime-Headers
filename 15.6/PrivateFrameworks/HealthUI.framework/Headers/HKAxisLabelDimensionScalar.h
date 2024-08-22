// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKAXISLABELDIMENSIONSCALAR_H
#define HKAXISLABELDIMENSIONSCALAR_H

@class NSNumberFormatter, NSString;
@protocol HKAxisLabelDimension;

#import <Foundation/Foundation.h>


@interface HKAxisLabelDimensionScalar : NSObject <HKAxisLabelDimension>



@property (retain, nonatomic) NSNumberFormatter *formatter; // ivar: _formatter
@property (retain, nonatomic) NSString *negativeZeroString; // ivar: _negativeZeroString


+(NSInteger)_fractionDigitsForStep:(CGFloat)arg0 ;
-(CGFloat)niceStepSizeLargerThan:(CGFloat)arg0 ;
-(CGFloat)ticksPerStepSize:(CGFloat)arg0 ;
-(id)init;
-(id)stringForLocation:(id)arg0 ;
-(void)setStepSizeForLabels:(CGFloat)arg0 ;


@end


#endif