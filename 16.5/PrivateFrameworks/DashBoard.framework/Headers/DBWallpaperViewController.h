// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBWALLPAPERVIEWCONTROLLER_H
#define DBWALLPAPERVIEWCONTROLLER_H

@class UIViewController, NSString, FBScene, UIView<UIScenePresentation>, NSMutableDictionary;
@protocol FBSceneManagerObserver, FBSceneObserver, BSInvalidatable, DBEnvironment, UIScenePresenter;


#import "DBSceneUpdate.h"
#import "DBApplicationInfo.h"

@interface DBWallpaperViewController : UIViewController <FBSceneManagerObserver, FBSceneObserver, BSInvalidatable>



@property (retain, nonatomic) DBSceneUpdate *currentSceneUpdate; // ivar: _currentSceneUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (copy, nonatomic) NSString *requester; // ivar: _requester
@property (retain, nonatomic) FBScene *scene; // ivar: _scene
@property (retain, nonatomic) UIView<UIScenePresentation> *sceneHostView; // ivar: _sceneHostView
@property (copy, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (retain, nonatomic) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (retain, nonatomic) NSMutableDictionary *scenePresentersByIdentifier; // ivar: _scenePresentersByIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) DBApplicationInfo *wallpaperAppInfo; // ivar: _wallpaperAppInfo


-(id)initWithEnvironment:(id)arg0 ;
-(void)_sendSceneUpdate;
-(void)invalidate;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 updateForScene:(id)arg1 appliedWithContext:(id)arg2 ;
-(void)updateAppearanceForWallpaper;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif