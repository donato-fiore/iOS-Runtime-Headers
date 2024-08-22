// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBUPDATESCENETRANSACTION_H
#define FBUPDATESCENETRANSACTION_H

@class FBSSceneDefinition, FBSSceneParameters, NSString, FBSSceneSettings, FBSSceneSpecification, FBSSceneTransitionContext;
@protocol FBSceneObserver, FBSynchronizedTransaction, FBSynchronizedTransactionDelegate;


#import "FBTransaction.h"
#import "FBSceneManager.h"
#import "FBWaitForSceneDestructionTransaction.h"
#import "FBScene.h"

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneObserver, FBSynchronizedTransaction>

 {
    FBSceneManager *_sceneManager;
    FBSSceneDefinition *_definition;
    FBSSceneParameters *_parameters;
    FBWaitForSceneDestructionTransaction *_destructionTransaction;
    NSUInteger _transactionID;
    BOOL _readyToCommit;
    BOOL _didCommit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL destroyed; // ivar: _destroyed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBSSceneSettings *newSettings;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSString *sceneIdentifier; // ivar: _sceneID
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<FBSynchronizedTransactionDelegate> *synchronizationDelegate; // ivar: _synchronizationDelegate
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext; // ivar: _transitionContext
@property (nonatomic) BOOL waitsForSceneCommit; // ivar: _waitsForSceneCommit


-(BOOL)_canBeInterrupted;
-(BOOL)isReadyForSynchronizedCommit;
-(id)_customizedDescriptionProperties;
-(id)_initWithSceneDefinition:(id)arg0 parameters:(id)arg1 transitionContext:(id)arg2 ;
-(id)initWithSceneDefinition:(id)arg0 parameters:(id)arg1 transitionContext:(id)arg2 ;
-(id)initWithSceneIdentifier:(id)arg0 process:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(id)initWithSceneToUpdate:(id)arg0 newSettings:(id)arg1 transitionContext:(id)arg2 ;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg0 ;
-(void)_commitSceneOrWait;
-(void)_commitSceneUpdate:(id)arg0 ;
-(void)_createScene;
-(void)_didComplete;
-(void)_noteDidCommit:(BOOL)arg0 ;
-(void)_noteDidCreate;
-(void)_noteWillCommit;
-(void)_noteWillUpdate;
-(void)_performCommit;
-(void)_updateScene;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)performSynchronizedCommit;
-(void)removeObserver:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;


@end


#endif