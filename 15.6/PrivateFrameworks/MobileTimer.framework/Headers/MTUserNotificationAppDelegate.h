// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTUSERNOTIFICATIONAPPDELEGATE_H
#define MTUSERNOTIFICATIONAPPDELEGATE_H

@class NSString, UNUserNotificationCenter;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface MTUserNotificationAppDelegate : NSObject <UNUserNotificationCenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;


-(id)init;
-(void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif