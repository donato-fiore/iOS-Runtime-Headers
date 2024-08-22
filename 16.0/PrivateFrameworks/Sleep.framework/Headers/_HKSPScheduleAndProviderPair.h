// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKSPSCHEDULEANDPROVIDERPAIR_H
#define _HKSPSCHEDULEANDPROVIDERPAIR_H

@protocol HKSPSuggestionProvider;

#import <Foundation/Foundation.h>

#import "HKSPSleepSchedule.h"

@interface _HKSPScheduleAndProviderPair : NSObject

@property (retain, nonatomic) NSObject<HKSPSuggestionProvider> *provider; // ivar: _provider
@property (retain, nonatomic) HKSPSleepSchedule *schedule; // ivar: _schedule




@end


#endif