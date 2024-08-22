// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXWALLPAPERSUGGESTIONGADGETVIEW_H
#define PXWALLPAPERSUGGESTIONGADGETVIEW_H

@class UICollectionViewCell;
@protocol PXDisplayAsset;


#import "PXWallpaperSuggestionView.h"

@interface PXWallpaperSuggestionGadgetView : UICollectionViewCell

@property (nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) PXWallpaperSuggestionView *wallpaperView; // ivar: _wallpaperView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif