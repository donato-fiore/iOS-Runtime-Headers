// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WALLPAPERGRIDVIEWCONTROLLER_H
#define WALLPAPERGRIDVIEWCONTROLLER_H

@class UICollectionViewController, NSCache, WKWallpaperBundleCollection, NSString;
@protocol SBSUIWallpaperPreviewViewControllerDelegate, PSStateRestoration;



@interface WallpaperGridViewController : UICollectionViewController <SBSUIWallpaperPreviewViewControllerDelegate, PSStateRestoration>

 {
    NSCache *_thumbnailCache;
}


@property (retain, nonatomic) WKWallpaperBundleCollection *_bundleCollection; // ivar: __bundleCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_thumbnailForWallpaperBundle:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithWallperBundleCollection:(id)arg0 ;
-(void)_wallpaperPreviewController:(id)arg0 wallpaperLocations:(NSInteger)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg0 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg0 ;


@end


#endif