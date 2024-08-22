// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWORKSPACETRANSITIONREQUEST_H
#define SBWORKSPACETRANSITIONREQUEST_H

@class NSString, FBSDisplayConfiguration, FBSDisplayIdentity, NSSet, BSProcessHandle, NSUUID;
@protocol SBUIAnimationControllerTransitionContextProvider, SBWorkspaceApplicationSceneTransitionContextDelegate, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBLayoutStateTransitionCoordinator.h"
#import "SBWorkspaceApplicationSceneTransitionContext.h"
#import "SBWorkspaceTransientOverlayTransitionContext.h"
#import "SBWorkspace.h"

@interface SBWorkspaceTransitionRequest : NSObject <SBUIAnimationControllerTransitionContextProvider, SBWorkspaceApplicationSceneTransitionContextDelegate, BSDescriptionProviding>

 {
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    NSInteger _interfaceOrientation;
}


@property (retain, nonatomic) SBWorkspaceApplicationSceneTransitionContext *applicationContext; // ivar: _applicationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (copy, nonatomic) NSString *eventLabel; // ivar: _eventLabel
@property (readonly, nonatomic, getter=isFinalized) BOOL finalized; // ivar: _finalized
@property (readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isMainWorkspaceTransitionRequest;
@property (retain, nonatomic) BSProcessHandle *originatingProcess; // ivar: _originatingProcess
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
@property (retain, nonatomic) SBWorkspaceTransientOverlayTransitionContext *transientOverlayContext; // ivar: _transientOverlayContext
@property (readonly, copy, nonatomic) NSUUID *uniqueID; // ivar: _uniqueID
@property (readonly, nonatomic) SBWorkspace *workspace; // ivar: _workspace


-(id)_initWithWorkspace:(id)arg0 displayConfiguration:(id)arg1 ;
-(id)compactDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGRect )applicationTransitionContext:(id)arg0 frameForApplicationSceneEntity:(id)arg1 ;
-(void)declineWithReason:(id)arg0 ;
-(void)finalize;
-(void)modifyApplicationContext:(id)arg0 ;
-(void)modifyTransientOverlayContext:(id)arg0 ;


@end


#endif