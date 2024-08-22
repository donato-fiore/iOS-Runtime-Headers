// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUWALLPAPERPHOTOCOLLECTIONFLOWLAYOUT_H
#define HUWALLPAPERPHOTOCOLLECTIONFLOWLAYOUT_H

@class UICollectionViewFlowLayout;



@interface HUWallpaperPhotoCollectionFlowLayout : UICollectionViewFlowLayout

@property (readonly, nonatomic) NSInteger assetCollectionSubtype; // ivar: _assetCollectionSubtype


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)initWithAssetCollectionSubtype:(NSInteger)arg0 ;
-(void)prepareLayout;


@end


#endif