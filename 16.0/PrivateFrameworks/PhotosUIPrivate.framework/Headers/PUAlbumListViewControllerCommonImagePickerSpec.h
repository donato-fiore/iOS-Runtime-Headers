// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUALBUMLISTVIEWCONTROLLERCOMMONIMAGEPICKERSPEC_H
#define PUALBUMLISTVIEWCONTROLLERCOMMONIMAGEPICKERSPEC_H



#import "PUAlbumListViewControllerCommonPhoneSpec.h"

@interface PUAlbumListViewControllerCommonImagePickerSpec : PUAlbumListViewControllerCommonPhoneSpec



-(BOOL)shouldUseCollageForCloudFeedPlaceholder;
-(BOOL)shouldUseTableView;
-(BOOL)showsDeleteButtonOnCellContentView;
-(CGFloat)sectionFooterHeight;
-(CGFloat)sectionHeaderHeight;
-(NSInteger)cellContentViewLayout;
-(NSUInteger)folderStackViewStyle;
-(NSUInteger)stackViewStyle;
-(struct CGSize )cellSizeForBounds:(struct CGRect )arg0 ;
-(struct CGSize )imageSize;
-(struct CGSize )stackSize;
-(struct UIEdgeInsets )sectionInsetsForLayoutReferenceSize:(struct CGSize )arg0 safeAreaInsets:(struct UIEdgeInsets )arg1 ;
-(void)configureStackViewWithGridStyle:(id)arg0 ;


@end


#endif