// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSPOINTERCLIENTCONTROLLER_H
#define PSPOINTERCLIENTCONTROLLER_H

@class BSServiceConnection, NSCountedSet, NSMutableArray, NSString;
@protocol PSPointerDefaultServiceServerToClientInterface, PSPointerDefaultLaunchingServiceServerToClientInterface, BSInvalidatable, OS_dispatch_queue, PSPointerClientControllerDelegate;

#import <Foundation/Foundation.h>


@interface PSPointerClientController : NSObject <PSPointerDefaultServiceServerToClientInterface, PSPointerDefaultLaunchingServiceServerToClientInterface, BSInvalidatable>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BSServiceConnection *_nonLaunchingConnection;
    BSServiceConnection *_launchingConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSCountedSet *_persistentPointerHideReasons;
    NSCountedSet *_persistentPointerShowReasons;
    NSMutableArray *_serviceKeepAliveAssertions;
    os_unfair_lock_s _invalidationAndConfigurationLock;
    BOOL _hasActivatedLaunchingConnection;
    BOOL _isConnectionActive;
}


@property (readonly, nonatomic, getter=isClientInteractionEnabled) BOOL clientInteractionEnabled;
@property (readonly, nonatomic) NSInteger clientInteractionState; // ivar: _clientInteractionState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSPointerClientControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemCursorInteractionContextID; // ivar: _systemCursorInteractionContextID


-(id)_accessQueue_acquireServiceKeepAliveAssertion;
-(id)_connectionQueue_launchingConnection;
-(id)acquireServiceKeepAliveAssertion;
-(id)init;
-(id)persistentlyHidePointerAssertionForReason:(NSUInteger)arg0 ;
-(id)persistentlyShowPointerAssertionForReason:(NSUInteger)arg0 ;
-(void)_connectionQueue_handleLaunchingConnectionInterruption;
-(void)_connectionQueue_handleNonLaunchingConnectionActivation;
-(void)_connectionQueue_handleNonLaunchingConnectionInterruption;
-(void)_didInvalidateRemoteSources;
-(void)adjustedDecelerationTargetPointerPosition:(id)arg0 velocity:(id)arg1 inContextID:(id)arg2 cursorRegionLookupRadius:(id)arg3 cursorRegionLookupResolution:(id)arg4 lookupConeAngle:(id)arg5 completion:(id)arg6 ;
-(void)autohidePointerForReason:(NSUInteger)arg0 ;
-(void)clientInteractionStateDidChange:(id)arg0 ;
-(void)createContentMatchMoveSourcesWithCount:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)createPointerPortalSourceCollectionWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)invalidateContentMatchMoveSources:(id)arg0 completion:(id)arg1 ;
-(void)invalidatePointerPortalSourceCollection:(id)arg0 completion:(id)arg1 ;
-(void)setActiveHoverRegion:(id)arg0 transitionCompletion:(id)arg1 ;


@end


#endif