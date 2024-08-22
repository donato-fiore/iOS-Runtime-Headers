// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EAEMERGENCYALERTCENTER_H
#define EAEMERGENCYALERTCENTER_H

@class UNUserNotificationCenter;

#import <Foundation/Foundation.h>


@interface EAEmergencyAlertCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
}




-(NSUInteger)currentAudioAndVideoCallCount;
-(id)init;
-(id)initWithUserNotificationCenter:(id)arg0 ;
-(void)addAlertRequestForCellBroadcastMessage:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)addNotificationRequest:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif