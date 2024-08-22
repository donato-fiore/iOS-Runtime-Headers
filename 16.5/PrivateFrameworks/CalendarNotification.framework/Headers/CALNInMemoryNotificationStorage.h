// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNINMEMORYNOTIFICATIONSTORAGE_H
#define CALNINMEMORYNOTIFICATIONSTORAGE_H

@class NSString, NSMutableDictionary;
@protocol CALNNotificationStorage, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CALNInMemoryNotificationStorage : NSObject <CALNNotificationStorage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *recordMap; // ivar: _recordMap
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)_notificationRecords;
-(id)init;
-(id)notificationRecords;
-(void)_addNotificationRecord:(id)arg0 ;
-(void)_removeNotificationRecordsPassingTest:(id)arg0 ;
-(void)addNotificationRecord:(id)arg0 ;
-(void)addNotificationRecords:(id)arg0 ;
-(void)removeAllNotificationRecords;
-(void)removeNotificationRecordsPassingTest:(id)arg0 ;


@end


#endif