// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUALBUMLISTVIEWCONTROLLERPADSPEC_H
#define PUALBUMLISTVIEWCONTROLLERPADSPEC_H



#import "PUAlbumListViewControllerSpec.h"

@interface PUAlbumListViewControllerPadSpec : PUAlbumListViewControllerSpec



-(BOOL)canShowVirtualCollections;
-(BOOL)shouldShowSectionHeaders;
-(BOOL)shouldUseCollageForCloudFeedPlaceholder;
-(BOOL)showsDeleteButtonOnCellContentView;
-(BOOL)usesStackTransitionToGrid;
-(CGFloat)collageSpacing;
-(CGFloat)posterSquareCornerRadius;
-(CGFloat)posterSubitemCornerRadius;
-(CGFloat)sectionFooterHeight;
-(CGFloat)sectionHeaderHeight;
-(NSInteger)albumDeletionConfirmationStyle;
-(NSInteger)cellContentViewLayout;
-(NSInteger)collageImageContentMode;
-(NSUInteger)folderStackViewStyle;
-(NSUInteger)stackViewStyle;
-(id)albumViewControllerSpec;
-(id)emptyStackPhotoDecoration;
-(id)feedViewControllerSpec;
-(id)gridViewControllerSpec;
-(id)nameOfAddSharedAlbumPlaceholderImage;
-(id)nameOfEmptyAlbumPlaceholderImage;
-(id)nameOfEmptySharedAlbumPlaceholderImage;
-(id)nameOfHiddenAlbumPlaceholderImage;
-(id)nameOfRecentlyDeletedAlbumPlaceholderImage;
-(id)panoramaViewControllerSpec;
-(id)photosPickerViewControllerSpec;
-(id)stackPhotoDecoration;
-(struct CGSize )cellSizeForStackSize:(struct CGSize )arg0 ;
-(struct CGSize )collageImageSize;
-(struct CGSize )imageSize;
-(struct CGSize )imageSizeForLayoutReferenceSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(struct CGSize )stackSize;
-(struct CGSize )stackSizeForLayoutReferenceSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(struct UIEdgeInsets )sectionInsetsForLayoutReferenceSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(struct UIEdgeInsets )stackPerspectiveInsets;
-(struct UIOffset )stackOffset;
-(struct UIOffset )stackPerspectiveOffset;
-(void)configureGridLayout:(id)arg0 forLayoutReferenceSize:(struct CGSize )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;
-(void)configureStackViewWithGridStyle:(id)arg0 ;


@end


#endif