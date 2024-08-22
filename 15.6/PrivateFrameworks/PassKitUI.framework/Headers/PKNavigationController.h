// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKNAVIGATIONCONTROLLER_H
#define PKNAVIGATIONCONTROLLER_H

@class UINavigationController, UIView, UIImageView, UIVisualEffectView, NSString;
@protocol UINavigationControllerDelegate;



@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate>

 {
    BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
    NSUInteger _explicitlyDefinedSupportedInterfaceOrientations;
    UIView *_backgroundView;
    UIImageView *_wallpaperView;
    UIVisualEffectView *_blurView;
    BOOL _hasStatusBarStyleOverride;
    NSInteger _statusBarStyleOverride;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotate;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)_updateBarAppearanceForViewController:(id)arg0 ;
-(void)_updateWithWallpaperImage:(id)arg0 ;
-(void)dealloc;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNeedsNavigationBarUpdate;
-(void)setSupportedInterfaceOrientations:(NSUInteger)arg0 ;
-(void)setupBackgroundViewWithBlurEffect:(NSInteger)arg0 ;
-(void)setupWallpaper;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif