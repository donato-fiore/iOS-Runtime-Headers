// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUISPOTLIGHTSCENEMANAGER_H
#define SPUISPOTLIGHTSCENEMANAGER_H

@class RBSAssertion, NSHashTable, FBSDisplayLayoutMonitor, RBSProcessHandle, BSTimer;
@protocol SPUISpotlightSceneManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SPUIAppService.h"

@interface SPUISpotlightSceneManager : NSObject {
    SPUIAppService *_appService;
}


@property (retain) RBSAssertion *backgroundingAssertions; // ivar: _backgroundingAssertions
@property (weak, nonatomic) NSObject<SPUISpotlightSceneManagerDelegate> *delegate; // ivar: _delegate
@property (retain) NSHashTable *foregroundScenes; // ivar: _foregroundScenes
@property (retain) RBSAssertion *initializationAssertions; // ivar: _initializationAssertions
@property (retain) FBSDisplayLayoutMonitor *layoutMonitor; // ivar: _layoutMonitor
@property (retain) NSHashTable *managedScenes; // ivar: _managedScenes
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) RBSProcessHandle *spotlightProcessHandle; // ivar: _spotlightProcessHandle
@property (retain) BSTimer *watchdogTimer; // ivar: _watchdogTimer


+(id)sharedManager;
-(id)init;
-(void)addScene:(id)arg0 ;
-(void)applyAssertionAsNeeded;
-(void)launchSpotlightIfNeededWithForegroundPriority:(BOOL)arg0 ;
-(void)removeScene:(id)arg0 ;
-(void)sceneWillBackground:(id)arg0 ;
-(void)sceneWillForeground:(id)arg0 ;
-(void)spendMoreTimeReleasingMemory;


@end


#endif