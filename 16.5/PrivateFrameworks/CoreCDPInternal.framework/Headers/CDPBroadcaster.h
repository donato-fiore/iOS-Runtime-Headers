// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPBROADCASTER_H
#define CDPBROADCASTER_H


#import <Foundation/Foundation.h>


@interface CDPBroadcaster : NSObject



+(void)_broadcastNotificationName:(id)arg0 userInfo:(id)arg1 ;
+(void)broadcastWalrusStateChangeNotification;
+(void)broadcastWebAccessStateChangeNotification;


@end


#endif