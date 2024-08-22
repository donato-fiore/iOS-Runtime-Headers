// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUALBUMLISTVIEWCONTROLLERPHONESPEC_H
#define PUALBUMLISTVIEWCONTROLLERPHONESPEC_H



#import "PUAlbumListViewControllerCommonPhoneSpec.h"

@interface PUAlbumListViewControllerPhoneSpec : PUAlbumListViewControllerCommonPhoneSpec



-(BOOL)shouldShowSectionHeaders;
-(BOOL)shouldUseTableView;
-(CGFloat)sectionFooterHeight;
-(CGFloat)sectionHeaderHeight;
-(NSInteger)cellContentViewLayout;
-(NSUInteger)folderStackViewStyle;
-(NSUInteger)stackViewStyle;
-(id)nameOfAddSharedAlbumPlaceholderImage;
-(id)nameOfEmptyAlbumPlaceholderImage;
-(id)nameOfEmptySharedAlbumPlaceholderImage;
-(id)nameOfHiddenAlbumPlaceholderImage;
-(id)nameOfRecentlyDeletedAlbumPlaceholderImage;
-(struct CGSize )cellSizeForStackSize:(struct CGSize )arg0 ;
-(struct CGSize )imageSize;
-(struct CGSize )imageSizeForLayoutReferenceSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(struct CGSize )stackSize;
-(struct CGSize )stackSizeForLayoutReferenceSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(struct UIEdgeInsets )sectionInsetsForLayoutReferenceSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(void)configureGridLayout:(id)arg0 forLayoutReferenceSize:(struct CGSize )arg1 safeAreaInsets:(struct UIEdgeInsets )arg2 ;
-(void)configureStackViewWithGridStyle:(id)arg0 ;


@end


#endif