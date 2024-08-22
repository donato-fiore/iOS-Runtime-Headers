// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEUSERNOTIFICATION_H
#define NEUSERNOTIFICATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NEUserNotification : NSObject {
    BOOL _isAlert;
    id *_notification;
    id *_notificationSource;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id *_callback;
}




+(BOOL)shouldPromptForLocalAuthentication;
+(void)cancelCurrentNotificationWithDefaultResponse:(BOOL)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
+(void)promptForLocalAuthenticationWithReason:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(id)initAndShowAddConfigurationsForApp:(id)arg0 warningHeader:(char *)arg1 warning:(char *)arg2 callbackQueue:(id)arg3 callbackHandler:(id)arg4 ;
-(id)initAndShowAlertWithHeader:(id)arg0 message:(id)arg1 alternateMessage:(id)arg2 defaultMessage:(id)arg3 noBoldDefault:(BOOL)arg4 callbackQueue:(id)arg5 callbackHandler:(id)arg6 ;
-(id)initAndShowAuthenticationWithHeader:(id)arg0 options:(id)arg1 flags:(NSUInteger)arg2 callbackQueue:(id)arg3 callbackHandler:(id)arg4 ;
-(id)initAndShowLocalNetworkAlertWithAppName:(id)arg0 reasonString:(id)arg1 callbackQueue:(id)arg2 callbackHandler:(id)arg3 ;
-(void)cancel;


@end


#endif