// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DDUIIOSNOTIFICATIONPRESENTER_H
#define _DDUIIOSNOTIFICATIONPRESENTER_H

@class NSString, UNUserNotificationCenter, FBSOpenApplicationService;
@protocol UNUserNotificationCenterDelegate, _DDUINotificationPresenter, _DDUIiOSNotificationPresenterApplicationRecordVendor, OS_dispatch_source, _DDUINotificationPresenterDelegate;

#import <Foundation/Foundation.h>

#import "_DDUIiOSPresentedNotification.h"

@interface _DDUIiOSNotificationPresenter : NSObject <UNUserNotificationCenterDelegate, _DDUINotificationPresenter>



@property (retain, nonatomic) NSObject<_DDUIiOSNotificationPresenterApplicationRecordVendor> *applicationRecordVendor; // ivar: _applicationRecordVendor
@property (retain, nonatomic) NSObject<OS_dispatch_source> *clearNotificationTimer; // ivar: _clearNotificationTimer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_DDUINotificationPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) FBSOpenApplicationService *openApplicationService; // ivar: _openApplicationService
@property (retain, nonatomic) _DDUIiOSPresentedNotification *presentedNotification; // ivar: _presentedNotification
@property (nonatomic) BOOL setup; // ivar: _setup
@property (readonly) Class superclass;


-(BOOL)_applicationSupportsServiceIdentifier:(id)arg0 serviceIdentifier:(id)arg1 ;
-(id)_createAppStoreNotification:(id)arg0 ;
-(id)_createConnectNotificationWithDeviceName:(id)arg0 appName:(id)arg1 ;
-(id)init;
-(id)initWithNotificationCenter:(id)arg0 applicationRecordVendor:(id)arg1 openApplicationService:(id)arg2 ;
-(void)_clearNotificationTimeout;
-(void)_clearPresentedNotificationIfNeeded;
-(void)_configureNotificationTimeout;
-(void)dismissNotificationWithIdentifier:(id)arg0 ;
-(void)showNotificationForApplication:(id)arg0 deviceName:(id)arg1 identifier:(id)arg2 completion:(id)arg3 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif