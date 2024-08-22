// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMESCREENPREVIEWVIEW_H
#define SBHOMESCREENPREVIEWVIEW_H

@class UIView, SBRootFolderController, NSString, SBFloatingDockViewController, SBHIconManager;
@protocol SBIconViewProviding, SBIconViewDelegate, SBDockOffscreenFractionModifying;


#import "_SBHomeScreenFolderDelegate.h"
#import "SBWallpaperController.h"

@interface SBHomeScreenPreviewView : UIView <SBIconViewProviding, SBIconViewDelegate>

 {
    UIView *_folderContent;
    UIView *_floatingDock;
    UIView *_statusBar;
    SBRootFolderController *_rootFolderController;
    _SBHomeScreenFolderDelegate *_folderDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SBDockOffscreenFractionModifying> *dockOffscreenModifier; // ivar: _dockOffscreenModifier
@property (readonly, nonatomic) SBFloatingDockViewController *floatingDockViewController; // ivar: _floatingDockViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (readonly, nonatomic) NSUInteger snapshotOptions; // ivar: _snapshotOptions
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBWallpaperController *wallpaperController; // ivar: _wallpaperController


-(BOOL)isIconViewRecycled:(id)arg0 ;
-(id)backgroundViewForComponentsOfIconView:(id)arg0 ;
-(id)behaviorDelegateForIconView:(id)arg0 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 iconController:(id)arg1 wallpaperController:(id)arg2 options:(NSUInteger)arg3 wallpaperImage:(id)arg4 pageIndexOffset:(NSInteger)arg5 rootFolder:(id)arg6 ;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)layoutSubviews;
-(void)recycleIconView:(id)arg0 ;


@end


#endif