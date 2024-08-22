// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SMCNOTIFY_H
#define SMCNOTIFY_H


#import <Foundation/Foundation.h>


@interface SMCNotify : NSObject



+(BOOL)tokenIsValid:(int)arg0 ;
+(int)invalidToken;
+(int)registerNotification:(char *)arg0 queue:(id)arg1 callback:(id)arg2 ;
+(void)cancelToken:(int)arg0 ;
+(void)postNotificationName:(char *)arg0 ;


@end


#endif