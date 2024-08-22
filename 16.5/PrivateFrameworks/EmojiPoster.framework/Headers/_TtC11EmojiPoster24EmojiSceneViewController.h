// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11EMOJIPOSTER24EMOJISCENEVIEWCONTROLLER_H
#define _TTC11EMOJIPOSTER24EMOJISCENEVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC11EmojiPoster24EmojiSceneViewController : UIViewController {
    ? configuration;
    ? currentLayoutStyle;
    ? currentSizeVariant;
    ? overlayLayer;
    ? sceneView;
    ? wakeProgress;
    ? unlockProgress;
    ? scene;
}


@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif