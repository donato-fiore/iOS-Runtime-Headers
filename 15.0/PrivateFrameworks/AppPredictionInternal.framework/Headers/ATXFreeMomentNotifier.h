// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXFREEMOMENTNOTIFIER_H
#define ATXFREEMOMENTNOTIFIER_H

@class UNUserNotificationCenter, NSString;
@protocol ATXFreeMomentDetectorDelegate, UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>

#import "ATXFreeMomentDetector.h"

@interface ATXFreeMomentNotifier : NSObject <ATXFreeMomentDetectorDelegate, UNUserNotificationCenterDelegate>

 {
    ATXFreeMomentDetector *_freeMomentDetector;
    UNUserNotificationCenter *_notificationCenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)getFreeMomentReason:(int)arg0 ;
-(id)init;
-(void)didDetectFreeMomentEnded;
-(void)didDetectFreeMomentStart:(int)arg0 withFeatureVector:(id)arg1 ;
-(void)sendFreeMomentDebugNotification:(int)arg0 withFeatureVector:(id)arg1 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif