// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOGINAPPSCENEHOSTER_H
#define SBLOGINAPPSCENEHOSTER_H

@class FBScene, FBApplicationUpdateScenesTransaction, SBSUILoginUISceneClientSettingsDiffInspector, UIView, NSString;
@protocol FBSceneObserver, SBLoginAppSceneHoster, UIScenePresenter, BSInvalidatable, SBLoginAppSceneHosterDelegate;

#import <Foundation/Foundation.h>

#import "SBDeviceApplicationSceneHandle.h"
#import "SBApplication.h"

@interface SBLoginAppSceneHoster : NSObject <FBSceneObserver, SBLoginAppSceneHoster>

 {
    FBScene *_scene;
    id<UIScenePresenter> *_scenePresenter;
    FBApplicationUpdateScenesTransaction *_sceneCreateTransaction;
    NSInteger _cachedActivationOrientationForInitialClientSettings;
    SBSUILoginUISceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    id<BSInvalidatable> *_keyboardFocusRedirectAssertion;
    BOOL _hidEventDeferralsInstalled;
}


@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferHIDEvents; // ivar: _deferHIDEvents
@property (weak, nonatomic) NSObject<SBLoginAppSceneHosterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBApplication *hostedApp;
@property (readonly, nonatomic) NSString *hostedAppBundleID;
@property (readonly, nonatomic) NSString *hostedSceneIdentifier;
@property (readonly) Class superclass;


-(id)_appClientSettingsDiffInspector;
-(id)init;
-(void)_updateHIDEventDeferralsIfNecessary;
-(void)killLoginApp;
-(void)launchLoginAppWithCompletion:(id)arg0 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)updateSettingsWithTransitionBlock:(id)arg0 ;


@end


#endif