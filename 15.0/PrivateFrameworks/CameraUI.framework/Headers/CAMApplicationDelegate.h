// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMAPPLICATIONDELEGATE_H
#define CAMAPPLICATIONDELEGATE_H

@class UIResponder, NSString, UIWindow;
@protocol UNUserNotificationCenterDelegate, UIApplicationDelegate;


#import "CAMBurstController.h"
#import "CAMCameraRollController.h"
#import "CUCaptureController.h"
#import "CAMIrisVideoController.h"
#import "CAMKeepAliveController.h"
#import "CAMLocationController.h"
#import "CAMMotionController.h"
#import "CAMNebulaDaemonProxyManager.h"
#import "CAMPersistenceController.h"
#import "CAMPowerController.h"
#import "CAMProtectionController.h"
#import "CAMRemoteShutterController.h"
#import "CAMTimelapseController.h"
#import "CAMViewfinderViewController.h"

@interface CAMApplicationDelegate : UIResponder <UNUserNotificationCenterDelegate, UIApplicationDelegate>



@property (readonly, nonatomic) CAMBurstController *burstController; // ivar: _burstController
@property (readonly, nonatomic) CAMCameraRollController *cameraRollController; // ivar: _cameraRollController
@property (readonly, nonatomic) CUCaptureController *captureController; // ivar: _captureController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CAMIrisVideoController *irisVideoController; // ivar: _irisVideoController
@property (readonly, nonatomic) CAMKeepAliveController *keepAliveController; // ivar: _keepAliveController
@property (readonly, nonatomic) CAMLocationController *locationController; // ivar: _locationController
@property (readonly, nonatomic) CAMMotionController *motionController; // ivar: _motionController
@property (readonly, nonatomic) CAMNebulaDaemonProxyManager *nebulaDaemonProxyManager; // ivar: _nebulaDaemonProxyManager
@property (readonly, nonatomic) CAMPersistenceController *persistenceController; // ivar: _persistenceController
@property (readonly, nonatomic) CAMPowerController *powerController; // ivar: _powerController
@property (readonly, nonatomic) CAMProtectionController *protectionController; // ivar: _protectionController
@property (readonly, nonatomic) CAMRemoteShutterController *remoteShutterController; // ivar: _remoteShutterController
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAMTimelapseController *timelapseController; // ivar: _timelapseController
@property (readonly, nonatomic) CAMViewfinderViewController *viewfinderViewController; // ivar: _viewfinderViewController
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(BOOL)_createSubsystemsWithLaunchOptions:(id)arg0 ;
-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(BOOL)application:(id)arg0 openURL:(id)arg1 options:(id)arg2 ;
-(id)_userInfoForMode:(NSInteger)arg0 devicePosition:(NSInteger)arg1 ;
-(void)application:(id)arg0 performActionForShortcutItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)applicationWillTerminate:(id)arg0 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg0 ;
-(void)updateShortcutItemsForApplication:(id)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif