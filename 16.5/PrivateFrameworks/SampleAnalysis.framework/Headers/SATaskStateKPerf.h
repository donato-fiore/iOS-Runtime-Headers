// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATASKSTATEKPERF_H
#define SATASKSTATEKPERF_H



#import "SATaskState.h"

@interface SATaskStateKPerf : SATaskState {
    BOOL _filledSnap;
    BOOL _filledMem;
    BOOL _filledLatencyQoS;
}






@end


#endif