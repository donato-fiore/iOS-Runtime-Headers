// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMESCREENPREVIEWVIEW_H
#define SBHOMESCREENPREVIEWVIEW_H

@class UIView, UIStatusBar, SBRootFolderController, NSString, SBFloatingDockViewController, SBHIconManager;
@protocol SBIconViewProviding, SBIconViewDelegate, SBDockOffscreenFractionModifying;


#import "_SBHomeScreenFolderDelegate.h"
#import "SBWindowSceneStatusBarManager.h"

@interface SBHomeScreenPreviewView : UIView <SBIconViewProviding, SBIconViewDelegate>

 {
    UIView *_folderContent;
    UIView *_floatingDock;
    UIStatusBar *_statusBar;
    SBRootFolderController *_rootFolderController;
    _SBHomeScreenFolderDelegate *_folderDelegate;
    SBWindowSceneStatusBarManager *_windowSceneStatusBarManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SBDockOffscreenFractionModifying> *dockOffscreenModifier; // ivar: _dockOffscreenModifier
@property (readonly, nonatomic) SBFloatingDockViewController *floatingDockViewController; // ivar: _floatingDockViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (readonly, nonatomic) NSUInteger snapshotOptions; // ivar: _snapshotOptions
@property (readonly) Class superclass;


-(BOOL)isIconViewRecycled:(id)arg0 ;
-(id)behaviorDelegateForIconView:(id)arg0 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg0 ;
-(id)iconView:(id)arg0 backgroundViewForComponentsOfType:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 iconManager:(id)arg1 wallpaperController:(id)arg2 options:(NSUInteger)arg3 wallpaperImage:(id)arg4 listView:(id)arg5 ;
-(id)makeFolderContentWithWallpaperController:(id)arg0 legibilitySettings:(id)arg1 options:(NSUInteger)arg2 ;
-(id)makeIconFolderContentWithWallpaperController:(id)arg0 legibilitySettings:(id)arg1 options:(NSUInteger)arg2 ;
-(id)makeSilhouetteFolderContent;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)recycleIconView:(id)arg0 ;


@end


#endif