// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUNIVERSALCONTROLSERVER_H
#define SBUNIVERSALCONTROLSERVER_H

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableSet, NSMutableDictionary, NSString;
@protocol SBSUniversalControlClientToServerInterface, BSServiceConnectionListenerDelegate, BSDescriptionStreamable, OS_dispatch_queue, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBWorkspaceKeyboardFocusController.h"
#import "SBKeyboardSuppressionManager.h"

@interface SBUniversalControlServer : NSObject <SBSUniversalControlClientToServerInterface, BSServiceConnectionListenerDelegate, BSDescriptionStreamable>

 {
    BSServiceConnectionListener *_connectionListener;
    FBServiceClientAuthenticator *_clientAuthenticator;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_connections;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_keyboardDisabledReasonsByPID;
    NSMutableDictionary *_lock_screenEdgesOwnedByPID;
    id<BSInvalidatable> *_lock_keyboardFocusAssertion;
    id<BSInvalidatable> *_lock_keyboardSuppressionAssertion;
    NSUInteger _lock_externallyControlledScreenEdgeMask;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    SBKeyboardSuppressionManager *_keyboardSuppressionManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger externalProcessActiveOnScreenEdges; // ivar: _externalProcessActiveOnScreenEdges
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithKeyboardFocusController:(id)arg0 keyboardSuppressionManager:(id)arg1 ;
-(void)_lock_reevaluateKeyboardFocusDisablement;
-(void)_lock_reevaluateScreenEdgeOwnership;
-(void)_queue_addConnection:(id)arg0 ;
-(void)_queue_removeConnection:(id)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)setKeyboardFocusDisabled:(id)arg0 reason:(id)arg1 ;
-(void)setScreenEdgesOwned:(id)arg0 reason:(id)arg1 ;


@end


#endif