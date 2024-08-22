// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATHREADSTATEKPERF_H
#define SATHREADSTATEKPERF_H



#import "SAThreadState.h"

@interface SAThreadStateKPerf : SAThreadState

@property BOOL filledCyclesInstructions;
@property BOOL filledDispatchQueue;
@property BOOL filledName;
@property BOOL filledScheduling;
@property BOOL filledSnapshot;
@property BOOL filledSwiftTask;
@property BOOL filledUserStack;




@end


#endif