// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKAPPLICATIONSTATELISTENER_H
#define NPKAPPLICATIONSTATELISTENER_H

@class NSString;
@protocol LSApplicationWorkspaceObserverProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NPKObserverManager.h"

@interface NPKApplicationStateListener : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    os_unfair_lock_s _appStateLock;
    NSUInteger _appState;
    NSObject<OS_dispatch_queue> *_internalClassQueue;
    NPKObserverManager *_observerManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_applicationStateWithLSApplicationState:(id)arg0 ;
-(NSUInteger)cachedAppState;
-(id)init;
-(void)_handleApplicationChangeNotificationWithWorkspaceApplicationProxies:(id)arg0 newStateResolver:(id)arg1 ;
-(void)_retrieveAppState:(id)arg0 ;
-(void)_updateStateWithNewState:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)appState:(id)arg0 ;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)prewarm;
-(void)registerObserver:(id)arg0 ;


@end


#endif