// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBAPPLICATIONSCENEVIEWCONTROLLER_H
#define DBAPPLICATIONSCENEVIEWCONTROLLER_H

@class UIViewController, NSString, FBScene, UIView<UIScenePresentation>, NSMutableDictionary;
@protocol FBSceneManagerObserver, FBSceneObserver, DBDashboardWorkspaceEntityPresenting, DBEnvironment, BSInvalidatable, UIScenePresenter;


#import "DBApplicationInfo.h"
#import "DBSceneUpdate.h"

@interface DBApplicationSceneViewController : UIViewController <FBSceneManagerObserver, FBSceneObserver, DBDashboardWorkspaceEntityPresenting>



@property (retain, nonatomic) UIViewController *alertViewController; // ivar: _alertViewController
@property (retain, nonatomic) DBApplicationInfo *applicationInfo; // ivar: _applicationInfo
@property (retain, nonatomic) DBSceneUpdate *currentSceneUpdate; // ivar: _currentSceneUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<BSInvalidatable> *layoutElementAssertion; // ivar: _layoutElementAssertion
@property (retain, nonatomic) DBApplicationInfo *proxyApplicationInfo; // ivar: _proxyApplicationInfo
@property (copy, nonatomic) NSString *requester; // ivar: _requester
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (retain, nonatomic) UIView<UIScenePresentation> *sceneHostView; // ivar: _sceneHostView
@property (copy, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (retain, nonatomic) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (retain, nonatomic) NSMutableDictionary *scenePresentersByIdentifier; // ivar: _scenePresentersByIdentifier
@property (readonly) Class superclass;


-(BOOL)presentsFullScreen;
-(BOOL)presentsUnderStatusBar;
-(id)_displayLayoutElementIdentifier;
-(id)_initWithApplicationInfo:(id)arg0 proxyApplicationInfo:(id)arg1 environment:(id)arg2 ;
-(id)initWithApplicationInfo:(id)arg0 environment:(id)arg1 ;
-(id)initWithApplicationInfo:(id)arg0 proxyApplicationInfo:(id)arg1 environment:(id)arg2 ;
-(id)presentationViewWithIdentifier:(id)arg0 ;
-(void)_addAlertSubviewIfReady;
-(void)_removeAlertSubviewIfNecessary;
-(void)_requestDestroy;
-(void)_requestDismissal;
-(void)_updateSceneUI;
-(void)activateSceneWithSettings:(id)arg0 completion:(id)arg1 ;
-(void)backgroundSceneWithCompletion:(id)arg0 ;
-(void)deactivateSceneWithReasonMask:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)foregroundSceneWithSettings:(id)arg0 completion:(id)arg1 ;
-(void)handleEvent:(id)arg0 ;
-(void)invalidatePresentationViewForIdentifier:(id)arg0 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 appliedWithContext:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif