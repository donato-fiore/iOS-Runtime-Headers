// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDISPLAYMANAGER_H
#define SBDISPLAYMANAGER_H

@class FBDisplayManager, NSMutableSet, NSMutableDictionary, NSMapTable, NSString, NSHashTable, NSSet, FBSDisplayIdentity;
@protocol FBSDisplayObserving, SBDisplayAssertionCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "SBSceneManagerCoordinator.h"
#import "SBDisplayAssertionCoordinator.h"
#import "SBDisplayPowerLogReporter.h"

@interface SBDisplayManager : NSObject <FBSDisplayObserving, SBDisplayAssertionCoordinatorDelegate>

 {
    FBDisplayManager *_displayManager;
    SBSceneManagerCoordinator *_sceneManagerCoordinator;
    SBDisplayAssertionCoordinator *_assertionCoordinator;
    NSMutableSet *_connectedIdentities;
    NSMutableDictionary *_rootIdentityToLayoutPublisherMap;
    NSMutableDictionary *_rootIdentityToCADisplayQueueMap;
    NSMapTable *_controllerToAssertionMap;
    NSString *_disableIdleSleepReason;
    SBDisplayPowerLogReporter *_powerLogReporter;
    NSHashTable *_factories;
    NSMutableDictionary *_identityToControllerMap;
    NSMutableDictionary *_identityToWindowingModeMap;
    os_unfair_lock_s _lock;
    NSHashTable *_lock_observers;
}


@property (readonly, copy, nonatomic) NSSet *connectedIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (readonly) Class superclass;


-(NSInteger)windowingModeForDisplay:(id)arg0 ;
-(id)_createAndActivateLayoutPublisherForConnectingDisplay:(id)arg0 ;
-(id)_signpostMetadataForController:(id)arg0 ;
-(id)addObserver:(id)arg0 ;
-(id)configurationForIdentity:(id)arg0 ;
-(id)initWithDisplayManager:(id)arg0 sceneManagerCoordinator:(id)arg1 assertionCoordinator:(id)arg2 powerLogReporter:(id)arg3 ;
-(id)layoutPublisherForDisplay:(id)arg0 ;
-(void)_beginMonitoringForConnectingDisplays;
-(void)_connectControllerWithInfo:(id)arg0 toDisplay:(id)arg1 configuration:(id)arg2 ;
-(void)_deactivateLayoutPublisher:(id)arg0 forDisconnectingDisplay:(id)arg1 ;
-(void)assertionCoordinator:(id)arg0 activeAssertionPreferencesHaveChanged:(id)arg1 ;
-(void)dealloc;
-(void)displayMonitor:(id)arg0 didConnectIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 didUpdateIdentity:(id)arg1 withConfiguration:(id)arg2 ;
-(void)displayMonitor:(id)arg0 willDisconnectIdentity:(id)arg1 ;
-(void)registerDisplayControllerProvider:(id)arg0 ;
-(void)updateTransformsWithCompletion:(id)arg0 ;


@end


#endif