// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSCENEMANAGER_H
#define FBSCENEMANAGER_H

@protocol FBSceneManagerDelegate;

#import <Foundation/Foundation.h>

#import "FBSceneWorkspace.h"

@interface FBSceneManager : NSObject {
    FBSceneWorkspace *_workspace;
}


@property (nonatomic, setter=_setSuppressConnectionHandshakes:) BOOL _suppressConnectionHandshakes;
@property (weak, nonatomic) NSObject<FBSceneManagerDelegate> *delegate;


+(id)keyboardScene;
+(id)observeKeyboardSceneAvailability:(id)arg0 ;
+(id)sharedInstance;
+(void)_clearKeyboardScene;
+(void)setKeyboardScene:(id)arg0 ;
+(void)synchronizeChanges:(id)arg0 ;
-(BOOL)_isSynchronizingSceneUpdates;
-(id)_createSceneWithDefinition:(id)arg0 settings:(id)arg1 initialClientSettings:(id)arg2 transitionContext:(id)arg3 fromRemnant:(id)arg4 usingClientProvider:(id)arg5 completion:(id)arg6 ;
-(id)createLegacySceneFromRemnant:(id)arg0 withSettings:(id)arg1 transitionContext:(id)arg2 ;
-(id)createSceneFromRemnant:(id)arg0 withSettings:(id)arg1 transitionContext:(id)arg2 ;
-(id)createSceneWithDefinition:(id)arg0 ;
-(id)createSceneWithDefinition:(id)arg0 initialParameters:(id)arg1 ;
-(id)createSceneWithIdentifier:(id)arg0 parameters:(id)arg1 clientProvider:(id)arg2 transitionContext:(id)arg3 ;
-(id)createSceneWithIdentifier:(id)arg0 settings:(id)arg1 initialClientSettings:(id)arg2 clientProvider:(id)arg3 transitionContext:(id)arg4 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)newSceneIdentityTokenForIdentity:(id)arg0 ;
-(id)sceneFromIdentityToken:(id)arg0 ;
-(id)sceneFromIdentityTokenStringRepresentation:(id)arg0 ;
-(id)sceneWithIdentifier:(id)arg0 ;
-(id)scenesPassingTest:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)destroyScene:(id)arg0 withTransitionContext:(id)arg1 ;
-(void)enumerateScenesWithBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif