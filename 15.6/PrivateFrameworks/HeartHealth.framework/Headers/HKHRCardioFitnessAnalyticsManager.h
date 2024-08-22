// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHRCARDIOFITNESSANALYTICSMANAGER_H
#define HKHRCARDIOFITNESSANALYTICSMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKHRCardioFitnessAnalyticsSignalSource.h"

@interface HKHRCardioFitnessAnalyticsManager : NSObject {
    HKHRCardioFitnessAnalyticsSignalSource *_signalSource;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initWithSignalSource:(id)arg0 ;
-(id)submitClassificationChartOverlaySelectedEventCurrentOverlay:(id)arg0 previousOverlay:(id)arg1 ;
-(id)submitDailyEventWithSource:(id)arg0 ;
-(id)submitOnboardingEventForStep:(id)arg0 acceptDefaults:(BOOL)arg1 countryCode:(id)arg2 ;
-(void)_setKey:(id)arg0 value:(id)arg1 onPayloadIfPresent:(id)arg2 ;


@end


#endif