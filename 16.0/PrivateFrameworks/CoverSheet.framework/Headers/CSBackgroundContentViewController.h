// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSBACKGROUNDCONTENTVIEWCONTROLLER_H
#define CSBACKGROUNDCONTENTVIEWCONTROLLER_H

@class NSString, UIView<UIScenePresentation>, FBScene, UIView<CSWallpaperView>;
@protocol SBFBacklightSceneHostEnvironmentProviding, UIScenePresenter;


#import "CSCoverSheetViewControllerBase.h"
#import "CSBackgroundContentView.h"

@interface CSBackgroundContentViewController : CSCoverSheetViewControllerBase <SBFBacklightSceneHostEnvironmentProviding>



@property (readonly, nonatomic) CSBackgroundContentView *backgroundContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView<UIScenePresentation> *presentationView; // ivar: _presentationView
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView<CSWallpaperView> *wallpaperView;


-(BOOL)_canShowWhileLocked;
-(id)initWithScene:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)tapGestureRecognizerAction:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif