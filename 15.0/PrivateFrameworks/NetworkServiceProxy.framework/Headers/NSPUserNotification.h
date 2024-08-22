// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPUSERNOTIFICATION_H
#define NSPUSERNOTIFICATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NSPUserNotification : NSObject

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain) id *notification; // ivar: _notification
@property (retain) id *notificationSource; // ivar: _notificationSource


+(void)cancelCurrentNotificationWithDefaultResponse:(BOOL)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
+(void)executeOnMainLoop:(id)arg0 ;
+(void)showNotificationWithHeader:(id)arg0 message:(id)arg1 actionURL:(id)arg2 callbackQueue:(id)arg3 callbackHandler:(id)arg4 ;
-(BOOL)postNotificationWithCallbackQueue:(id)arg0 callbackHandler:(id)arg1 ;
-(id)initAndShowAlertWithHeader:(id)arg0 message:(id)arg1 alternateMessage:(id)arg2 defaultMessage:(id)arg3 iconName:(id)arg4 noBoldDefault:(BOOL)arg5 callbackQueue:(id)arg6 callbackHandler:(id)arg7 ;
-(void)cancel;


@end


#endif