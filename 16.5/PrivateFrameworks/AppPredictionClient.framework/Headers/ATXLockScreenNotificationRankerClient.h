// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLOCKSCREENNOTIFICATIONRANKERCLIENT_H
#define ATXLOCKSCREENNOTIFICATIONRANKERCLIENT_H

@class NSXPCConnection, NSString;
@protocol ATXLockScreenNotificationRankerProtocol;

#import <Foundation/Foundation.h>


@interface ATXLockScreenNotificationRankerClient : NSObject <ATXLockScreenNotificationRankerProtocol>

 {
    NSXPCConnection *_xpcConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)rankNewNotificationIntoNotificationArrays:(id)arg0 newNotification:(id)arg1 notificationArrayIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)rankNotificationArrays:(id)arg0 reply:(id)arg1 ;


@end


#endif