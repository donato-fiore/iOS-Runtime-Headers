// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSRECORDERPERMANENTSTORE_H
#define ATXNOTIFICATIONSRECORDERPERMANENTSTORE_H

@class NSDate;
@protocol OS_dispatch_source;


#import "ATXAbstractVersionedDatabase.h"
#import "ATXNotificationRecorder.h"
#import "ATXLockscreenTracker.h"
#import "ATXNotificationsDedupeTracker.h"

@interface ATXNotificationsRecorderPermanentStore : ATXAbstractVersionedDatabase {
    NSObject<OS_dispatch_source> *_timer;
    ATXNotificationRecorder *_internalRecorder;
    ATXLockscreenTracker *_lockscreenTracker;
    ATXNotificationsDedupeTracker *_dedupeTracker;
}


@property (retain) NSDate *lastUpdate; // ivar: _lastUpdate


-(BOOL)migrate;
-(NSInteger)latestVersion;
-(id)createCustomSchema;
-(id)getLockscreenBundleIds;
-(id)init;
-(void)addNotificationRecordInRecentStore:(id)arg0 timestamp:(id)arg1 ;
-(void)addNotificationsRecordWithMetadata:(id)arg0 timestamp:(id)arg1 notificationID:(id)arg2 ;
-(void)addNotificationsRecordWithSerializedMetadata:(id)arg0 timestamp:(id)arg1 notificationID:(id)arg2 ;
-(void)insertAppLaunchEvent:(id)arg0 timestamp:(id)arg1 ;
-(void)insertEvent:(NSInteger)arg0 timestamp:(id)arg1 notificationID:(id)arg2 ;
-(void)insertTapCoalesceEvent:(id)arg0 bundleId:(id)arg1 timestamp:(id)arg2 ;
-(void)replay;
-(void)replayWithCallback:(id)arg0 ;
-(void)resetNotificationsHistory;


@end


#endif