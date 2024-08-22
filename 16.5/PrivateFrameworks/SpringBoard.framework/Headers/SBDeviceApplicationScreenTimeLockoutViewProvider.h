// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEVICEAPPLICATIONSCREENTIMELOCKOUTVIEWPROVIDER_H
#define SBDEVICEAPPLICATIONSCREENTIMELOCKOUTVIEWPROVIDER_H

@class STBlockingViewController;


#import "SBDeviceApplicationSceneOverlayViewProvider.h"

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider {
    STBlockingViewController *_blockingViewController;
    BOOL _isActive;
}




-(NSInteger)priority;
-(id)_newBlockingViewControllerWithBundleIdentifier:(id)arg0 ;
-(id)_realOverlayViewController;
-(id)initWithSceneHandle:(id)arg0 delegate:(id)arg1 ;
-(void)_activateIfPossible;
-(void)_deactivateIfPossible;
-(void)_handleInstalledAppsChanged:(id)arg0 ;
-(void)dealloc;
-(void)hideContentWithAnimation:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)showContentWithAnimation:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif