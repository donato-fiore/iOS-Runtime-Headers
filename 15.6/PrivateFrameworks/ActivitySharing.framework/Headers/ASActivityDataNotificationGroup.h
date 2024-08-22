// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASACTIVITYDATANOTIFICATIONGROUP_H
#define ASACTIVITYDATANOTIFICATIONGROUP_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface ASActivityDataNotificationGroup : NSObject

@property (retain, nonatomic) NSSet *achievementNotifications; // ivar: _achievementNotifications
@property (readonly, nonatomic) NSSet *allNotifications;
@property (retain, nonatomic) NSSet *goalCompletionNotifications; // ivar: _goalCompletionNotifications
@property (retain, nonatomic) NSSet *workoutNotifications; // ivar: _workoutNotifications


-(NSUInteger)notificationCount;


@end


#endif