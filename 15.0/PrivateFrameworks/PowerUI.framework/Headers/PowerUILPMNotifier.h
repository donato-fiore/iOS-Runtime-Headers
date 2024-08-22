// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POWERUILPMNOTIFIER_H
#define POWERUILPMNOTIFIER_H

@class UNUserNotificationCenter, NSBundle, NSString;
@protocol UNUserNotificationCenterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PowerUILPMNotifier : NSObject <UNUserNotificationCenterDelegate>

 {
    NSObject<OS_dispatch_queue> *_firstUseQueue;
    UNUserNotificationCenter *_userNotificationCenter;
    NSBundle *_bundle;
    int _bsmToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)autoDisabledNotificationRequest;
-(id)init;
-(void)displayAutoDisabledNotification;
-(void)displayFirstUseNotification;
-(void)removeAutoDisabledNotification;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif