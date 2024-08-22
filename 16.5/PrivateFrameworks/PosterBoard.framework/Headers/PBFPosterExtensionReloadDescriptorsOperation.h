// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTEREXTENSIONRELOADDESCRIPTORSOPERATION_H
#define PBFPOSTEREXTENSIONRELOADDESCRIPTORSOPERATION_H

@class NSBlockOperation, NSMutableArray, PRSPosterUpdateSessionInfo, PRSPosterPathsAssertion, RBSAssertion, NSString, NSError, NSArray, PRUpdatingService;
@protocol PRUpdatingServiceObserver, OS_dispatch_group, PBFRuntimeAssertionProviding;



@interface PBFPosterExtensionReloadDescriptorsOperation : NSBlockOperation <PRUpdatingServiceObserver>

 {
    NSMutableArray *_lock_completionObservers;
    os_unfair_recursive_lock_s _lock;
    BOOL _lock_isFinished;
    PRSPosterUpdateSessionInfo *_sessionInfo;
    NSInteger _powerLogReason;
    NSObject<OS_dispatch_group> *_lock_group;
    PRSPosterPathsAssertion *_lock_postRefreshPosterPathsAssertion;
    RBSAssertion *_lock_extensionPosterUpdateRuntimeAssertion;
    RBSAssertion *_lock_extensionPosterUpdateEntitledMemoryAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didTimeout; // ivar: _didTimeout
@property (retain) NSError *error; // ivar: _error
@property (readonly, nonatomic) CGFloat executionFinishDate; // ivar: _lock_executionFinishDate
@property (readonly, nonatomic) CGFloat executionStartDate; // ivar: _lock_executionStateDate
@property (readonly, nonatomic) CGFloat executionTime;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *postRefreshPosterDescriptors;
@property (copy) PRSPosterPathsAssertion *postRefreshPosterPathsAssertion; // ivar: _postRefreshPosterPathsAssertion
@property (readonly, copy) NSArray *preRefreshPosterDescriptors; // ivar: _preRefreshPosterDescriptors
@property (readonly, nonatomic) NSObject<PBFRuntimeAssertionProviding> *runtimeAssertionProvider; // ivar: _runtimeAssertionProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (readonly, nonatomic, getter=hasUniqueSessionInfo) BOOL uniqueSessionInfo;
@property (readonly, nonatomic) PRUpdatingService *updatingService; // ivar: _updatingService


-(id)_userInfoForErrors;
-(id)initWithUpdatingService:(id)arg0 extensionBundleIdentifier:(id)arg1 sessionInfo:(id)arg2 preRefreshPosterDescriptors:(id)arg3 runtimeAssertionProvider:(id)arg4 timeout:(CGFloat)arg5 powerLogReason:(NSInteger)arg6 ;
-(void)_finishWithError:(id)arg0 postRefreshPosterPathsAssertion:(id)arg1 ;
-(void)_fireCompletionObservers:(id)arg0 instance:(id)arg1 error:(id)arg2 ;
-(void)_setup;
-(void)addCompletionObserver:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)invalidateAssertionsWithCompletion:(id)arg0 ;
-(void)updatingService:(id)arg0 didInvalidateWithError:(id)arg1 ;


@end


#endif