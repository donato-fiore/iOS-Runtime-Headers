// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIFITNESSAPPSSTATEOBSERVER_H
#define FIFITNESSAPPSSTATEOBSERVER_H

@class NSArray, NSMutableDictionary, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, FIFitnessAppsStateObserverDelegate;

#import <Foundation/Foundation.h>


@interface FIFitnessAppsStateObserver : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    NSArray *_appBundleIdentifersToMonitor;
    NSInteger _fitnessAppsRestrictedState;
    NSMutableDictionary *_fitnessAppsInstallationState;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FIFitnessAppsStateObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)areFitnessAppsRestricted;
-(NSInteger)_lock_installStateForBundleIdentifier:(id)arg0 ;
-(NSInteger)installStateForBundleIdentifier:(id)arg0 ;
-(id)_filteredAppProxies:(id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifiers:(id)arg0 ;
-(void)_cacheInitialFitnessAppsInstallState;
-(void)_cacheInitialFitnessAppsRestrictedState;
-(void)_updateCurrentFitnessAppsInstallStateWithProxies:(id)arg0 newState:(NSInteger)arg1 ;
-(void)_updateCurrentFitnessAppsRestrictedStateWithProxies:(id)arg0 ;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;


@end


#endif