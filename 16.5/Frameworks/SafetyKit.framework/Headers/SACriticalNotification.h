// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SACRITICALNOTIFICATION_H
#define SACRITICALNOTIFICATION_H

@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>

#import "SABundleManager.h"

@interface SACriticalNotification : NSObject <UNUserNotificationCenterDelegate>

 {
    UNUserNotificationCenter *_center;
    SABundleManager *_bundleManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createNotification;
-(id)initWithBundleManager:(id)arg0 ;
-(void)sendNotificationWithCompletionHandler:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif