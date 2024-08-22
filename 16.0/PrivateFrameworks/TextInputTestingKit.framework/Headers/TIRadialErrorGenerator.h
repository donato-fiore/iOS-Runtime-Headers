// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIRADIALERRORGENERATOR_H
#define TIRADIALERRORGENERATOR_H



#import "TIErrorGenerator.h"

@interface TIRadialErrorGenerator : TIErrorGenerator {
    NSUInteger _letterErrorProbability;
    NSUInteger _defaultDistanceMin;
    NSUInteger _defaultDistanceMax;
    NSUInteger _letterDistanceMin;
    NSUInteger _letterDistanceMax;
}




-(id)initWithAttributes:(id)arg0 ;
-(struct CGPoint )randomBiasForKeyString:(id)arg0 rect:(struct CGRect )arg1 ;


@end


#endif