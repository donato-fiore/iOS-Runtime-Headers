// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSCENEHOLDERVIEWCONTROLLER_H
#define HUSCENEHOLDERVIEWCONTROLLER_H

@class UIViewController, RBSProcessIdentity, FBSSceneIdentity, FBApplicationUpdateScenesTransaction, FBScene, NSString, UIButton;
@protocol FBSceneObserver, UIScenePresenter;



@interface HUSceneHolderViewController : UIViewController <FBSceneObserver>

 {
    RBSProcessIdentity *_processIdentity;
    FBSSceneIdentity *_sceneIdentity;
    BOOL _visible;
    FBApplicationUpdateScenesTransaction *_transaction;
    FBScene *_scene;
    id<UIScenePresenter> *_scenePresenter;
}


@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)_lookupScene;
-(void)_updateScene;
-(void)close:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif