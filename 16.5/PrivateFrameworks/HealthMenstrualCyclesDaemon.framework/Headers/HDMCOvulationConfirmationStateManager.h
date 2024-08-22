// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMCOVULATIONCONFIRMATIONSTATEMANAGER_H
#define HDMCOVULATIONCONFIRMATIONSTATEMANAGER_H

@class HDPrimaryProfile, HDKeyValueDomain, HKCalendarCache;

#import <Foundation/Foundation.h>


@interface HDMCOvulationConfirmationStateManager : NSObject {
    HDPrimaryProfile *_profile;
    HDKeyValueDomain *_keyValueDomain;
    HKCalendarCache *_calendarCache;
}




-(BOOL)clearStateIfNecessaryFromSettingsManager:(id)arg0 error:(*id)arg1 ;
-(BOOL)transitionToFiredNotificationStateWithRequest:(id)arg0 settingsManager:(id)arg1 error:(*id)arg2 ;
-(id)_daysWithWristTemperatureSamplesInDayIndexRange:(struct ? )arg0 calendarCache:(id)arg1 error:(*id)arg2 ;
-(id)eventsToScheduleForAnalysis:(id)arg0 settingsManager:(id)arg1 scheduler:(id)arg2 error:(*id)arg3 ;
-(id)initWithProfile:(id)arg0 ;
-(id)scheduledNotificationDaysShiftedFromCalendarMethodWithEvent:(id)arg0 error:(*id)arg1 ;
-(id)scheduledNotificationFertileWindowEndDayIndexWithEvent:(id)arg0 error:(*id)arg1 ;


@end


#endif