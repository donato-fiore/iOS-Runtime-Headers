// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPLPEOPLEENTITYVIEWCONTROLLER_H
#define PPLPEOPLEENTITYVIEWCONTROLLER_H

@class UIViewController, NSString, UIView<UIScenePresentation>, NSURL, FBScene;
@protocol PPLPeopleAppSceneRequester, PPLPeopleEntityViewControllerDelegate, UIScenePresenter;


#import "PPLPeopleEntityMetadata.h"
#import "PPLPeopleAppSceneManager.h"

@interface PPLPeopleEntityViewController : UIViewController <PPLPeopleAppSceneRequester>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PPLPeopleEntityViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView<UIScenePresentation> *hostView; // ivar: _hostView
@property (readonly, nonatomic) CGRect initialSceneFrame;
@property (retain, nonatomic) PPLPeopleEntityMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSURL *personURL;
@property (retain, nonatomic) NSObject<UIScenePresenter> *presenter; // ivar: _presenter
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) PPLPeopleAppSceneManager *sceneManager; // ivar: _sceneManager
@property (readonly, nonatomic) UIEdgeInsets sceneSafeAreaInsetPortrait;
@property (readonly) Class superclass;


-(id)initWithMetadata:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 sceneManager:(id)arg1 ;
-(struct CGRect )sceneSettingsFrameFromRect:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )safeAreaInsetFromSceneSettings:(id)arg0 ;
-(void)sceneManager:(id)arg0 didGrantOwnershipOfScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didRevokeOwnershipOfScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 sceneDidRequestDismissal:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif