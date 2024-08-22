// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPSTRINGRANDOMIZER_H
#define _DPSTRINGRANDOMIZER_H

@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>


@interface _DPStringRandomizer : NSObject

@property (readonly, nonatomic) NSUInteger algorithm; // ivar: _algorithm
@property (readonly, nonatomic) NSObject<_DPStringRandomizer> *randomizer; // ivar: _randomizer


+(id)numbersRandomizerWithEpsilon:(CGFloat)arg0 privatizationAlgorithm:(NSUInteger)arg1 dataAlgorithm:(NSUInteger)arg2 range:(NSUInteger)arg3 ;
+(id)stringRandomizerWithEpsilon:(CGFloat)arg0 privatizationAlgorithm:(NSUInteger)arg1 dataAlgorithm:(NSUInteger)arg2 algorithmParameters:(id)arg3 ;
+(id)stringRandomizerWithEpsilon:(CGFloat)arg0 privatizationAlgorithm:(NSUInteger)arg1 dataAlgorithm:(NSUInteger)arg2 algorithmParameters:(id)arg3 huffmanTableClass:(id)arg4 ;
-(id)description;
-(id)init;
-(id)initWithEpsilon:(CGFloat)arg0 privatizationAlgorithm:(NSUInteger)arg1 dataAlgorithm:(NSUInteger)arg2 algorithmParameters:(id)arg3 huffmanTableClass:(id)arg4 ;
-(id)initWithEpsilon:(CGFloat)arg0 privatizationAlgorithm:(NSUInteger)arg1 dataAlgorithm:(NSUInteger)arg2 range:(NSUInteger)arg3 ;


@end


#endif