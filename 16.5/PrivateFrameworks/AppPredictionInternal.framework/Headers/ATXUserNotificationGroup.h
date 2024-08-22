// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUSERNOTIFICATIONGROUP_H
#define ATXUSERNOTIFICATIONGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ATXUserNotificationGroup : NSObject {
    NSInteger _hasCriticalNotifications;
    NSInteger _hasTimeSensitiveNotifications;
    NSInteger _hasCommunicationsNotifications;
    NSInteger _qualifiesForHighEngagement;
}


@property (readonly, nonatomic) NSArray *notifications; // ivar: _notifications


-(BOOL)hasCommunicationsNotifications;
-(BOOL)hasCriticalNotifications;
-(BOOL)hasTimeSensitiveNotifications;
-(BOOL)qualifiesForHighEngagement;
-(BOOL)runCachedCheckOnNotificationsWithIvar:(*NSInteger)arg0 block:(id)arg1 ;
-(CGFloat)latestNotificationTimestamp;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithNotifications:(id)arg0 ;


@end


#endif