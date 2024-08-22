// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PETAGGREGATESTATE_H
#define PETAGGREGATESTATE_H


#import <Foundation/Foundation.h>

#import "PETAggregateStateStorage.h"

@interface PETAggregateState : NSObject {
    PETAggregateStateStorage *_storage;
    ? _rng;
}




+(unsigned char)hashForString:(id)arg0 ;
-(BOOL)checkIntegrity;
-(id)description;
-(id)init;
-(id)initInMemory;
-(id)initWithPath:(id)arg0 ;
-(id)initWithStorage:(id)arg0 ;
// -(void)enumerateAndResetCounters:(id)arg0 distributions:(unk)arg1  ;
// -(void)enumerateCounters:(id)arg0 distributions:(unk)arg1  ;
-(void)incrementCounterBy:(CGFloat)arg0 forKey:(*void)arg1 keyLength:(unsigned short)arg2 ;
-(void)incrementCounterBy:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)reset;
-(void)updateCounterTo:(CGFloat)arg0 forKey:(*void)arg1 keyLength:(unsigned short)arg2 ;
-(void)updateCounterTo:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)updateDistributionWithValue:(CGFloat)arg0 forKey:(*void)arg1 keyLength:(unsigned short)arg2 maxSampleSize:(unsigned short)arg3 ;
-(void)updateDistributionWithValue:(CGFloat)arg0 forKey:(id)arg1 maxSampleSize:(unsigned short)arg2 ;


@end


#endif