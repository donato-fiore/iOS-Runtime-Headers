// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPBITVALUERANDOMIZER_H
#define _DPBITVALUERANDOMIZER_H

@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>

#import "_DPBiasedCoin.h"

@interface _DPBitValueRandomizer : NSObject <_DPStringRandomizer>



@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly, nonatomic) _DPBiasedCoin *epsilonCoin; // ivar: _epsilonCoin
@property (readonly, nonatomic) NSUInteger p; // ivar: _p


+(id)bitValueRandomizerWithDimensionality:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(id)init;
-(id)initWithDimensionality:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(id)randomize:(id)arg0 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;


@end


#endif