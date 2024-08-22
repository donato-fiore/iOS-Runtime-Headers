// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMICROSTACKSHOTSUMMARY_H
#define SAMICROSTACKSHOTSUMMARY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SAMicrostackshotSummary : NSObject {
    NSMutableDictionary *_microstackshotStateCounts;
    NSUInteger _userActiveCount;
    NSUInteger _userIdleCount;
    NSUInteger _onBatteryCount;
    NSUInteger _onACCount;
}




-(id)init;


@end


#endif