// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUWALLPAPERPICKERVIEWCONTROLLER_H
#define HUWALLPAPERPICKERVIEWCONTROLLER_H

@class NSArray, NSMutableDictionary, NSString, PHCachingImageManager;
@protocol HUWallpaperEditingViewControllerDelegate, HUNamedWallpaperCollectionViewControllerDelegate, HUWallpaperPhotoCollectionViewControllerDelegate, PHPhotoLibraryChangeObserver, HUWallpaperPickerViewControllerDelegate;


#import "HUTableViewController.h"
#import "HUNamedWallpaperCollectionViewController.h"

@interface HUWallpaperPickerViewController : HUTableViewController <HUWallpaperEditingViewControllerDelegate, HUNamedWallpaperCollectionViewControllerDelegate, HUWallpaperPhotoCollectionViewControllerDelegate, PHPhotoLibraryChangeObserver>



@property (retain, nonatomic) NSArray *assetCollections; // ivar: _assetCollections
@property (retain, nonatomic) NSMutableDictionary *assetCollectionsToAssetFetchResults; // ivar: _assetCollectionsToAssetFetchResults
@property (nonatomic) NSInteger collectionType; // ivar: _collectionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HUWallpaperPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHCachingImageManager *imageManager; // ivar: _imageManager
@property (copy, nonatomic) NSString *namedSectionTitle; // ivar: _namedSectionTitle
@property (retain, nonatomic) HUNamedWallpaperCollectionViewController *namedWallpaperController; // ivar: _namedWallpaperController
@property (readonly, nonatomic) BOOL shouldShowPhotoLibrary;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)currentSectionIdentifiers;
-(id)identifierForSection:(NSUInteger)arg0 ;
-(id)initWithCollectionType:(NSInteger)arg0 namedSectionTitle:(id)arg1 delegate:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)contentSizeCategoryDidChange;
-(void)loadAssetCollections;
-(void)namedWallpaperController:(id)arg0 didChooseWallpaper:(id)arg1 image:(id)arg2 ;
-(void)photoCollectionController:(id)arg0 didChooseWallpaper:(id)arg1 image:(id)arg2 ;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)wallpaperEditing:(id)arg0 didFinishWithWallpaper:(id)arg1 image:(id)arg2 ;
-(void)wallpaperEditingDidCancel:(id)arg0 ;


@end


#endif