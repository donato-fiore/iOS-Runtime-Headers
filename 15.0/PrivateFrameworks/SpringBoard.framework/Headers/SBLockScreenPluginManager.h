// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKSCREENPLUGINMANAGER_H
#define SBLOCKSCREENPLUGINMANAGER_H

@class NSMutableDictionary, CSLockScreenTestPluginSettings, NSString;
@protocol SBLockScreenPluginAgent, PTSettingsKeyObserver, SBLockScreenActionProvider, SBLockScreenPluginManagerDelegate;

#import <Foundation/Foundation.h>

#import "SBLockScreenPlugin.h"

@interface SBLockScreenPluginManager : NSObject <SBLockScreenPluginAgent, PTSettingsKeyObserver, SBLockScreenActionProvider>

 {
    NSMutableDictionary *_plugins;
    CSLockScreenTestPluginSettings *_testSettings;
}


@property (readonly, nonatomic) SBLockScreenPlugin *activePlugin; // ivar: _activePlugin
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBLockScreenPluginManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBLockScreenPlugin *displayedPlugin; // ivar: _displayedPlugin
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_handlePluginDisabled:(id)arg0 withContext:(id)arg1 ;
-(BOOL)_loadLockScreenPluginWithContext:(id)arg0 ;
-(BOOL)_sendEventToPlugin:(id)arg0 ;
-(BOOL)disableLockScreenPluginWithContext:(id)arg0 ;
-(BOOL)enableLockScreenPluginWithContext:(id)arg0 ;
-(BOOL)handleEvent:(NSInteger)arg0 ;
-(BOOL)pluginController:(id)arg0 sendAction:(id)arg1 ;
-(id)_highestPriorityPluginIgnoringViewDisplay:(BOOL)arg0 ;
-(id)_pluginForPluginController:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)lockScreenActionContext;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_handleUIRelock;
-(void)_refreshLockScreenPlugin;
-(void)activatePluginController:(id)arg0 ;
-(void)deactivatePluginController:(id)arg0 ;
-(void)dealloc;
-(void)pluginController:(id)arg0 updateAppearance:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif