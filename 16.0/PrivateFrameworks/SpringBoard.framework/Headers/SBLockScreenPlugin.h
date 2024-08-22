// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKSCREENPLUGIN_H
#define SBLOCKSCREENPLUGIN_H

@class BSPluginBundle, FBProcess, SBLockScreenPluginAppearanceContext, NSMutableArray, CSAppearance, CSBehavior, NSString, _UILegibilitySettings, SBLockScreenPluginAction, UIViewController<SBLockScreenPluginViewController>;
@protocol FBProcessObserver, SBLockScreenPluginAgent, SBLockScreenPluginController, SBLockScreenPluginDelegate, SBLockScreenPluginAppearance;

#import <Foundation/Foundation.h>

#import "SBLockOverlayContext.h"

@interface SBLockScreenPlugin : NSObject <FBProcessObserver, SBLockScreenPluginAgent, SBLockScreenPluginController>

 {
    BSPluginBundle *_bundle;
    FBProcess *_process;
    SBLockScreenPluginAppearanceContext *_appearance;
    NSMutableArray *_lifecycleObservers;
}


@property (readonly, nonatomic) SBLockScreenPluginAppearanceContext *appearance;
@property (copy, nonatomic) id *auxiliaryActivationAnimationBlock; // ivar: _auxiliaryActivationAnimationBlock
@property (copy, nonatomic) id *auxiliaryDeactivationAnimationBlock; // ivar: _auxiliaryDeactivationAnimationBlock
@property (readonly, nonatomic) NSObject<SBLockScreenPluginController> *controller; // ivar: _controller
@property (readonly, nonatomic) CSAppearance *coverSheetAppearance;
@property (readonly, nonatomic) CSBehavior *coverSheetBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBLockScreenPluginDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _bundleName
@property (retain, nonatomic) SBLockOverlayContext *overlay; // ivar: _overlay
@property (weak, nonatomic) NSObject<SBLockScreenPluginAgent> *pluginAgent; // ivar: _agent
@property (readonly, nonatomic) NSObject<SBLockScreenPluginAppearance> *pluginAppearance;
@property (readonly, nonatomic) NSInteger pluginPriority;
@property (readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
@property (readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBLockScreenPluginAction *unlockAction;
@property (readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *viewController;


+(id)_pluginBundleForPluginWithName:(id)arg0 ;
+(id)pluginWithName:(id)arg0 activationContext:(id)arg1 ;
-(BOOL)handleDashBoardEvent:(id)arg0 ;
-(BOOL)isCapabilityRestricted:(NSUInteger)arg0 ;
-(BOOL)isElementHidden:(NSInteger)arg0 ;
-(BOOL)pluginController:(id)arg0 sendAction:(id)arg1 ;
-(BOOL)pluginHandleEvent:(NSInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithBundle:(id)arg0 activationContext:(id)arg1 ;
-(id)overrideForElement:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_updateAppearance:(id)arg0 ;
-(void)activatePluginController:(id)arg0 ;
-(void)addLifecycleObserver:(id)arg0 ;
-(void)deactivatePluginController:(id)arg0 ;
-(void)dealloc;
-(void)enumerateLifecycleObserversUsingBlock:(id)arg0 ;
-(void)pluginController:(id)arg0 updateAppearance:(id)arg1 ;
-(void)pluginDidDeactivateWithContext:(id)arg0 ;
-(void)pluginWillActivateWithContext:(id)arg0 ;
-(void)processDidExit:(id)arg0 ;
-(void)removeLifecycleObserver:(id)arg0 ;


@end


#endif