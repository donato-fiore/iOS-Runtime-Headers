// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPUISPOTLIGHTSCENEMANAGER_H
#define SPUISPOTLIGHTSCENEMANAGER_H

@class NSHashTable, RBSAssertion, FBSDisplayLayoutMonitor, RBSProcessHandle, BSTimer;
@protocol SPUISpotlightSceneManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SPUIAppService.h"

@interface SPUISpotlightSceneManager : NSObject {
    SPUIAppService *_appService;
}


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


@end


#endif