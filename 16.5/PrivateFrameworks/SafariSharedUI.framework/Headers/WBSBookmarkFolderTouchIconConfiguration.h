// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSBOOKMARKFOLDERTOUCHICONCONFIGURATION_H
#define WBSBOOKMARKFOLDERTOUCHICONCONFIGURATION_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface WBSBookmarkFolderTouchIconConfiguration : NSObject

@property (readonly, nonatomic) UIColor *backgroundColorForEmptySlots; // ivar: _backgroundColorForEmptySlots
@property (readonly, nonatomic) UIColor *colorForDarkeningThumbnailBackground; // ivar: _colorForDarkeningThumbnailBackground
@property (readonly, nonatomic) BOOL fillIconWithBackgroundColor; // ivar: _fillIconWithBackgroundColor
@property (readonly, nonatomic) NSUInteger maximumNumberOfThumbnailIcons; // ivar: _maximumNumberOfThumbnailIcons
@property (readonly, nonatomic) NSUInteger maximumNumberOfThumbnailRows; // ivar: _maximumNumberOfThumbnailRows
@property (readonly, nonatomic) NSUInteger maximumNumberOfThumbnailsPerRow; // ivar: _maximumNumberOfThumbnailsPerRow
@property (readonly, nonatomic) CGFloat shadowBlurRadius; // ivar: _shadowBlurRadius
@property (readonly, nonatomic) CGSize shadowOffset; // ivar: _shadowOffset
@property (readonly, nonatomic) CGFloat thumbnailIconInnerMarginScaleFactor; // ivar: _thumbnailIconInnerMarginScaleFactor
@property (readonly, nonatomic) CGFloat thumbnailIconOuterMarginScaleFactor; // ivar: _thumbnailIconOuterMarginScaleFactor
@property (readonly, nonatomic) CGFloat thumbnailIconScaleFactor; // ivar: _thumbnailIconScaleFactor


-(id)initFor2x2Layout;
-(id)initFor3x3Layout;
-(id)initForTabGroup;
-(void)_commonWBSBookmarkFolderIconConfigurationInit;


@end


#endif