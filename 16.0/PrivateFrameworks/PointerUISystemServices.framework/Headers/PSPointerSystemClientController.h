// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSPOINTERSYSTEMCLIENTCONTROLLER_H
#define PSPOINTERSYSTEMCLIENTCONTROLLER_H

@class FBSceneWorkspace, RBSProcessIdentity, NSString;
@protocol FBSceneWorkspaceDelegate, FBSceneDelegate, PSPointerSystemClientControllerDelegate;

#import <Foundation/Foundation.h>


@interface PSPointerSystemClientController : NSObject <FBSceneWorkspaceDelegate, FBSceneDelegate>

 {
    FBSceneWorkspace *_sceneWorkspace;
    RBSProcessIdentity *_pointerUIDProcessIdentity;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSPointerSystemClientControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_sceneIdentifierForIdentifierPrefix:(id)arg0 displayConfiguration:(id)arg1 ;
-(id)init;
-(void)_invalidateSceneForIdentifierPrefix:(id)arg0 displayConfiguration:(id)arg1 ;
-(void)_prepareSceneForIdentifierPrefix:(id)arg0 displayConfiguration:(id)arg1 ;
-(void)invalidateScenesForPointerForDisplayConfiguration:(id)arg0 ;
-(void)prepareScenesForPointerForDisplayConfiguration:(id)arg0 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneWillDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)workspace:(id)arg0 clientDidConnectWithHandshake:(id)arg1 ;
-(void)workspace:(id)arg0 didAddScene:(id)arg1 ;
-(void)workspace:(id)arg0 willRemoveScene:(id)arg1 ;


@end


#endif