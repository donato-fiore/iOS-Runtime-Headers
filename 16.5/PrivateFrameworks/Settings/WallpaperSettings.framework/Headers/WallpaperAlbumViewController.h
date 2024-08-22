// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WALLPAPERALBUMVIEWCONTROLLER_H
#define WALLPAPERALBUMVIEWCONTROLLER_H

@class PUPhotosAlbumViewController, NSString, PUPhotosGridDownloadHelper, UIViewController<PSController>, PSRootController, PSSpecifier;
@protocol SBSUIWallpaperPreviewViewControllerDelegate, PSController;


#import "WallpaperAlbumViewControllerSpec.h"

@interface WallpaperAlbumViewController : PUPhotosAlbumViewController <SBSUIWallpaperPreviewViewControllerDelegate, PSController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PUPhotosGridDownloadHelper *downloadHelper; // ivar: _downloadHelper
@property (readonly) NSUInteger hash;
@property (nonatomic) UIViewController<PSController> *parentController; // ivar: _parentController
@property (nonatomic) PSRootController *rootController; // ivar: _rootController
@property (retain, nonatomic) PSSpecifier *specifier; // ivar: _specifier
@property (readonly) Class superclass;
@property (retain, nonatomic) WallpaperAlbumViewControllerSpec *wallpaperAlbumSpec; // ivar: _wallpaperAlbumSpec


-(BOOL)allowSlideshowButton;
-(BOOL)allowsPeeking;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)canDragIn;
-(BOOL)canDragOut;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)isPreheatingEnabled;
-(BOOL)shouldShowMenu;
-(BOOL)shouldShowSectionHeaders;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(id)initWithSpec:(id)arg0 ;
-(id)newGridLayout;
-(id)readPreferenceValue:(id)arg0 ;
-(void)dealloc;
-(void)didLock;
-(void)didUnlock;
-(void)didWake;
-(void)formSheetViewDidDisappear;
-(void)formSheetViewWillDisappear;
-(void)handleURL:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)popupViewDidDisappear;
-(void)popupViewWillDisappear;
-(void)setAlbum:(id)arg0 existingFetchResult:(id)arg1 ;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)showController:(id)arg0 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)statusBarWillAnimateByHeight:(CGFloat)arg0 ;
-(void)suspend;
-(void)updateLayoutMetrics;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg0 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg0 ;
-(void)willBecomeActive;
-(void)willResignActive;
-(void)willUnlock;


@end


#endif