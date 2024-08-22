// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EAEMERGENCYALERTCENTER_H
#define EAEMERGENCYALERTCENTER_H

@class UNUserNotificationCenter;

#import <Foundation/Foundation.h>


@interface EAEmergencyAlertCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
}




-(NSUInteger)currentAudioAndVideoCallCount;
-(id)getUpdatedNotificationForAppleSafetyAlert:(id)arg0 withMessageDictionary:(id)arg1 ;
-(id)handleCellBroadcastMessage:(id)arg0 withCompletionHandler:(id)arg1 ;
-(id)init;
-(id)initWithUserNotificationCenter:(id)arg0 ;
-(void)addNotificationRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)handleAppleSafetyAlertMessage:(id)arg0 ;
-(void)handleRawCellBroadcastMessage:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)replaceContentForRequestWithRequestID:(id)arg0 replacementContent:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif