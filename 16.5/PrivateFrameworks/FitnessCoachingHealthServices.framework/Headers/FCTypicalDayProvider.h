// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTYPICALDAYPROVIDER_H
#define FCTYPICALDAYPROVIDER_H

@class FCCDateProvider, HDProfile, NSDate, NSString, FITypicalDayActivityModel;
@protocol FITypicalDayActivityModelDelegate, HDCurrentActivitySummaryHelperObserver, HDHealthDaemonReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FCTypicalDayProvider : NSObject <FITypicalDayActivityModelDelegate, HDCurrentActivitySummaryHelperObserver, HDHealthDaemonReadyObserver>

 {
    FCCDateProvider *_dateProvider;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    int _significantTimeChangeToken;
    NSDate *_lastRebuildDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) FITypicalDayActivityModel *typicalDayModel; // ivar: _typicalDayModel
@property (retain, nonatomic) NSDate *userEndOfDay; // ivar: _userEndOfDay
@property (retain, nonatomic) NSDate *userStartOfDay; // ivar: _userStartOfDay


-(BOOL)enumerateActivitySummariesFromDateComponents:(id)arg0 toDateComponents:(id)arg1 error:(*id)arg2 handler:(id)arg3 ;
-(id)_typicalDayIntervalFromToday;
-(id)clientProvidedUserEndOfDay;
-(id)clientProvidedUserStartOfDay;
-(id)currentCalendar;
-(id)currentDate;
-(id)firstOnWristDateToday;
-(id)initWithDateProvider:(id)arg0 profile:(id)arg1 serviceQueue:(id)arg2 ;
-(void)_onqueue_handleUpdatedActivitySummary:(id)arg0 ;
-(void)_onqueue_rebuildTypicalDayModelForced:(BOOL)arg0 ;
-(void)_onqueue_registerForSignificantTimeChanges;
-(void)_significantTimeChangeOccurred:(id)arg0 ;
-(void)currentActivitySummaryHelper:(id)arg0 didUpdateTodayActivitySummary:(id)arg1 changedFields:(NSUInteger)arg2 ;
-(void)currentActivitySummaryHelper:(id)arg0 didUpdateYesterdayActivitySummary:(id)arg1 changedFields:(NSUInteger)arg2 ;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;


@end


#endif