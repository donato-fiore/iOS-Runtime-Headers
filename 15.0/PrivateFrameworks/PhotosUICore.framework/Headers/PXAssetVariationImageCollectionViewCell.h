// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETVARIATIONIMAGECOLLECTIONVIEWCELL_H
#define PXASSETVARIATIONIMAGECOLLECTIONVIEWCELL_H

@class UIImageView;


#import "PXAssetVariationCollectionViewCell.h"

@interface PXAssetVariationImageCollectionViewCell : PXAssetVariationCollectionViewCell {
    UIImageView *_imageView;
}




-(id)loadVariationView;
-(void)updateVariationView;


@end


#endif