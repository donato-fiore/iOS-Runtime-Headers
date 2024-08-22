// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDFLOWLAYOUTCELLATTRIBUTES_H
#define HUGRIDFLOWLAYOUTCELLATTRIBUTES_H

@class UICollectionViewLayoutAttributes, HFWallpaperSlice;
@protocol HUBackgroundEffectViewGrouping;



@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes

@property (weak, nonatomic) NSObject<HUBackgroundEffectViewGrouping> *backgroundEffectViewGrouper; // ivar: _backgroundEffectViewGrouper
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice; // ivar: _blurredWallpaperSlice
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice; // ivar: _darkModeBlurredWallpaperSlice
@property (nonatomic) CGRect normalizedWallpaperRect; // ivar: _normalizedWallpaperRect


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif