// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIDEBARVIEWCONTROLLER_H
#define SIDEBARVIEWCONTROLLER_H

@class UIViewController, UIBlurEffect, UIVisualEffectView, UIView, UIImageView;



@interface SidebarViewController : UIViewController {
    UIBlurEffect *_backgroundBlurEffect;
    UIVisualEffectView *_backdrop;
    UIView *_verticalSeparator;
    UIView *_wallpaperView;
    UIImageView *_wallpaperImageView;
}


@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, nonatomic) CGFloat separatorWidth;
@property (nonatomic) UIEdgeInsets wallpaperObscuredInsets; // ivar: _wallpaperObscuredInsets


-(void)_setWallpaperImage:(id)arg0 ;
-(void)_springBoardWallpaperDidChange:(id)arg0 ;
-(void)_updateWallpaperImage;
-(void)_updateWallpaperInset;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif