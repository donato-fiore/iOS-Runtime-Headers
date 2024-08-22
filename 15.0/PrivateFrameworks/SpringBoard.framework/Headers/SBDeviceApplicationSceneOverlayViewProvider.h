// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDEVICEAPPLICATIONSCENEOVERLAYVIEWPROVIDER_H
#define SBDEVICEAPPLICATIONSCENEOVERLAYVIEWPROVIDER_H

@class UIViewController<SBDeviceApplicationSceneOverlayViewController>;
@protocol SBDeviceApplicationSceneOverlayViewProviderDelegate;

#import <Foundation/Foundation.h>

#import "SBIsolatedSceneOrientationFollowingWrapperViewController.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBDeviceApplicationSceneOverlayViewProvider : NSObject {
    SBIsolatedSceneOrientationFollowingWrapperViewController *_orientationWrapperViewController;
}


@property (readonly, weak, nonatomic) NSObject<SBDeviceApplicationSceneOverlayViewProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIViewController<SBDeviceApplicationSceneOverlayViewController> *overlayViewController;
@property (readonly, nonatomic) NSInteger preferredStatusBarStyle;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden; // ivar: _prefersStatusBarHidden
@property (readonly, nonatomic) NSInteger priority;
@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly, nonatomic) BOOL wantsResignActiveAssertion;


-(BOOL)shouldFollowSceneOrientation;
-(NSInteger)bestHomeAffordanceOrientationForOrientation:(NSInteger)arg0 ;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_realOverlayViewController;
-(id)initWithSceneHandle:(id)arg0 delegate:(id)arg1 ;
-(void)_activateIfPossible;
-(void)_deactivateIfPossible;
-(void)dealloc;
-(void)hideContentWithAnimation:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)showContentWithAnimation:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif