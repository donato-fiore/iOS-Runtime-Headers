// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFSCENEWORKSPACECONTROLLER_H
#define SBFSCENEWORKSPACECONTROLLER_H

@class NSMutableSet, NSString, FBSceneWorkspace;
@protocol SBFSceneWorkspaceControllerDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBFSceneWorkspaceController : NSObject <SBFSceneWorkspaceControllerDelegate, BSInvalidatable>



@property (retain, nonatomic) NSMutableSet *allowedClientProcessIdentities; // ivar: _allowedClientProcessIdentities
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFSceneWorkspaceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FBSceneWorkspace *sceneWorkspace; // ivar: _sceneWorkspace
@property (readonly, copy, nonatomic) NSString *sceneWorkspaceIdentifier;
@property (retain, nonatomic) NSMutableSet *scenes; // ivar: _scenes
@property (retain, nonatomic) NSMutableSet *scenesActivatedUponClientConnection; // ivar: _scenesActivatedUponClientConnection
@property (retain, nonatomic) NSMutableSet *scenesKeptActiveWhileForeground; // ivar: _scenesKeptActiveWhileForeground
@property (readonly) Class superclass;


-(BOOL)enumerateScenesWithBlock:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 delegate:(id)arg1 ;
-(id)sceneFromIdentityToken:(id)arg0 ;
-(id)sceneFromIdentityTokenStringRepresentation:(id)arg0 ;
-(void)activateAllScenesIfAtLeastOneIsActive;
-(void)createSceneForProcessIdentity:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneDidDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)setScene:(id)arg0 shouldActivateUponClientConnection:(BOOL)arg1 ;
-(void)setScene:(id)arg0 shouldBeKeptActiveWhileForeground:(BOOL)arg1 ;
-(void)workspace:(id)arg0 clientDidConnectWithHandshake:(id)arg1 ;
-(void)workspace:(id)arg0 didAddScene:(id)arg1 ;
-(void)workspace:(id)arg0 willRemoveScene:(id)arg1 ;


@end


#endif