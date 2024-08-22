// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPSCENECONTENTADAPTER_H
#define SBPIPSCENECONTENTADAPTER_H

@class SBPIPController<SBPIPControllerAdapterContextProviding>, NSMapTable, NSString;
@protocol SBLayoutStateTransitionObserver, SBPIPControllerAdapter;

#import <Foundation/Foundation.h>

#import "SBMainDisplaySceneManager.h"
#import "SBFloatingDockWindowLevelAssertion.h"

@interface SBPIPSceneContentAdapter : NSObject <SBLayoutStateTransitionObserver, SBPIPControllerAdapter>

 {
    SBPIPController<SBPIPControllerAdapterContextProviding> *_pipController;
    NSInteger _pipContentType;
    NSMapTable *_sceneHandleToContainerViewController;
    SBMainDisplaySceneManager *_sceneManager;
    NSInteger _effectiveEnvironmentMode;
    SBFloatingDockWindowLevelAssertion *_dockWindowLevelAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isPictureInPictureActiveForPIPController:(id)arg0 ;
-(BOOL)isPresentingPictureInPictureForPIPController:(id)arg0 applicationBundleIdentifier:(id)arg1 ;
-(BOOL)isStartingStoppingOrCancellingPictureInPictureForPIPController:(id)arg0 ;
-(BOOL)isStoppingOrCancellingPictureForPIPController:(id)arg0 applicationWithBundleIdentifier:(id)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(BOOL)pipController:(id)arg0 willBeginPIPInterruptionForAssertion:(id)arg1 ;
-(BOOL)shouldStartPictureInPictureForPIPController:(id)arg0 applicationWithProcessIdentifierEnteringBackground:(int)arg1 scenePersistenceIdentifier:(id)arg2 ;
-(NSInteger)contentTypeForPIPController:(id)arg0 ;
-(NSInteger)tetheringModeForScenePersistenceIdentifier:(id)arg0 ;
-(id)containerViewControllerForHandle:(id)arg0 ;
-(id)initWithPIPContentType:(NSInteger)arg0 sceneManager:(id)arg1 ;
-(void)_recalculateLevelAssertions;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)pipController:(id)arg0 didAddContainerViewController:(id)arg1 ;
-(void)pipController:(id)arg0 willRemoveContainerViewController:(id)arg1 ;
-(void)setPIPController:(id)arg0 ;
-(void)windowLevelDidChangeForPIPController:(id)arg0 ;
-(void)windowVisibilityDidChangeForPIPController:(id)arg0 ;


@end


#endif