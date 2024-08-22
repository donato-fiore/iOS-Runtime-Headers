// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONRECORDER_H
#define ATXNOTIFICATIONRECORDER_H

@class NSMutableDictionary, NSMutableString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXScreenRepresentation.h"
#import "_ATXAppLaunchCategoricalHistogram.h"
#import "_ATXAppLaunchHistogram.h"
#import "ATXNotificationsLogger.h"

@interface ATXNotificationRecorder : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ATXScreenRepresentation *_onLockScreen;
    ATXScreenRepresentation *_offScreen;
    NSMutableDictionary *_recordsTable;
    NSMutableDictionary *_relatedApps;
    _ATXAppLaunchCategoricalHistogram *_notificationsHistory;
    _ATXAppLaunchHistogram *_appHistory;
    ATXNotificationsLogger *_logger;
    NSMutableString *_logCache;
}




-(id)flushLogCache;
-(id)flushRecords;
-(id)init;
-(void)_addNotificationsRecord:(id)arg0 ;
-(void)_appendRecordToCache:(id)arg0 ;
-(void)clearAllAtTimestamp:(id)arg0 ;
-(void)expungeExpiredRecords;
-(void)expungeExpiredRecordsWithCacheOption:(BOOL)arg0 ;
-(void)getPositionForId:(id)arg0 position:(*NSUInteger)arg1 onlockscreen:(*BOOL)arg2 ;
-(void)insertAppLaunchEvent:(id)arg0 timestamp:(id)arg1 ;
-(void)insertEvent:(NSInteger)arg0 timestamp:(id)arg1 notificationID:(id)arg2 ;
-(void)insertEvent:(NSInteger)arg0 timestamp:(id)arg1 notificationID:(id)arg2 enableLogCache:(BOOL)arg3 ;
-(void)insertTapCoalesceEvent:(id)arg0 bundleId:(id)arg1 timestamp:(id)arg2 ;
-(void)logRecordInAggd:(id)arg0 ;
-(void)reset;
-(void)resetNotificationsHistory;


@end


#endif