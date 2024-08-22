// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SATHREADSTATEKPERF_H
#define SATHREADSTATEKPERF_H



#import "SAThreadState.h"

@interface SAThreadStateKPerf : SAThreadState

@property BOOL filledCyclesInstructions;
@property BOOL filledDispatchQueue;
@property BOOL filledName;
@property BOOL filledScheduling;
@property BOOL filledSnapshot;
@property BOOL filledUserStack;




@end


#endif