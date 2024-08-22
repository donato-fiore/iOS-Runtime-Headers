// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDEVICEAPPLICATIONAPPCLIPOVERLAYVIEWPROVIDER_H
#define SBDEVICEAPPLICATIONAPPCLIPOVERLAYVIEWPROVIDER_H

@class UIApplicationSceneSettingsDiffInspector, NSString;
@protocol SBDeviceApplicationSceneHandleObserver;


#import "SBDeviceApplicationSceneOverlayViewProvider.h"
#import "SBAppClipOverlayViewController.h"

@interface SBDeviceApplicationAppClipOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationSceneHandleObserver>

 {
    SBAppClipOverlayViewController *_appClipViewController;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsDiffInspector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)wantsResignActiveAssertion;
-(id)_realOverlayViewController;
-(id)initWithSceneHandle:(id)arg0 delegate:(id)arg1 ;
-(void)_activateIfPossible;
-(void)_deactivateIfPossible;
-(void)_updateOverlaySceneActivationState;
-(void)dealloc;
-(void)sceneHandle:(id)arg0 didChangeEffectiveForegroundness:(BOOL)arg1 ;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;


@end


#endif