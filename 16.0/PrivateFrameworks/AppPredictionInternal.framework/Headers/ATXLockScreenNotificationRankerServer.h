// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXLOCKSCREENNOTIFICATIONRANKERSERVER_H
#define ATXLOCKSCREENNOTIFICATIONRANKERSERVER_H

@class NSXPCListener, NSString;
@protocol ATXLockScreenNotificationRankerProtocol, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface ATXLockScreenNotificationRankerServer : NSObject <ATXLockScreenNotificationRankerProtocol, NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)rankNewNotificationIntoNotificationArrays:(id)arg0 newNotification:(id)arg1 notificationArrayIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)rankNotificationArrays:(id)arg0 reply:(id)arg1 ;


@end


#endif