// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLANIMATEDVALUE_H
#define MDLANIMATEDVALUE_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MDLAnimatedValue : NSObject <NSCopying>

 {
    vector<(anonymous namespace)::TimeSampledVtValue, std::allocator<(anonymous namespace)::TimeSampledVtValue>> _timeSampledData;
}


@property (nonatomic) NSUInteger interpolation; // ivar: _interpolation
@property (readonly, nonatomic) NSArray *keyTimes;
@property (readonly, nonatomic) CGFloat maximumTime;
@property (readonly, nonatomic) CGFloat minimumTime;
@property (readonly, nonatomic) NSUInteger precision;
@property (readonly, nonatomic) NSUInteger timeSampleCount;


-(BOOL)isAnimated;
-(NSUInteger)getTimes:(*CGFloat)arg0 maxCount:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct VtValue )defaultVtValue;
-(void)clear;
-(void)resetWithAnimatedValue:(id)arg0 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 ;
-(void)resetWithUsdAttribute:(*void)arg0 timeScale:(CGFloat)arg1 time:(CGFloat)arg2 ;


@end


#endif