// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUALBUMLISTVIEWCONTROLLERSPEC_H
#define PUALBUMLISTVIEWCONTROLLERSPEC_H

@class UIImage, PXLayoutMetricInterpolator, NSString;


#import "PULegacyViewControllerSpec.h"
#import "PUFontManager.h"
#import "PUPhotosAlbumViewControllerSpec.h"
#import "PUPhotoDecoration.h"
#import "PUFeedViewControllerSpec.h"
#import "PUPhotosGridViewControllerSpec.h"
#import "PUPhotosPanoramaViewControllerSpec.h"
#import "PUPhotosPickerViewControllerSpec.h"
#import "PUAlbumListViewControllerSpec.h"

@interface PUAlbumListViewControllerSpec : PULegacyViewControllerSpec {
    UIImage *_emptyAlbumPlaceholderImage;
    UIImage *_emptySharedAlbumPlaceholderImage;
    UIImage *_addSharedAlbumPlaceholderImage;
    UIImage *_hiddenAlbumPlaceholderImage;
    UIImage *_recentlyDeletedAlbumPlaceholderImage;
}


@property (readonly, nonatomic) PUFontManager *_fontManager; // ivar: __fontManager
@property (readonly, nonatomic) PXLayoutMetricInterpolator *_insetsInterpolator;
@property (readonly, nonatomic) PXLayoutMetricInterpolator *_stackWidthInterpolator;
@property (readonly, nonatomic) NSInteger albumDeletionConfirmationStyle; // ivar: _albumDeletionConfirmationStyle
@property (readonly, nonatomic) PUPhotosAlbumViewControllerSpec *albumViewControllerSpec; // ivar: _albumViewControllerSpec
@property (readonly, nonatomic) BOOL canShowVirtualCollections; // ivar: _canShowVirtualCollections
@property (readonly, nonatomic) NSInteger cellContentViewLayout; // ivar: _cellContentViewLayout
@property (readonly) NSInteger collageImageContentMode; // ivar: _collageImageContentMode
@property (readonly) CGSize collageImageSize; // ivar: _collageImageSize
@property (readonly, nonatomic) CGFloat collageSpacing; // ivar: _collageSpacing
@property (readonly, nonatomic) CGSize contentSizeForViewInPopover;
@property (readonly, nonatomic) PUPhotoDecoration *emptyStackPhotoDecoration; // ivar: _emptyStackPhotoDecoration
@property (readonly, nonatomic) PUFeedViewControllerSpec *feedViewControllerSpec; // ivar: _feedViewControllerSpec
@property (readonly, nonatomic) NSUInteger folderStackViewStyle; // ivar: _folderStackViewStyle
@property (readonly, nonatomic) PUPhotosGridViewControllerSpec *gridViewControllerSpec; // ivar: _gridViewControllerSpec
@property (readonly) NSInteger imageContentMode;
@property (readonly) CGSize imageSize; // ivar: _imageSize
@property (readonly, nonatomic) NSString *nameOfAddSharedAlbumPlaceholderImage;
@property (readonly, nonatomic) NSString *nameOfEmptyAlbumPlaceholderImage;
@property (readonly, nonatomic) NSString *nameOfEmptySharedAlbumPlaceholderImage;
@property (readonly, nonatomic) NSString *nameOfHiddenAlbumPlaceholderImage;
@property (readonly, nonatomic) NSString *nameOfRecentlyDeletedAlbumPlaceholderImage;
@property (readonly, nonatomic) PUPhotosPanoramaViewControllerSpec *panoramaViewControllerSpec; // ivar: _panoramaViewControllerSpec
@property (readonly, nonatomic) PUPhotosPickerViewControllerSpec *photosPickerViewControllerSpec; // ivar: _photosPickerViewControllerSpec
@property (readonly, nonatomic) CGFloat posterSquareCornerRadius; // ivar: _posterSquareCornerRadius
@property (readonly, nonatomic) CGFloat posterSubitemCornerRadius; // ivar: _posterSubitemCornerRadius
@property (readonly, nonatomic) CGFloat sectionFooterHeight; // ivar: _sectionFooterHeight
@property (readonly, nonatomic) CGFloat sectionHeaderHeight; // ivar: _sectionHeaderHeight
@property (readonly, nonatomic) BOOL shouldShowSectionHeaders;
@property (readonly, nonatomic) BOOL shouldUseCollageForCloudFeedPlaceholder; // ivar: _shouldUseCollageForCloudFeedPlaceholder
@property (readonly, nonatomic) BOOL shouldUseShortTitleForStandInAlbumList; // ivar: _shouldUseShortTitleForStandInAlbumList
@property (readonly) BOOL shouldUseTableView; // ivar: _shouldUseTableView
@property (readonly, nonatomic) BOOL showsDeleteButtonOnCellContentView; // ivar: _showsDeleteButtonOnCellContentView
@property (readonly, nonatomic) UIOffset stackOffset; // ivar: _stackOffset
@property (readonly, nonatomic) UIEdgeInsets stackPerspectiveInsets; // ivar: _stackPerspectiveInsets
@property (readonly, nonatomic) UIOffset stackPerspectiveOffset; // ivar: _stackPerspectiveOffset
@property (readonly, nonatomic) PUPhotoDecoration *stackPhotoDecoration; // ivar: _stackPhotoDecoration
@property (readonly, nonatomic) CGSize stackSize; // ivar: _stackSize
@property (readonly, nonatomic) NSUInteger stackViewStyle; // ivar: _stackViewStyle
@property (readonly, nonatomic) PUAlbumListViewControllerSpec *standInAlbumListViewControllerSpec;
@property (readonly, nonatomic) BOOL usesStackTransitionToGrid; // ivar: _usesStackTransitionToGrid


