// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPOHEBITVALUERANDOMIZER_H
#define _DPOHEBITVALUERANDOMIZER_H

@class NSString;
@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>


@interface _DPOHEBitValueRandomizer : NSObject <_DPStringRandomizer>

 {
    CGFloat _epsilon;
    NSUInteger _domainSize;
    CGFloat _flipProbability;
    mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> _rng;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)oheBitValueRandomizerWithDimensionality:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(NSUInteger)drawNumberOfFlippedBits;
-(id)init;
-(id)initWithDimensionality:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(id)randomize:(id)arg0 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWithMessageIndex:(NSUInteger)arg0 numberOfFlippedBits:(NSUInteger)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif