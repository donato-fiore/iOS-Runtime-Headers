// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCTHUMBNAILFOLDERICON_H
#define DOCTHUMBNAILFOLDERICON_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface DOCThumbnailFolderIcon : NSObject {
    CGFloat _bottomInset;
    CGFloat _sharedBadgeBottomInset;
    CGSize _badgeSize;
    CGSize _sharedBadgeSize;
    NSString *_documentsBadgeName;
    NSString *_desktopBadgeName;
    NSString *_sharedBadgeName;
    NSString *_downloadsBadgeName;
    NSString *_genericSharepointBadgeName;
}


@property (readonly, nonatomic) CGSize badgeSize;
@property (readonly, nonatomic) CGFloat bottomInset;
@property (readonly, nonatomic) UIImage *desktopBadge; // ivar: _desktopBadge
@property (readonly, nonatomic) UIImage *documentsBadge; // ivar: _documentsBadge
@property (readonly, nonatomic) UIImage *downloadsBadge; // ivar: _downloadsBadge
@property (readonly, nonatomic) UIImage *genericSharepointBadge; // ivar: _genericSharepointBadge
@property (readonly, nonatomic) CGFloat imageDimension; // ivar: _imageDimension
@property (readonly, nonatomic) NSString *imageName; // ivar: _imageName
@property (readonly, nonatomic) UIImage *plainFolderImage; // ivar: _plainFolderImage
@property (readonly, nonatomic) UIImage *sharedBadge; // ivar: _sharedBadge


+(id)_folderIconForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
+(id)_folderIconsForImageNamePattern:(id)arg0 documentsBadgeNamePattern:(id)arg1 desktopBadgeNamePattern:(id)arg2 sharedBadgeNamePattern:(id)arg3 downloadsBadgeNamePattern:(id)arg4 genericSharepointBadgeNamePattern:(id)arg5 ;
+(id)folderIconForDescriptor:(id)arg0 ;
+(id)folderIcons;
+(id)imageWithStyle:(NSUInteger)arg0 assetImage:(id)arg1 ;
-(CGFloat)bottomInsetForFolderType:(NSUInteger)arg0 ;
-(id)_badgedFolderIconForBadge:(id)arg0 badgeSize:(struct CGSize )arg1 bottomInset:(CGFloat)arg2 style:(NSUInteger)arg3 ;
-(id)badgeForFolderType:(NSUInteger)arg0 ;
-(id)badgedFolderIconForBadge:(id)arg0 style:(NSUInteger)arg1 ;
-(id)badgedFolderIconForFolderType:(NSUInteger)arg0 style:(NSUInteger)arg1 ;
-(id)image;
-(id)initWithImageName:(id)arg0 documentsBadgeName:(id)arg1 dekstopBadgeName:(id)arg2 sharedBadgeName:(id)arg3 downloadsBadgeName:(id)arg4 genericSharepointBadgeName:(id)arg5 imageDimension:(CGFloat)arg6 badgeDimension:(CGFloat)arg7 badgeBottomInset:(CGFloat)arg8 sharedBadgeDimension:(CGFloat)arg9 sharedBadgeBottomInset:(CGFloat)arg10 ;
-(id)plainFolderImageWithStyle:(NSUInteger)arg0 ;
-(struct CGSize )badgeSizeForFolderType:(NSUInteger)arg0 ;
-(void)resolveImage;


@end


#endif