+(id)padSpec;
+(id)phoneSpec;
-(id)_centeredGlyphImage:(id)arg0 withBackgroundColor:(id)arg1 size:(struct CGSize )arg2 imageAlpha:(CGFloat)arg3 window:(id)arg4 ;
-(id)_centeredTintedGlyphImage:(id)arg0 withBackgroundColor:(id)arg1 size:(struct CGSize )arg2 window:(id)arg3 ;
-(id)addSharedAlbumPlaceholderImageForWindow:(id)arg0 ;
-(id)emptyAlbumPlaceholderImageForWindow:(id)arg0 ;
-(id)emptySharedAlbumPlaceholderImageForWindow:(id)arg0 ;
-(id)hiddenAlbumPlaceholderImageForWindow:(id)arg0 ;
-(id)recentlyDeletedAlbumPlaceholderImageForWindow:(id)arg0 ;
-(struct CGPoint )_pixelRoundedOriginForCenteredImage:(id)arg0 inRect:(struct CGRect )arg1 window:(id)arg2 ;
-(struct CGSize )cellSizeForBounds:(struct CGRect )arg0 ;
-(struct CGSize )cellSizeForStackSize:(struct CGSize )arg0 ;
-(struct CGSize )imageSizeForLayoutReferenceSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(struct CGSize )stackSizeForLayoutReferenceSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(struct CGSize )tileSizeForLayoutReferenceSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 stackViewStyle:(NSUInteger)arg2 ;
-(struct UIEdgeInsets )sectionInsetsForLayoutReferenceSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(void)_getStackSize:(struct CGSize *)arg0 outEdgeInsets:(struct UIEdgeInsets *)arg1 forLayoutReferenceSize:(struct CGSize )arg2 safeAreaInsets:(struct UIEdgeInsets )arg3 ;
-(void)configureCollectionViewAlbumListLayout:(id)arg0 forBounds:(struct CGRect )arg1 ;
-(void)configureGridLayout:(id)arg0 forLayoutReferenceSize:(struct CGSize )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;
-(void)configureStackViewWithGridStyle:(id)arg0 ;


@end


#endif