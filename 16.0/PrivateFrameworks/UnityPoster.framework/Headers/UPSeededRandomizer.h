// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPSEEDEDRANDOMIZER_H
#define UPSEEDEDRANDOMIZER_H


#import <Foundation/Foundation.h>


@interface UPSeededRandomizer : NSObject {
    NSUInteger _nextValue;
    NSUInteger _seedValue;
}




+(id)randomizerWithSeedValue:(NSUInteger)arg0 ;
-(BOOL)boolValue;
-(BOOL)boolValueWithChance:(CGFloat)arg0 ;
-(CGFloat)floatValueBetweenFirstValue:(CGFloat)arg0 secondValue:(CGFloat)arg1 ;
-(CGFloat)fractionValue;
-(NSUInteger)unsignedLongValue;
-(struct CGPoint )pointBetweenFirstPoint:(struct CGPoint )arg0 secondPoint:(struct CGPoint )arg1 ;
-(void)reset;


@end


#endif