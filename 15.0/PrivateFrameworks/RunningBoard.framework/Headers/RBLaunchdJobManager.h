// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBLAUNCHDJOBMANAGER_H
#define RBLAUNCHDJOBMANAGER_H

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol RBLaunchdInterfacing;

#import <Foundation/Foundation.h>

#import "RBPersonaManager.h"

@interface RBLaunchdJobManager : NSObject {
    NSMutableDictionary *_lock_jobsByIdentifier;
    os_unfair_lock_s _lock;
    id<RBLaunchdInterfacing> *_launchdInterface;
    RBPersonaManager *_personaManager;
    NSMutableOrderedSet *_lock_reslideIdentities;
}




+(id)lastExitStatusForLabel:(id)arg0 error:(*id)arg1 ;
-(BOOL)_isRunningBoardLaunched:(id)arg0 ;
-(BOOL)_removeJobWithInstance:(id)arg0 orJob:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeJobWithInstance:(id)arg0 error:(*id)arg1 ;
-(id)_createAndSubmitExtensionJob:(id)arg0 UUID:(id)arg1 error:(*id)arg2 ;
-(id)_createLaunchdJobWithIdentity:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)_generateDataWithIdentity:(id)arg0 context:(id)arg1 ;
-(id)createAndLaunchWithIdentity:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)initWithLaunchdInterface:(id)arg0 personaManager:(id)arg1 ;
-(id)synchronizeJobs;
-(unsigned int)_personaForIdentity:(id)arg0 context:(id)arg1 ;
-(void)_addReslideIdentityIfNeeded:(id)arg0 exitStatus:(id)arg1 ;
// -(void)invokeOnProcessDeath:(id)arg0 handler:(id)arg1 onQueue:(unk)arg2  ;


@end


#endif