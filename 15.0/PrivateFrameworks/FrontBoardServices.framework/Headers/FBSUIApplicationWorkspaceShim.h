// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSUIAPPLICATIONWORKSPACESHIM_H
#define FBSUIAPPLICATIONWORKSPACESHIM_H

@class NSString;
@protocol FBSWorkspaceDelegate_Exiting, FBSUIApplicationWorkspaceDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "FBSSerialQueue.h"
#import "FBSUIApplicationWorkspace.h"
#import "FBSWorkspace.h"

@interface FBSUIApplicationWorkspaceShim : NSObject <FBSWorkspaceDelegate_Exiting>

 {
    FBSSerialQueue *_queue;
    FBSUIApplicationWorkspace *_original;
    FBSWorkspace *_workspace;
    id<FBSUIApplicationWorkspaceDelegate> *_delegate;
    id<BSInvalidatable> *_processExpirationObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithSerialQueue:(id)arg0 original:(id)arg1 ;
-(id)defaultShellEndpoint;
-(id)delegate;
-(id)sceneWithIdentifier:(id)arg0 ;
-(id)scenes;
-(void)enumerateScenesWithBlock:(id)arg0 ;
-(void)requestSceneCreationWithIdentifier:(id)arg0 initialClientSettings:(id)arg1 completion:(id)arg2 ;
-(void)requestSceneCreationWithInitialClientSettings:(id)arg0 completion:(id)arg1 ;
-(void)requestSceneFromEndpoint:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)setDelegate:(id)arg0 ;
-(void)workspace:(id)arg0 didCreateScene:(id)arg1 withTransitionContext:(id)arg2 completion:(id)arg3 ;
-(void)workspace:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)workspace:(id)arg0 willDestroyScene:(id)arg1 withTransitionContext:(id)arg2 completion:(id)arg3 ;
-(void)workspaceShouldExit:(id)arg0 withTransitionContext:(id)arg1 ;


@end


#endif