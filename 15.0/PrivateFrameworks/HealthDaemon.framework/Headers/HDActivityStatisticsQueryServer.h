// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDACTIVITYSTATISTICSQUERYSERVER_H
#define HDACTIVITYSTATISTICSQUERYSERVER_H

@class HKStatisticsCollection, _HKDelayedOperation, NSDate, NSDateComponents, NSString;
@protocol HDDataObserver;


#import "HDQueryServer.h"
#import "HDActivityCacheDataSource.h"
#import "HDSourceManager.h"

@interface HDActivityStatisticsQueryServer : HDQueryServer <HDDataObserver>

 {
    HKStatisticsCollection *_statisticsCollection;
    BOOL _deliversUpdates;
    _HKDelayedOperation *_updateOperation;
    _HKDelayedOperation *_resetOperation;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_moveIntervalComponents;
    NSDateComponents *_exerciseIntervalComponents;
    HDActivityCacheDataSource *_dataSource;
    HDSourceManager *_sourceManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)queryClass;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_didDeactivate;
-(void)_queue_start;
-(void)_queue_stop;


@end


#endif