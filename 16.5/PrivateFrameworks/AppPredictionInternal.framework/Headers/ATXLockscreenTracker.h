// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLOCKSCREENTRACKER_H
#define ATXLOCKSCREENTRACKER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXNotificationsActionPredictionRecord.h"

@interface ATXLockscreenTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_recordsTable;
    ATXNotificationsActionPredictionRecord *_current;
}




-(BOOL)addNotificationId:(id)arg0 withBundle:(id)arg1 timestamp:(id)arg2 ;
-(BOOL)addNotificationRecord:(id)arg0 timestamp:(id)arg1 ;
-(BOOL)isEmpty;
-(id)getBundleIds;
-(id)init;
-(void)insertEvent:(NSInteger)arg0 timestamp:(id)arg1 notificationID:(id)arg2 ;


@end


#endif