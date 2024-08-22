// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNPERSISTENTNOTIFICATIONSTORAGE_H
#define CALNPERSISTENTNOTIFICATIONSTORAGE_H

@class NSString;
@protocol CALNNotificationStorage, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CALNInMemoryNotificationStorage.h"

@interface CALNPersistentNotificationStorage : NSObject <CALNNotificationStorage>

 {
    BOOL _protected;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CALNInMemoryNotificationStorage *inMemoryStorage; // ivar: _inMemoryStorage
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)notificationRecordsFromPersistentNotificationStorageWithPath:(id)arg0 error:(*id)arg1 ;
+(id)persistentNotificationStorageWithPath:(id)arg0 isProtectedStorage:(BOOL)arg1 ;
-(BOOL)_loadNotificationsWithError:(*id)arg0 ;
-(BOOL)_saveNotificationsWithError:(*id)arg0 ;
-(id)initWithPath:(id)arg0 isProtectedStorage:(BOOL)arg1 ;
-(id)notificationRecords;
-(void)addNotificationRecord:(id)arg0 ;
-(void)addNotificationRecords:(id)arg0 ;
-(void)removeAllNotificationRecords;
-(void)removeNotificationRecordsPassingTest:(id)arg0 ;


@end


#endif