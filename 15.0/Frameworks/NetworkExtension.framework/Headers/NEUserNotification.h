// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEUSERNOTIFICATION_H
#define NEUSERNOTIFICATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NEUserNotification : NSObject

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property BOOL isAlert; // ivar: _isAlert
@property (retain) id *notification; // ivar: _notification
@property (retain) id *notificationSource; // ivar: _notificationSource


+(BOOL)shouldPromptForLocalAuthentication;
+(Class)getUIDeviceClass;
+(id)createLAContext;
+(void)cancelCurrentNotificationWithDefaultResponse:(BOOL)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
+(void)executeOnMainLoop:(id)arg0 ;
+(void)promptForLocalAuthenticationWithReason:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)postNotificationWithCallbackQueue:(id)arg0 callbackHandler:(id)arg1 ;
-(id)initAndShowAddConfigurationsForApp:(id)arg0 warningHeader:(id)arg1 warning:(id)arg2 callbackQueue:(id)arg3 callbackHandler:(id)arg4 ;
-(id)initAndShowAlertWithHeader:(id)arg0 message:(id)arg1 alternateMessage:(id)arg2 defaultMessage:(id)arg3 noBoldDefault:(BOOL)arg4 callbackQueue:(id)arg5 callbackHandler:(id)arg6 ;
-(id)initAndShowAuthenticationWithHeader:(id)arg0 options:(id)arg1 flags:(NSUInteger)arg2 callbackQueue:(id)arg3 callbackHandler:(id)arg4 ;
-(id)initAndShowLocalNetworkAlertWithAppName:(id)arg0 reasonString:(id)arg1 callbackQueue:(id)arg2 callbackHandler:(id)arg3 ;
-(void)cancel;


@end


#endif