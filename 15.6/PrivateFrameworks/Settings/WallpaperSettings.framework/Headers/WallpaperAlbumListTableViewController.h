// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WALLPAPERALBUMLISTTABLEVIEWCONTROLLER_H
#define WALLPAPERALBUMLISTTABLEVIEWCONTROLLER_H

@class PUAlbumListViewController, NSString, UIViewController<PSController>, PSRootController, PSSpecifier, WKWallpaperBundleImporter;
@protocol WSBundleCollectionsTableViewCellDelegate, PSController;


#import "WallpaperAlbumListTableViewControllerSpec.h"

@interface WallpaperAlbumListTableViewController : PUAlbumListViewController <WSBundleCollectionsTableViewCellDelegate, PSController>



@property (nonatomic) CGSize canonicalButtonSize; // ivar: _canonicalButtonSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat layoutReferenceWidth; // ivar: _layoutReferenceWidth
@property (nonatomic) UIViewController<PSController> *parentController; // ivar: _parentController
@property (nonatomic) PSRootController *rootController; // ivar: _rootController
@property (retain, nonatomic) PSSpecifier *specifier; // ivar: _specifier
@property (readonly) Class superclass;
@property (retain, nonatomic) WallpaperAlbumListTableViewControllerSpec *wallpaperAlbumListTableViewSpec; // ivar: _wallpaperAlbumListTableViewSpec
@property (retain, nonatomic) WKWallpaperBundleImporter *wallpaperBundleImporter; // ivar: _wallpaperBundleImporter


-(BOOL)canBeShownFromSuspendedState;
-(BOOL)canShowAvatarViews;
-(BOOL)canShowSyncProgress;
-(BOOL)showsEmptyPlaceholderWhenEmpty;
-(BOOL)showsTopPlaceholdersSection;
-(BOOL)updateSpec;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)tableViewStyle;
-(NSUInteger)filteringAssetTypes;
-(id)assetsFilterPredicate;
-(id)backgroundColorForTableView;
-(id)initWithSpec:(id)arg0 ;
-(id)readPreferenceValue:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_configureWallpaperViewControllerAllowedActions:(id)arg0 ;
-(void)_navigateToDynamic;
-(void)_navigateToLive;
-(void)_navigateToPanorama;
-(void)_navigateToStills;
-(void)_navigateToVR;
-(void)_prepareStackView:(id)arg0 forCollection:(id)arg1 withStackCount:(NSInteger)arg2 withCustomEmptyPlaceHolderImage:(id)arg3 ;
-(void)_updateLayout;
-(void)bundleCollectionsTableViewCell:(id)arg0 didTapOnBundleCollectionWithWallpaperType:(NSUInteger)arg1 ;
-(void)didLock;
-(void)didUnlock;
-(void)didWake;
-(void)formSheetViewDidDisappear;
-(void)formSheetViewWillDisappear;
-(void)handleURL:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)navigateToAssetContainer:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)popupViewDidDisappear;
-(void)popupViewWillDisappear;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)setTitleForCell:(id)arg0 withCollection:(id)arg1 ;
-(void)showController:(id)arg0 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)statusBarWillAnimateByHeight:(CGFloat)arg0 ;
-(void)suspend;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willBecomeActive;
-(void)willResignActive;
-(void)willUnlock;


@end


#endif