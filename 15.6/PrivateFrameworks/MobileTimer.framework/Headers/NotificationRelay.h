// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NOTIFICATIONRELAY_H
#define NOTIFICATIONRELAY_H


#import <Foundation/Foundation.h>


@interface NotificationRelay : NSObject

@property (nonatomic) BOOL refreshManagers; // ivar: _refreshManagers


+(id)sharedRelay;
-(id)init;
-(void)refreshManagersForPreferences:(BOOL)arg0 localNotifications:(BOOL)arg1 ;
-(void)relayFrameworkNotification:(id)arg0 ;


@end


#endif