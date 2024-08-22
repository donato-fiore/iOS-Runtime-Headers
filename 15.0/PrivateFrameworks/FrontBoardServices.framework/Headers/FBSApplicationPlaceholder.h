// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSAPPLICATIONPLACEHOLDER_H
#define FBSAPPLICATIONPLACEHOLDER_H

@class LSApplicationProxy, NSMutableSet;
@protocol OS_dispatch_queue, FBSApplicationPlaceholderProgress;


#import "FBSBundleInfo.h"
#import "FBSApplicationPlaceholderProgress.h"
#import "FBSApplicationLibrary.h"

@interface FBSApplicationPlaceholder : FBSBundleInfo {
    LSApplicationProxy *_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSApplicationPlaceholderProgress *_queue_progress;
    NSMutableSet *_queue_observers;
}


@property (weak, nonatomic) FBSApplicationLibrary *appLibrary; // ivar: _appLibrary
@property (readonly, nonatomic, getter=isCancellable) BOOL cancellable;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property (readonly, nonatomic, getter=isPrioritizable) BOOL prioritizable;
@property (readonly, nonatomic) NSObject<FBSApplicationPlaceholderProgress> *progress;
@property (retain, nonatomic, getter=_proxy, setter=_setProxy:) LSApplicationProxy *proxy;
@property (readonly, nonatomic, getter=isResumable) BOOL resumable;


+(id)_callOutQueue;
+(id)_sharedQueue;
-(BOOL)_canPerformAction:(NSUInteger)arg0 ;
-(BOOL)_performAction:(NSUInteger)arg0 withResult:(id)arg1 ;
-(BOOL)_queue_canPerformAction:(NSUInteger)arg0 ;
-(BOOL)_queue_isCloudDemoted;
-(BOOL)cancel;
-(BOOL)cancelWithResult:(id)arg0 ;
-(BOOL)isRestricted;
-(BOOL)pause;
-(BOOL)pauseWithResult:(id)arg0 ;
-(BOOL)prioritize;
-(BOOL)prioritizeWithResult:(id)arg0 ;
-(BOOL)resume;
-(BOOL)resumeWithResult:(id)arg0 ;
-(CGFloat)percentComplete;
-(NSUInteger)_queue_supportedActions;
-(NSUInteger)installPhase;
-(NSUInteger)installState;
-(NSUInteger)installType;
-(id)_initWithApplicationProxy:(id)arg0 ;
-(id)_initWithBundleIdentifier:(id)arg0 url:(id)arg1 ;
-(id)_initWithBundleProxy:(id)arg0 url:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescriptionBuilder;
-(void)_cancelWithResult:(id)arg0 ;
-(void)_dispatchToObserversWithBlock:(id)arg0 ;
-(void)_noteChangedSignificantly;
-(void)_pauseWithResult:(id)arg0 ;
-(void)_prioritizeWithResult:(id)arg0 ;
-(void)_queue_noteChangedSignificantly:(id)arg0 ;
-(void)_reloadFromProxy:(id)arg0 ;
-(void)_reloadProgress;
-(void)_resumeWithResult:(id)arg0 ;
-(void)_sendToObserversPlaceholderDidChangeSignificantly;
-(void)_sendToObserversPlaceholderProgressDidUpdate;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif