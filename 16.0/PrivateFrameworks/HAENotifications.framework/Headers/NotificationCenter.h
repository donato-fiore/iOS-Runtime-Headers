// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTIFICATIONCENTER_H
#define NOTIFICATIONCENTER_H

@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>


@interface NotificationCenter : NSObject <UNUserNotificationCenterDelegate>

 {
    UNUserNotificationCenter *_userNotificationCenter;
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    BOOL _hasHealthApp;
    BOOL _hasHaptics;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_healthAppHidden;
-(id)init;
-(void)handleNotificationAction:(id)arg0 ;
-(void)sendNotificationWithExposureLevel:(CGFloat)arg0 duration:(CGFloat)arg1 eventType:(unsigned int)arg2 volumeLoweringAction:(unsigned int)arg3 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif