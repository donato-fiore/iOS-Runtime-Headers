// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPOBHRANDOMIZER_H
#define _DPOBHRANDOMIZER_H

@class NSString;
@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>

#import "_DPRandomBitPositionGenerator.h"
#import "_DPBiasedCoin.h"

@interface _DPOBHRandomizer : NSObject <_DPStringRandomizer>



@property (readonly, nonatomic) _DPRandomBitPositionGenerator *bitPositionGenerator; // ivar: _bitPositionGenerator
@property (readonly, nonatomic) CGFloat cEpsilon; // ivar: _cEpsilon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly, nonatomic) _DPBiasedCoin *epsilonCoin; // ivar: _epsilonCoin
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger m; // ivar: _m
@property (readonly) Class superclass;


+(id)obhRandomizerWithDimensionality:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(BOOL)getBitValueAtIndex:(NSUInteger)arg0 forString:(id)arg1 ;
-(id)init;
-(id)initWithDimensionality:(NSUInteger)arg0 epsilon:(CGFloat)arg1 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;
-(id)randomizedBitForString:(id)arg0 ;


@end


#endif