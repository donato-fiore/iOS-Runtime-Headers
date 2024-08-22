// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIFAVORITEBANNERLAYOUT_H
#define VUIFAVORITEBANNERLAYOUT_H

@class UIColor, TVImageLayout;

#import <Foundation/Foundation.h>

#import "VUITextLayout.h"

@interface VUIFavoriteBannerLayout : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) CGFloat bannerMinHeight; // ivar: _bannerMinHeight
@property (nonatomic) NSUInteger bannerStyle; // ivar: _bannerStyle
@property (nonatomic) _VUICornerRadii borderRadii; // ivar: _borderRadii
@property (retain, nonatomic) UIColor *highlightedBackgroundColor; // ivar: _highlightedBackgroundColor
@property (readonly, nonatomic) TVImageLayout *imageLayout; // ivar: _imageLayout
@property (nonatomic) BOOL isPreModeBanner; // ivar: _isPreModeBanner
@property (nonatomic) UIEdgeInsets margin; // ivar: _margin
@property (nonatomic) CGFloat maxTextWidth; // ivar: _maxTextWidth
@property (nonatomic) CGFloat subtitleBaseLine; // ivar: _subtitleBaseLine
@property (readonly, nonatomic) VUITextLayout *subtitleLayout; // ivar: _subtitleLayout
@property (readonly, nonatomic) VUITextLayout *titleLayout; // ivar: _titleLayout


-(NSUInteger)bannerStyleForSizeClass:(NSInteger)arg0 ;


@end


#endif