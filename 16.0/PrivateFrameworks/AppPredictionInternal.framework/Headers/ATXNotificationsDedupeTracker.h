// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSDEDUPETRACKER_H
#define ATXNOTIFICATIONSDEDUPETRACKER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXNotificationsDedupeTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_recordsTable;
}




+(id)sharedInstance;
-(BOOL)addNotificationId:(id)arg0 ;
-(id)init;
-(void)insertEvent:(NSInteger)arg0 notificationID:(id)arg1 ;


@end


#endif