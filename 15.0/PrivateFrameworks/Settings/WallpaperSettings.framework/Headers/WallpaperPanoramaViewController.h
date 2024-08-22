// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WALLPAPERPANORAMAVIEWCONTROLLER_H
#define WALLPAPERPANORAMAVIEWCONTROLLER_H

@class PUPhotosPanoramaViewController, NSDictionary, SBSUIWallpaperPreviewViewController, NSArray, NSString;
@protocol SBSUIWallpaperPreviewViewControllerDelegate;


#import "WallpaperPanoramaViewControllerSpec.h"

@interface WallpaperPanoramaViewController : PUPhotosPanoramaViewController <SBSUIWallpaperPreviewViewControllerDelegate>



@property (retain, nonatomic, setter=_setOptionsBeingPreviewed:) NSDictionary *_optionsBeingPreviewed; // ivar: __optionsBeingPreviewed
@property (retain, nonatomic, setter=_setPreviewController:) SBSUIWallpaperPreviewViewController *_previewController; // ivar: __previewController
@property (retain, nonatomic, setter=_setVariantBeingPreviewed:) NSDictionary *_variantBeingPreviewed; // ivar: __variantBeingPreviewed
@property (retain, nonatomic, setter=_setWallpaperPanoramaSpec:) WallpaperPanoramaViewControllerSpec *_wallpaperPanoramaSpec; // ivar: __wallpaperPanoramaSpec
@property (retain, nonatomic, setter=_setWallpaperVariants:) NSArray *_wallpaperVariants; // ivar: __wallpaperVariants
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL mineOnly; // ivar: _mineOnly
@property (readonly) Class superclass;


-(BOOL)allowSlideshowButton;
-(BOOL)allowsPeeking;
-(BOOL)canBeShownFromSuspendedState;
-(BOOL)canDragIn;
-(BOOL)canDragOut;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isPreheatingEnabled;
-(BOOL)shouldShowMenu;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(id)initWithSpec:(id)arg0 ;
-(id)initWithSpec:(id)arg0 mineOnly:(BOOL)arg1 ;
-(id)newGridLayout;
-(struct CGSize )_itemSizeForWidth:(CGFloat)arg0 ;
-(void)configureGridCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)configureSupplementaryView:(id)arg0 ofKind:(id)arg1 forIndexPath:(id)arg2 ;
-(void)loadView;
-(void)navigateToFactoryWallpaperAtIndex:(NSUInteger)arg0 ;
-(void)navigateToPhoto:(id)arg0 ;
-(void)presentPreviewControllerWithWallpaperDict:(id)arg0 photo:(id)arg1 andOptions:(id)arg2 ;
-(void)updateLayoutMetrics;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg0 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg0 ;


@end


#endif