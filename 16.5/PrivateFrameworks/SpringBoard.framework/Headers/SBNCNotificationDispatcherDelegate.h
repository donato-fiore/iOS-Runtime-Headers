// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBNCNOTIFICATIONDISPATCHERDELEGATE_H
#define SBNCNOTIFICATIONDISPATCHERDELEGATE_H

@class NSString;
@protocol NCNotificationDispatcherDelegate;

#import <Foundation/Foundation.h>

#import "SBNotificationBannerDestination.h"

@interface SBNCNotificationDispatcherDelegate : NSObject <NCNotificationDispatcherDelegate>



@property (weak, nonatomic) SBNotificationBannerDestination *bannerDestination; // ivar: _bannerDestination
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_requestAuthenticationWithCompletion:(id)arg0 ;
-(void)dispatcher:(id)arg0 didExecuteAction:(id)arg1 forNotificationRequest:(id)arg2 ;
-(void)dispatcher:(id)arg0 launchBackgroundApplicationForAction:(id)arg1 notificationRequest:(id)arg2 fromDestination:(id)arg3 withParameters:(id)arg4 ;
-(void)dispatcher:(id)arg0 launchForegroundApplicationForAction:(id)arg1 notificationRequest:(id)arg2 fromDestination:(id)arg3 withParameters:(id)arg4 ;
-(void)dispatcher:(id)arg0 requestPermissionToExecuteAction:(id)arg1 forDestination:(id)arg2 notificationRequest:(id)arg3 withParameters:(id)arg4 completionBlock:(id)arg5 ;
-(void)dispatcher:(id)arg0 willExecuteAction:(id)arg1 forDestination:(id)arg2 notificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completionBlock:(id)arg6 ;


@end


#endif