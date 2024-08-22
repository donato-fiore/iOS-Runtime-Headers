// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSCENEMANAGER_H
#define FBSCENEMANAGER_H

@class NSString;
@protocol FBWorkspaceEventDispatcherTarget, FBSceneManagerDelegate;

#import <Foundation/Foundation.h>

#import "FBSceneWorkspace.h"

@interface FBSceneManager : NSObject <FBWorkspaceEventDispatcherTarget>

 {
    FBSceneWorkspace *_workspace;
}


@property (nonatomic, setter=_setSuppressConnectionHandshakes:) BOOL _suppressConnectionHandshakes; // ivar: _suppressConnectionHandshakes
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBSceneManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)keyboardScene;
+(id)observeKeyboardSceneAvailability:(id)arg0 ;
+(id)sharedInstance;
+(void)_clearKeyboardScene;
+(void)setKeyboardScene:(id)arg0 ;
+(void)synchronizeChanges:(id)arg0 ;
-(BOOL)_isSynchronizingSceneUpdates;
-(id)_createSceneWithDefinition:(id)arg0 settings:(id)arg1 initialClientSettings:(id)arg2 transitionContext:(id)arg3 fromRemnant:(id)arg4 usingClientProvider:(id)arg5 completion:(id)arg6 ;
-(id)createSceneFromRemnant:(id)arg0 withSettings:(id)arg1 transitionContext:(id)arg2 ;
-(id)createSceneWithDefinition:(id)arg0 ;
-(id)createSceneWithDefinition:(id)arg0 initialParameters:(id)arg1 ;
-(id)createSceneWithIdentifier:(id)arg0 parameters:(id)arg1 clientProvider:(id)arg2 transitionContext:(id)arg3 ;
-(id)createSceneWithIdentifier:(id)arg0 settings:(id)arg1 initialClientSettings:(id)arg2 clientProvider:(id)arg3 transitionContext:(id)arg4 ;
-(id)init;
-(id)newSceneIdentityTokenForIdentity:(id)arg0 ;
-(id)sceneFromIdentityToken:(id)arg0 ;
-(id)sceneFromIdentityTokenStringRepresentation:(id)arg0 ;
-(id)sceneWithIdentifier:(id)arg0 ;
-(id)scenesPassingTest:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)destroyScene:(id)arg0 withTransitionContext:(id)arg1 ;
-(void)didReceiveHandshake:(id)arg0 ;
-(void)enumerateScenesWithBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif