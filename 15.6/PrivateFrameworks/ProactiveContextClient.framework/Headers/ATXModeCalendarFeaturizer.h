// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODECALENDARFEATURIZER_H
#define ATXMODECALENDARFEATURIZER_H

@class NSHashTable, _PASSimpleCoalescingTimer, NSString;
@protocol ATXModeFeaturizer, ATXModeFeaturizerDelegate;

#import <Foundation/Foundation.h>


@interface ATXModeCalendarFeaturizer : NSObject <ATXModeFeaturizer>

 {
    NSHashTable *_timers;
    _PASSimpleCoalescingTimer *_featureUpdateTimer;
}


@property (nonatomic) BOOL calendarRefreshCoalesceTimerIsEnabled; // ivar: _calendarRefreshCoalesceTimerIsEnabled
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXModeFeaturizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isLikelyAWorkCalendar:(id)arg0 ;
-(BOOL)_hasAnyEventsIn:(id)arg0 now:(id)arg1 ;
-(BOOL)_shouldConsiderEventBasedOnParticipantStatus:(NSInteger)arg0 ;
-(id)_fetchEventsForDay;
-(id)init;
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