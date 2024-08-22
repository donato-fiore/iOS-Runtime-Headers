// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLPLANSIMULATOR_H
#define PMLPLANSIMULATOR_H

@class NSArray, _PASRng;

#import <Foundation/Foundation.h>

#import "PMLSessionDescriptor.h"

@interface PMLPlanSimulator : NSObject {
    NSArray *_stores;
    PMLSessionDescriptor *_sessionDescriptor;
    _PASRng *_rng;
}




+(id)simulatorWithDbPaths:(id)arg0 sessionDescriptor:(id)arg1 sessionsInBatch:(NSUInteger)arg2 maxSessionsLimit:(NSUInteger)arg3 seed:(NSUInteger)arg4 ;
-(id)_randomStore;
-(id)_randomStores:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithStores:(id)arg0 sessionDescriptor:(id)arg1 seed:(NSUInteger)arg2 ;
-(id)runParallelPlansWithPlanId:(id)arg0 tracker:(id)arg1 noiseScaleFactors:(struct ? )arg2 noiseMinimumMagnitude:(float)arg3 weights:(id)arg4 serverIteration:(NSUInteger)arg5 useIntercept:(BOOL)arg6 noiseMechanism:(NSInteger)arg7 usingRandomlySelected:(NSUInteger)arg8 ;


@end


#endif