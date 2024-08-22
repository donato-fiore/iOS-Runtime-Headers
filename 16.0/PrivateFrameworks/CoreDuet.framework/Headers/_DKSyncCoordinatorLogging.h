// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKSYNCCOORDINATORLOGGING_H
#define _DKSYNCCOORDINATORLOGGING_H

@protocol _DKSyncCoordinatorEventNotificationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DKSyncCoordinatorLogging : NSObject <_DKSyncCoordinatorEventNotificationDelegate>

 {
    NSObject<OS_dispatch_queue> *_notificationQueue;
}




-(id)init;
-(void)syncCoordinator:(id)arg0 didAddRemoteEventsWithStreamNameCounts:(id)arg1 events:(id)arg2 ;
-(void)syncCoordinator:(id)arg0 didApplyRemoteAdditionChangeSet:(id)arg1 ;
-(void)syncCoordinator:(id)arg0 didApplyRemoteDeletionChangeSet:(id)arg1 ;
-(void)syncCoordinator:(id)arg0 didCreateAdditionChangeSet:(id)arg1 ;
-(void)syncCoordinator:(id)arg0 didCreateDeletionChangeSet:(id)arg1 ;
-(void)syncCoordinator:(id)arg0 didDeleteRemoteEventsWithCount:(NSUInteger)arg1 ;
-(void)syncCoordinator:(id)arg0 didInsertLocalAdditionEventsWithStreamNameCounts:(id)arg1 ;
-(void)syncCoordinator:(id)arg0 didInsertLocalDeletionEventsWithCount:(NSUInteger)arg1 ;


@end


#endif