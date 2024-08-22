// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSSCREENSHOTSWINDOW_H
#define SSSCREENSHOTSWINDOW_H

@class UIWindow;
@protocol SSDittoHostViewControllerDelegate, SSActiveInterfaceOrientationObserverDelegate, OS_dispatch_queue, SSScreenshotsWindowDelegate;


#import "SSActiveInterfaceOrientationObserver.h"
#import "SSScreenshotsWindowRootViewController.h"

@interface SSScreenshotsWindow : UIWindow <SSDittoHostViewControllerDelegate, SSActiveInterfaceOrientationObserverDelegate>

 {
    SSActiveInterfaceOrientationObserver *_activeInterfaceOrientationObserver;
    SSScreenshotsWindowRootViewController *_root;
    NSInteger _lastActiveInterfaceOrientation;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _lockNotificationToken;
    int _backlightNotificationToken;
}


@property (weak, nonatomic) NSObject<SSScreenshotsWindowDelegate> *delegate; // ivar: _delegate


+(BOOL)_isSecure;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldControlAutorotation;
-(id)_hostViewControllerIfExists;
-(id)init;
-(void)_deviceBacklightChanged:(NSUInteger)arg0 ;
-(void)_deviceLockStateChanged:(NSUInteger)arg0 ;
-(void)_dismiss;
-(void)_prepareRemoteViewControllerWithCompletionHandler:(id)arg0 ;
-(void)activateRemoteViewControllerIfAppropriate;
-(void)activeInterfaceOrientationObserver:(id)arg0 observedChangeToInterfaceOrientation:(NSInteger)arg1 withDuration:(CGFloat)arg2 ;
-(void)dealloc;
-(void)handleStatusBarChangeFromHeight:(CGFloat)arg0 toHeight:(CGFloat)arg1 ;
-(void)remoteViewControllerDisconnectedFromHostViewController:(id)arg0 withError:(id)arg1 ;
-(void)remoteViewControllerOfHostViewControllerHasDismissedScreenshots:(id)arg0 ;


@end


#endif