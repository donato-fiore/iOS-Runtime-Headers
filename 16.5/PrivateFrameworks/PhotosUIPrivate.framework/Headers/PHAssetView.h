// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETVIEW_H
#define PHASSETVIEW_H

@class UIView, PHAsset, PXPhotoKitAssetView, NSArray;



@interface PHAssetView : UIView

@property (nonatomic) BOOL allowsDragging; // ivar: _allowsDragging
@property (nonatomic) BOOL allowsTextSelection;
@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) PXPhotoKitAssetView *impl; // ivar: _impl
@property (copy, nonatomic) NSArray *stringsToHighlight;


+(id)localizedTitleForAsset:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonPHAssetViewInit;
-(void)layoutSubviews;
-(void)setContentMode:(NSInteger)arg0 ;


@end


#endif