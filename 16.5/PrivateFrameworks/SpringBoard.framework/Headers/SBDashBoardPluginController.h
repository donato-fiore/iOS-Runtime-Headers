// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDPLUGINCONTROLLER_H
#define SBDASHBOARDPLUGINCONTROLLER_H

@class CSCoverSheetViewController, NSString, NSSet, _UILegibilitySettings;
@protocol CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalEventHandling, SBLockScreenPluginManagerDelegate, SBLockScreenPluginPresenting, SBLockScreenActionProvider;

#import <Foundation/Foundation.h>

#import "SBDashBoardPluginViewController.h"
#import "SBLockScreenPluginManager.h"

@interface SBDashBoardPluginController : NSObject <CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalEventHandling, SBLockScreenPluginManagerDelegate, SBLockScreenPluginPresenting>

 {
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardPluginViewController *_pluginViewController;
    NSInteger _pluginViewControllerPresentationStyle;
    SBLockScreenPluginManager *_pluginManager;
}


@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSObject<SBLockScreenActionProvider> *lockScreenActionProvider;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)pluginManager:(id)arg0 plugin:(id)arg1 handleAction:(id)arg2 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)initWithCoverSheetViewController:(id)arg0 ;
-(void)_activate;
-(void)_deactivate;
-(void)_dismissPluginViewController:(id)arg0 withStyle:(NSInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_presentPluginViewController:(id)arg0 withStyle:(NSInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_setPluginViewController:(id)arg0 ;
-(void)conformsToCSAppearanceProviding;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSEventHandling;
-(void)conformsToCSExternalBehaviorProviding;
-(void)dealloc;
-(void)disableLockScreenPluginWithContext:(id)arg0 ;
-(void)enableLockScreenPluginWithContext:(id)arg0 ;
-(void)pluginManager:(id)arg0 activePluginDidChange:(id)arg1 ;
-(void)pluginManager:(id)arg0 didLoadPlugin:(id)arg1 ;
-(void)pluginManager:(id)arg0 displayedPluginDidChangeFromPlugin:(id)arg1 toPlugin:(id)arg2 ;
-(void)pluginManager:(id)arg0 displayedPluginDidUpdateAppearance:(id)arg1 ;
-(void)pluginManager:(id)arg0 willUnloadPlugin:(id)arg1 ;


@end


#endif