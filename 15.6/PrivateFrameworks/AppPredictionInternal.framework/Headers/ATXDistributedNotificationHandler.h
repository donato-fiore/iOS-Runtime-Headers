// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDISTRIBUTEDNOTIFICATIONHANDLER_H
#define ATXDISTRIBUTEDNOTIFICATIONHANDLER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface ATXDistributedNotificationHandler : NSObject {
    NSMutableSet *_recentNotifications;
}




+(id)sharedInstance;
-(id)init;
-(void)_notificationFired:(id)arg0 ;
-(void)_pruneOldRecents;
-(void)_repostNotificationFromSource:(id)arg0 name:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(void)registerXPCHandler;


@end


#endif