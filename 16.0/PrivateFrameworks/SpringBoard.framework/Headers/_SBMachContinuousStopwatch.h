// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBMACHCONTINUOUSSTOPWATCH_H
#define _SBMACHCONTINUOUSSTOPWATCH_H


#import <Foundation/Foundation.h>


@interface _SBMachContinuousStopwatch : NSObject {
    BOOL _active;
    NSUInteger _startTime;
    NSUInteger _priorAccumulatedTime;
}




-(id)init;


@end


#endif