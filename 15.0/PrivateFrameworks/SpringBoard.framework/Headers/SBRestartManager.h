// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRESTARTMANAGER_H
#define SBRESTARTMANAGER_H

@class NSMutableSet, FBSystemService, BSTransaction<SBStartupTransition>;
@protocol SBRestartManagerWorkspaceDataSource, SBRestartManagerDelegate;

#import <Foundation/Foundation.h>

#import "SBInitialRestartState.h"
#import "SBStartupTransitionController.h"
#import "SBRestartTransitionRequest.h"

@interface SBRestartManager : NSObject {
    SBInitialRestartState *_initialRestartState;
    SBStartupTransitionController *_startupController;
    id<SBRestartManagerWorkspaceDataSource> *_workspaceDataSource;
    BOOL _isShuttingDown;
    BOOL _isRestartImminent;
    NSMutableSet *_pendingExternallyControlledRestartReasons;
    FBSystemService *_systemService;
}


@property (weak, nonatomic) NSObject<SBRestartManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isPendingExit) BOOL pendingExit;
@property (readonly, nonatomic) SBRestartTransitionRequest *pendingRestartTransitionRequest; // ivar: _pendingRestartTransitionRequest
@property (readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition;


-(BOOL)_isPendingExitIncludingExternallyControlledReasons:(BOOL)arg0 ;
-(id)_initWithWorkspaceDataSource:(id)arg0 initialRestartState:(id)arg1 startupController:(id)arg2 systemService:(id)arg3 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithWorkspaceDataSource:(id)arg0 initialRestartState:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)___waitForeverForRunningBoardKill;
-(void)_addPendingExternallyControlledRestartReason:(id)arg0 ;
-(void)_doRestartForTransition:(int)arg0 ;
-(void)_exitIsImminent;
-(void)_killAllAppsForPendingExitWithReason:(NSInteger)arg0 description:(id)arg1 expiration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_persistStartupTransitionContextFromRebootContext:(id)arg0 ;
-(void)_persistStartupTransitionContextFromRestartRequest:(id)arg0 ;
-(void)_persistStartupTransitionContextFromShutdownContext:(id)arg0 ;
-(void)_postShutdownNotification;
-(void)_reallyRestartWithTransitionRequest:(id)arg0 ;
-(void)_removePendingExternallyControlledRestartReason:(id)arg0 ;
-(void)_restartWithTransitionRequest:(id)arg0 ;
-(void)_shutdownWithOptions:(NSUInteger)arg0 byUser:(BOOL)arg1 description:(id)arg2 ;
-(void)initializeAndRunStartupTransition:(id)arg0 ;
-(void)rebootForReason:(id)arg0 ;
-(void)rebootWithContext:(id)arg0 ;
-(void)restartWithTransitionRequest:(id)arg0 ;
-(void)shutdownForReason:(id)arg0 ;
-(void)shutdownWithContext:(id)arg0 ;


@end


#endif