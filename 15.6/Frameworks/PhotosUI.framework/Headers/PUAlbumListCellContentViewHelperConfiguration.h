// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUALBUMLISTCELLCONTENTVIEWHELPERCONFIGURATION_H
#define PUALBUMLISTCELLCONTENTVIEWHELPERCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PUPhotoDecoration.h"

@interface PUAlbumListCellContentViewHelperConfiguration : NSObject

@property (copy, nonatomic) NSString *albumSubtitleFormat; // ivar: _albumSubtitleFormat
@property (nonatomic) BOOL allowsEmailInSubtitle; // ivar: _allowsEmailInSubtitle
@property (nonatomic) NSInteger cellContentViewLayout; // ivar: _cellContentViewLayout
@property (nonatomic) BOOL cornerOverlaysDisabled; // ivar: _cornerOverlaysDisabled
@property (nonatomic) CGFloat dynamicSubtitleleading; // ivar: _dynamicSubtitleleading
@property (nonatomic) CGFloat dynamicTitleLeading; // ivar: _dynamicTitleLeading
@property (nonatomic) CGFloat dynamicTopLeading; // ivar: _dynamicTopLeading
@property (nonatomic) NSUInteger folderStackViewStyle; // ivar: _folderStackViewStyle
@property (nonatomic) CGFloat gridItemSpacing; // ivar: _gridItemSpacing
@property (nonatomic) CGFloat gridMargin; // ivar: _gridMargin
@property (nonatomic) BOOL hasClearBackgroundColor; // ivar: _hasClearBackgroundColor
@property (nonatomic) BOOL hasRoundedCorners; // ivar: _hasRoundedCorners
@property (nonatomic) NSInteger imageContentMode; // ivar: _imageContentMode
@property (copy, nonatomic) NSString *nameOfAddSharedAlbumPlaceholderImage; // ivar: _nameOfAddSharedAlbumPlaceholderImage
@property (copy, nonatomic) NSString *nameOfEmptyAlbumPlaceholderImage; // ivar: _nameOfEmptyAlbumPlaceholderImage
@property (copy, nonatomic) NSString *nameOfEmptySharedAlbumPlaceholderImage; // ivar: _nameOfEmptySharedAlbumPlaceholderImage
@property (copy, nonatomic) NSString *nameOfHiddenAlbumPlaceholderImage; // ivar: _nameOfHiddenAlbumPlaceholderImage
@property (copy, nonatomic) NSString *nameOfRecentlyDeletedAlbumPlaceholderImage; // ivar: _nameOfRecentlyDeletedAlbumPlaceholderImage
@property (retain, nonatomic) PUPhotoDecoration *photoDecoration; // ivar: _photoDecoration
@property (nonatomic) CGSize pixelSize; // ivar: _pixelSize
@property (nonatomic) CGFloat posterSquareCornerRadius; // ivar: _posterSquareCornerRadius
@property (nonatomic) CGFloat posterSubitemCornerRadius; // ivar: _posterSubitemCornerRadius
@property (nonatomic) BOOL shouldCenterTextHorizontally; // ivar: _shouldCenterTextHorizontally
@property (nonatomic) BOOL shouldUseTableView; // ivar: _shouldUseTableView
@property (nonatomic) BOOL showsDeleteButtonOnCellContentView; // ivar: _showsDeleteButtonOnCellContentView
@property (nonatomic) UIOffset stackOffset; // ivar: _stackOffset
@property (nonatomic) UIEdgeInsets stackPerspectiveInsets; // ivar: _stackPerspectiveInsets
@property (nonatomic) UIOffset stackPerspectiveOffset; // ivar: _stackPerspectiveOffset
@property (nonatomic) CGSize stackSize; // ivar: _stackSize
@property (nonatomic) NSUInteger stackViewStyle; // ivar: _stackViewStyle


+(id)defaultConfiguration;
-(void)configureWithSpec:(id)arg0 ;


@end


#endif