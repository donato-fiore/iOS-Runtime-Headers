// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRRENDERINGSCENEVIEWCONTROLLER_H
#define PRRENDERINGSCENEVIEWCONTROLLER_H

@class FBSMutableSceneSettings, UIButton;
@protocol PRRenderingEnvironmentViewControllerDelegate;


#import "PRSceneViewController.h"
#import "PRPosterEnvironmentImpl.h"

@interface PRRenderingSceneViewController : PRSceneViewController <PRRenderingEnvironmentViewControllerDelegate>

 {
    FBSMutableSceneSettings *_settings;
    PRPosterEnvironmentImpl *_environment;
    UIButton *_button;
}




+(id)role;
-(id)initWithProvider:(id)arg0 contents:(id)arg1 previewing:(BOOL)arg2 ;
-(void)_updateSceneSettings:(id)arg0 transitionContext:(id)arg1 ;
-(void)doThing;
-(void)environmentViewController:(id)arg0 didUpdateEnvironment:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif