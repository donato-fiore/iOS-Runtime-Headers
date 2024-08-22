// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIFITNESSAPPSSTATEOBSERVER_H
#define FIFITNESSAPPSSTATEOBSERVER_H

@class NSString;
@protocol LSApplicationWorkspaceObserverProtocol, FIFitnessAppsStateObserverDelegate;

#import <Foundation/Foundation.h>


@interface FIFitnessAppsStateObserver : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    id<FIFitnessAppsStateObserverDelegate> *_delegate;
    NSInteger _fitnessAppsState;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)areFitnessAppsRestricted;
-(id)_fitnessAppBundleIdentifiers;
-(id)initWithDelegate:(id)arg0 ;
-(void)_cacheCurrentFitnessAppsRestrictedStateWithProxies:(id)arg0 initialLoad:(BOOL)arg1 ;
-(void)_cacheInitialFitnessAppsRestrictedState;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif