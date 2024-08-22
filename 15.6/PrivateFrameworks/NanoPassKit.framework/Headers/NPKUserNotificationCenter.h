// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKUSERNOTIFICATIONCENTER_H
#define NPKUSERNOTIFICATIONCENTER_H

@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegatePrivate;

#import <Foundation/Foundation.h>


@interface NPKUserNotificationCenter : NSObject <UNUserNotificationCenterDelegatePrivate>

 {
    UNUserNotificationCenter *_notificationCenter;
    NSInteger _authorizationStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_requestWithNotificationIdentifier:(id)arg0 title:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 userInfo:(id)arg4 suppressed:(BOOL)arg5 ;
-(id)init;
-(id)initWithNotificationBundleIdentifier:(id)arg0 ;
-(void)_addNotificationWithNotificationIdentifier:(id)arg0 title:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 userInfo:(id)arg4 suppressed:(BOOL)arg5 completion:(id)arg6 ;
-(void)_requestNotificationAuthorizationWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
// -(void)_requestNotificationAuthorizationWithPreconditionCheck:(id)arg0 completion:(unk)arg1  ;
-(void)addNotification:(id)arg0 completion:(id)arg1 ;
-(void)fetchAuthorizationStatusWithCompletion:(id)arg0 ;
-(void)requestAuthorizationIfNecessaryWithCompletion:(id)arg0 ;
-(void)requestAuthorizationWithCompletion:(id)arg0 ;
-(void)setNotificationCategoryWithIdentifier:(id)arg0 intentIdentifier:(id)arg1 actions:(id)arg2 options:(NSUInteger)arg3 ;
-(void)userNotificationCenter:(id)arg0 didChangeSettings:(id)arg1 ;


@end


#endif