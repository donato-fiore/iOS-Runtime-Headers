// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITMAPITEMUPDATER_H
#define MKTRANSITMAPITEMUPDATER_H

@class NSTimer, NSDate;
@protocol MKTransitMapItemUpdaterDelegate;


#import "MKTransitItemReferenceDateUpdater.h"
#import "MKMapItem.h"

@interface MKTransitMapItemUpdater : MKTransitItemReferenceDateUpdater

@property (retain, nonatomic) NSTimer *dataRefreshTimer; // ivar: _dataRefreshTimer
@property (weak, nonatomic) NSObject<MKTransitMapItemUpdaterDelegate> *delegate;
@property (nonatomic) BOOL lastInfoRefreshFailed; // ivar: _lastInfoRefreshFailed
@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (nonatomic, getter=isRefreshing) BOOL refreshing; // ivar: _refreshing
@property (retain, nonatomic) NSDate *suggestedDataRefreshDate; // ivar: _suggestedDataRefreshDate


-(BOOL)_isInfoExpiredRelativeToDate:(id)arg0 ;
-(BOOL)isStuckWithExpiredInfoRelativeToDate:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 delegate:(id)arg1 ;
-(void)_processUpdatedMapItems:(id)arg0 identifier:(id)arg1 ttl:(CGFloat)arg2 error:(id)arg3 ;
-(void)_refreshTransitInfoIfNeeded;
-(void)_resumeDataRefreshTimer;
-(void)_scheduleDataUpdateForTransitItemAtDate:(id)arg0 ;
-(void)_suspendDataRefreshTimer;
-(void)_transitInfoUpdated;
-(void)setActive:(BOOL)arg0 ;


@end


#endif