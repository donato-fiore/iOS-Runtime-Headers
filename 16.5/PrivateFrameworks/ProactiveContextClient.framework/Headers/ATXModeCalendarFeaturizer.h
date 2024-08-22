// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODECALENDARFEATURIZER_H
#define ATXMODECALENDARFEATURIZER_H

@class NSHashTable, _PASSimpleCoalescingTimer, EKEventStore, NSString;
@protocol ATXModeFeaturizer, ATXModeFeaturizerDelegate;

#import <Foundation/Foundation.h>

#import "ATXMicrolocationLocalization.h"

@interface ATXModeCalendarFeaturizer : NSObject <ATXModeFeaturizer>

 {
    NSHashTable *_timers;
    _PASSimpleCoalescingTimer *_featureUpdateTimer;
    ATXMicrolocationLocalization *_microlocationLocalization;
    EKEventStore *_eventStore;
}


@property (nonatomic) BOOL calendarRefreshCoalesceTimerIsEnabled; // ivar: _calendarRefreshCoalesceTimerIsEnabled
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXModeFeaturizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isLikelyAWorkCalendar:(id)arg0 ;
-(BOOL)_isDate:(id)arg0 betweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(BOOL)_shouldConsiderEventBasedOnParticipantStatus:(NSInteger)arg0 ;
-(BOOL)_shouldInitiateMicrolocationLocalizationWithMostRecentWorkEvent:(id)arg0 upcomingWorkEvent:(id)arg1 now:(id)arg2 ;
-(BOOL)_shouldStayInWorkModeInBetweenMostRecentWorkEvent:(id)arg0 andUpcomingWorkEvent:(id)arg1 ;
-(id)_fetchEligibleEventsForDay;
-(id)initWithLocationManager:(id)arg0 ;
-(id)provideFeatures;
-(void)_addTimerForDate:(id)arg0 ;
-(void)_eventsDidChange:(id)arg0 ;
-(void)_setFeaturesForEventsCurrentlyIn:(id)arg0 now:(id)arg1 featureSet:(id)arg2 ;
-(void)_updateFeatures;
-(void)beginListening;
-(void)dealloc;
-(void)stopListening;


@end


#endif