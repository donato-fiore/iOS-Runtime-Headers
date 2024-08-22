// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSCENEMANAGEROBSERVER_H
#define FBSCENEMANAGEROBSERVER_H

@class NSString;
@protocol BSDescriptionProviding, FBSceneWorkspaceDelegate, FBSceneManagerInternalObserver, FBSceneManagerDelegate_Private;

#import <Foundation/Foundation.h>


@interface FBSceneManagerObserver : NSObject <BSDescriptionProviding, FBSceneWorkspaceDelegate, FBSceneManagerInternalObserver, FBSceneManagerDelegate_Private>

 {
    NSUInteger _observerAddress;
    Class _observerClass;
    BOOL _isDelegate;
    BOOL _supportLegacy;
    BOOL _internalObserver;
    BOOL _privateDelegate;
    BOOL _didCreateDEPRECATED;
    BOOL _willDestroyDEPRECATED;
    BOOL _didDestroyDEPRECATED;
    BOOL _updatePreparedDEPRECATED;
    BOOL _updateAppliedDEPRECATED;
    BOOL _updateCompletedDEPRECATED;
    BOOL _didCreateSceneDEPRECATED;
    BOOL _willUpdateSceneDEPRECATED;
    BOOL _willCommitDEPRECATED;
    BOOL _didCommitDEPRECATED;
    BOOL _didCommitDEPRECATED2;
    BOOL _didReceiveActionsDEPRECATED;
    BOOL _willSynchronizeLEGACY;
    BOOL _didSynchronizeLEGACY;
    BOOL _didUpdateClientSettingsDEPRECATED;
    BOOL _didAddLEGACY;
    BOOL _willRemoveLEGACY;
    BOOL _interceptSceneUpdatesLEGACY;
    BOOL _clientDidConnectLEGACY;
    BOOL _didAdd;
    BOOL _willRemove;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) id *observer; // ivar: _observer
@property (readonly) Class superclass;


-(BOOL)isDelegate;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInternalObserver;
-(id)_initWithObserver:(id)arg0 supportLegacy:(BOOL)arg1 ;
-(id)_internalObserver;
-(id)_privateDelegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 supportLegacy:(BOOL)arg1 ;
-(id)initWithObserver:(id)arg0 supportLegacy:(BOOL)arg1 ;
-(id)sceneManager:(id)arg0 createDefaultTransitionContextForScene:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)sceneManager:(id)arg0 clientDidConnectWithHandshake:(id)arg1 ;
-(void)sceneManager:(id)arg0 didAddScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 interceptUpdateForScene:(id)arg1 withNewSettings:(id)arg2 ;
-(void)sceneManager:(id)arg0 scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)sceneManager:(id)arg0 scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 appliedWithContext:(id)arg2 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 completedWithContext:(id)arg2 error:(id)arg3 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 preparedWithContext:(id)arg2 ;
-(void)sceneManager:(id)arg0 willDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 willRemoveScene:(id)arg1 ;
-(void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg0 ;
-(void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg0 ;
-(void)workspace:(id)arg0 didAddScene:(id)arg1 ;
-(void)workspace:(id)arg0 willRemoveScene:(id)arg1 ;


@end


#endif