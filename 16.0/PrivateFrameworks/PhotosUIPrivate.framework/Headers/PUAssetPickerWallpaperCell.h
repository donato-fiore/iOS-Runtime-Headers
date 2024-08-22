// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSETPICKERWALLPAPERCELL_H
#define PUASSETPICKERWALLPAPERCELL_H

@class UICollectionViewCell, PXWallpaperSuggestionView, UIView;
@protocol PXDisplayAsset;



@interface PUAssetPickerWallpaperCell : UICollectionViewCell

@property (retain, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) PXWallpaperSuggestionView *imageView; // ivar: _imageView
@property (nonatomic) BOOL isAssetSelected;
@property (readonly, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (readonly, nonatomic) UIView *selectedView; // ivar: _selectedView


+(id)identifier;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif