// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFRUNTIMEASSERTIONMANAGER_H
#define PBFRUNTIMEASSERTIONMANAGER_H

@class NSHashTable, NSMapTable, NSString;
@protocol PBFRuntimeAssertionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PBFRuntimeAssertionManager : NSObject <PBFRuntimeAssertionProviding, BSInvalidatable>

 {
    os_unfair_lock_s _stateLock;
    BOOL _stateLock_invalidated;
    NSHashTable *_stateLock_knownAssertions;
    NSMapTable *_stateLock_acquistionDateForAssertion;
    NSMapTable *_stateLock_acquistionInvalidationHandlerForAssertion;
    id<BSInvalidatable> *_stateCaptureSentinel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_buildRBSAssertionForTarget:(id)arg0 assertionIdentifier:(id)arg1 explanation:(id)arg2 invalidationHandler:(id)arg3 ;
-(id)_stateLock_debugDescriptionForTarget:(id)arg0 ;
-(id)acquireAssertion:(id)arg0 reason:(id)arg1 target:(id)arg2 invalidationHandler:(id)arg3 ;
-(id)acquirePosterUpdateMemoryAssertionForReason:(id)arg0 target:(id)arg1 auditToken:(id)arg2 posterProviderBundleIdentifier:(id)arg3 ;
-(id)acquirePosterUpdateRuntimeAssertionForReason:(id)arg0 target:(id)arg1 ;
-(id)acquirePrewarmRuntimeAssertionForReason:(id)arg0 target:(id)arg1 invalidationHandler:(id)arg2 ;
-(id)init;
-(void)_runningBoardAssertionStateDidUpdate:(id)arg0 assertionIdentifier:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif