// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTATS_H
#define BWSTATS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BWStats : NSObject {
    CGFloat _sumX;
    CGFloat _sumXX;
}


@property (readonly, nonatomic) CGFloat average;
@property (readonly, nonatomic) CGFloat max; // ivar: _max
@property (readonly, nonatomic) CGFloat min; // ivar: _min
@property (nonatomic) CGFloat multiplier; // ivar: _multiplier
@property (readonly, nonatomic) NSInteger numberOfSamples; // ivar: _numberOfSamples
@property (readonly, nonatomic) CGFloat standardDeviation;
@property (copy, nonatomic) NSString *unitDesignator; // ivar: _unitDesignator


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithStats:(id)arg0 ;
-(void)addDataPoint:(CGFloat)arg0 ;
-(void)dealloc;
-(void)removeDataPoint:(CGFloat)arg0 ;


@end


#endif