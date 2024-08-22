// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPPRIOALGORITHM_H
#define _DPPRIOALGORITHM_H


#import <Foundation/Foundation.h>

#import "_DPBiasedCoin.h"

@interface _DPPrioAlgorithm : NSObject

@property (readonly, nonatomic) _DPBiasedCoin *coin; // ivar: _coin
@property (readonly, nonatomic) NSUInteger dimension; // ivar: _dimension
@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly, nonatomic) *? prioMemory; // ivar: _prioMemory


+(id)prioWithEpsilon:(CGFloat)arg0 dimensionality:(NSUInteger)arg1 ;
-(id)initWithEpsilon:(CGFloat)arg0 dimensionality:(NSUInteger)arg1 ;
-(id)privatizeDataWithBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif