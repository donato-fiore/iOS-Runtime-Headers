// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FABROADCASTER_H
#define FABROADCASTER_H


#import <Foundation/Foundation.h>


@interface FABroadcaster : NSObject



+(void)_broadcastNotificationName:(id)arg0 userInfo:(id)arg1 ;
+(void)broadcastFamilyChangedNotification;
+(void)broadcastFamilyMarqueeChangedNotification;
+(void)broadcastRemoteUIWillDismissNotification:(id)arg0 ;
+(void)broadcastServicesChangedNotification;


@end


#endif