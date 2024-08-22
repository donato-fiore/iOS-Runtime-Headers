// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTEREXTENSIONRELOADCONFIGURATIONOPERATION_H
#define PBFPOSTEREXTENSIONRELOADCONFIGURATIONOPERATION_H

@class NSBlockOperation, NSMutableArray, PRSPosterUpdateSessionInfo, PRSPosterPathsAssertion, RBSAssertion, CLInUseAssertion, NSString, NSError, PRSServerPosterPath, PRSPosterPath, PRUpdatingService;
@protocol PRUpdatingServiceObserver, PBFBehaviorAssertionObserver, OS_dispatch_group, PBFBehaviorAssertionProviding, PBFRuntimeAssertionProviding;



@interface PBFPosterExtensionReloadConfigurationOperation : NSBlockOperation <PRUpdatingServiceObserver, PBFBehaviorAssertionObserver>

 {
    NSMutableArray *_lock_completionObservers;
    os_unfair_recursive_lock_s _lock;
    PRSPosterUpdateSessionInfo *_sessionInfo;
    NSObject<OS_dispatch_group> *_lock_group;
    BOOL _lock_isFinished;
    PRSPosterPathsAssertion *_lock_postRefreshPosterPathsAssertion;
    RBSAssertion *_lock_extensionPosterUpdateRuntimeAssertion;
    RBSAssertion *_lock_extensionPosterUpdateEntitledMemoryAssertion;
    CLInUseAssertion *_lock_locationInUseAssertion;
    NSInteger _reason;
    BOOL _locationInUse;
}


@property (readonly, nonatomic) NSObject<PBFBehaviorAssertionProviding> *behaviorAssertionProvider; // ivar: _behaviorAssertionProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didTimeout; // ivar: _didTimeout
@property (retain) NSError *error; // ivar: _error
@property (readonly, nonatomic) CGFloat executionFinishDate; // ivar: _lock_executionFinishDate
@property (readonly, nonatomic) CGFloat executionStartDate; // ivar: _lock_executionStateDate
@property (readonly, nonatomic) CGFloat executionTime;
@property (readonly, nonatomic) PRSServerPosterPath *existingConfigurationPath; // ivar: _existingConfigurationPath
@property (readonly) NSUInteger hash;
@property (readonly) PRSPosterPath *postRefreshPosterConfiguration;
@property (retain) PRSServerPosterPath *preRefreshPosterConfiguration; // ivar: _preRefreshPosterConfiguration
@property (readonly, nonatomic) NSObject<PBFRuntimeAssertionProviding> *runtimeAssertionProvider; // ivar: _runtimeAssertionProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (readonly, nonatomic, getter=hasUniqueSessionInfo) BOOL uniqueSessionInfo;
@property (readonly, nonatomic) PRUpdatingService *updatingService; // ivar: _updatingService


-(id)_userInfoForErrors;
-(id)initWithUpdatingService:(id)arg0 sessionInfo:(id)arg1 existingConfigurationPath:(id)arg2 locationInUse:(BOOL)arg3 runtimeAssertionProvider:(id)arg4 behaviorAssertionProvider:(id)arg5 timeout:(CGFloat)arg6 powerLogReason:(NSInteger)arg7 ;
-(void)_finishWithError:(id)arg0 postRefreshPosterPathsAssertion:(id)arg1 ;
-(void)_setup;
-(void)addCompletionObserver:(id)arg0 ;
-(void)assertionProviderDidAcquireEditingSessionAssertion:(id)arg0 forExtensionIdentifier:(id)arg1 ;
-(void)assertionProviderDidAcquireSnapshotterDisabledAssertion:(id)arg0 forExtensionIdentifier:(id)arg1 ;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)dealloc;
-(void)invalidateAssertionsWithCompletion:(id)arg0 ;
-(void)updatingService:(id)arg0 didInvalidateWithError:(id)arg1 ;


@end


#endif