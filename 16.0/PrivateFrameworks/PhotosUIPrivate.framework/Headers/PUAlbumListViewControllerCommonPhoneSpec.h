// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUALBUMLISTVIEWCONTROLLERCOMMONPHONESPEC_H
#define PUALBUMLISTVIEWCONTROLLERCOMMONPHONESPEC_H



#import "PUAlbumListViewControllerSpec.h"

@interface PUAlbumListViewControllerCommonPhoneSpec : PUAlbumListViewControllerSpec



-(BOOL)shouldUseCollageForCloudFeedPlaceholder;
-(BOOL)showsDeleteButtonOnCellContentView;
-(CGFloat)posterSquareCornerRadius;
-(CGFloat)posterSubitemCornerRadius;
-(CGFloat)sectionFooterHeight;
-(CGFloat)sectionHeaderHeight;
-(NSInteger)albumDeletionWarningStyle;
-(id)albumViewControllerSpec;
-(id)emptyStackPhotoDecoration;
-(id)feedViewControllerSpec;
-(id)gridViewControllerSpec;
-(id)panoramaViewControllerSpec;
-(id)stackPhotoDecoration;
-(struct UIEdgeInsets )stackPerspectiveInsets;
-(struct UIOffset )stackOffset;
-(struct UIOffset )stackPerspectiveOffset;


@end


#endif