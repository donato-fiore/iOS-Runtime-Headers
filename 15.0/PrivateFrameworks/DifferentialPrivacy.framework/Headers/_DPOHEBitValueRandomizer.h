// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPOHEBITVALUERANDOMIZER_H
#define _DPOHEBITVALUERANDOMIZER_H

@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>


@interface _DPOHEBitValueRandomizer : NSObject <_DPStringRandomizer>

 {
    CGFloat _epsilon;
    NSUInteger _domainSize;
    CGFloat _flipProbability;
    mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> _rng;
}




+(id)oheBitValueRandomizerWithDimensionality:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(NSUInteger)drawNumberOfFlippedBits;
-(id)description;
-(id)init;
-(id)initWithDimensionality:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(id)randomize:(id)arg0 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWithMessageIndex:(NSUInteger)arg0 numberOfFlippedBits:(NSUInteger)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif