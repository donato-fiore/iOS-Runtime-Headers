// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMEMORIESSEENHELPER_H
#define PXMEMORIESSEENHELPER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXMemoriesSeenHelper : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)defaultHelper;
-(id)init;
-(void)_clearPendingNotificationForMemory:(id)arg0 inLibrary:(id)arg1 ;
-(void)clearAnyPendingNotificationsFromMemories:(id)arg0 inLibrary:(id)arg1 ;
-(void)clearAnyPendingStateFromMemories:(id)arg0 inLibrary:(id)arg1 ;


@end


#endif