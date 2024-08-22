// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRAITSSINGLESCENEWINDOW_H
#define SBTRAITSSINGLESCENEWINDOW_H

@class SBFWindow, FBScene;
@protocol UIScenePresenter;


#import "SBTraitsSceneParticipantDelegate.h"
#import "SBTraitsOrientedContentViewController.h"

@interface SBTraitsSingleSceneWindow : SBFWindow {
    FBScene *_scene;
    id<UIScenePresenter> *_scenePresenter;
    SBTraitsSceneParticipantDelegate *_sceneTraitsDelegate;
    SBTraitsOrientedContentViewController *_orientedContentViewController;
    SBTraitsSceneParticipantDelegate *_traitsDelegate;
}


@property (nonatomic, getter=isSceneContentVisible) BOOL sceneContentVisible; // ivar: _sceneContentVisible


+(BOOL)_isSecure;
-(BOOL)isContentHidden;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 ;
-(id)rootViewController;
-(void)dealloc;
-(void)setHidden:(BOOL)arg0 ;
-(void)setupForScene:(id)arg0 withTraitsDelegate:(id)arg1 ;


@end


#endif