// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PUPHOTOIMPORTHISTORYCELL_H
#define _PUPHOTOIMPORTHISTORYCELL_H

@class UICollectionViewCell, PHAsset, UIImageView;



@interface _PUPhotoImportHistoryCell : UICollectionViewCell

@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (nonatomic) int currentImageRequestToken; // ivar: _currentImageRequestToken
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBorderColor;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif