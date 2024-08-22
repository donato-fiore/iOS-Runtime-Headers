// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIRORANDOMNUMBERGENERATOR_H
#define MIRORANDOMNUMBERGENERATOR_H


#import <Foundation/Foundation.h>


@interface MiroRandomNumberGenerator : NSObject

@property (nonatomic) NSUInteger index; // ivar: _index
@property NSUInteger seed; // ivar: _seed


+(CGFloat)mapValue:(CGFloat)arg0 fromRangeStart:(CGFloat)arg1 fromRangeEnd:(CGFloat)arg2 toRangeStart:(CGFloat)arg3 toRangeEnd:(CGFloat)arg4 clamp:(BOOL)arg5 ;
+(id)randomNumberGeneratorWithSeed:(NSUInteger)arg0 ;
-(CGFloat)randomNumberBetweenZeroAndOne;
-(CGFloat)randomNumberWithinRangeStart:(CGFloat)arg0 rangeEnd:(CGFloat)arg1 ;


@end


#endif