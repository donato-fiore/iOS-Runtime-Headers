// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKUSERNOTIFICATIONINTERFACECONTROLLER_H
#define WKUSERNOTIFICATIONINTERFACECONTROLLER_H



#import "WKInterfaceController.h"

@interface WKUserNotificationInterfaceController : WKInterfaceController



-(id)init;
-(void)_didReceiveNotification:(id)arg0 remoteNotification:(id)arg1 localNotification:(id)arg2 withCompletion:(id)arg3 ;
-(void)didReceiveLocalNotification:(id)arg0 withCompletion:(id)arg1 ;
-(void)didReceiveNotification:(id)arg0 withCompletion:(id)arg1 ;
-(void)didReceiveRemoteNotification:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif