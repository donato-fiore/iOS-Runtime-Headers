// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RANDOMNUMBERGENERATOR_H
#define RANDOMNUMBERGENERATOR_H


#import <Foundation/Foundation.h>


@interface RandomNumberGenerator : NSObject

@property (nonatomic) NSUInteger index; // ivar: _index
@property NSUInteger seed; // ivar: _seed


+(id)randomNumberGeneratorWithSeed:(NSUInteger)arg0 ;
-(CGFloat)randomNumberBetweenZeroAndOne;
-(CGFloat)randomNumberWithinRangeStart:(CGFloat)arg0 rangeEnd:(CGFloat)arg1 ;


@end


#endif