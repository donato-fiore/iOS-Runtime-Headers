// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAENOTIFICATIONCENTERMANAGER_H
#define HAENOTIFICATIONCENTERMANAGER_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "NotificationCenter.h"

@interface HAENotificationCenterManager : NSObject {
    NotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_eventQueue;
    CGFloat _liveThresholdInDBA;
    NSObject<OS_dispatch_semaphore> *_sem;
}




+(id)sharedInstance;
-(id)addHAENotificationEvent:(id)arg0 ;
-(id)init;
-(id)sendBannerNotificationWithEvent:(id)arg0 volumeLoweringAction:(unsigned int)arg1 ;
-(id)sendLiveExposureEvent:(id)arg0 volumeLoweringAction:(unsigned int)arg1 ;
-(id)sendWeeklyExposureEvent:(id)arg0 volumeLoweringAction:(unsigned int)arg1 ;
-(void)donateSignalToTipsKit:(id)arg0 ;


@end


#endif