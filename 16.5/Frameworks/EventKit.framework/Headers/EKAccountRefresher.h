// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKACCOUNTREFRESHER_H
#define EKACCOUNTREFRESHER_H

@class NSDate, NSArray;
@protocol EKAccountRefresherDelegate;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"

@interface EKAccountRefresher : NSObject {
    EKEventStore *_eventStore;
    BOOL _currentlySyncing;
    NSDate *_refreshStartDate;
    NSArray *_refreshingSources;
    NSArray *_refreshingCalendars;
}


@property (readonly, nonatomic) BOOL allAccountsOffline;
@property (weak, nonatomic) NSObject<EKAccountRefresherDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL refreshing; // ivar: _refreshing


-(BOOL)_allCalendarsRefreshed;
-(BOOL)_allSourcesRefreshed;
-(BOOL)_areAnyCalendarsCurrentlySyncing;
-(BOOL)_areAnySourcesCurrentlySyncing;
-(BOOL)calendarFinishedRefreshing:(id)arg0 ;
-(BOOL)sourceFinishedRefreshing:(id)arg0 ;
-(id)initWithEventStore:(id)arg0 ;
-(void)_beginMaximumTimeElapsedTimeout;
-(void)_beginSyncStartTimeout;
-(void)_cancelMaximumTimeElapsedTimeout;
-(void)_cancelSyncStartTimeout;
-(void)_eventStoreChanged:(id)arg0 ;
-(void)_refreshControlMaximumVisibleTimeElapsed;
-(void)_syncCompleted;
-(void)_syncDidEnd;
-(void)_syncDidStart;
-(void)_syncStartTimeoutExpired;
-(void)refresh;


@end


#endif