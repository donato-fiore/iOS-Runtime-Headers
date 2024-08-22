// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MUPHOTOTILECOLLECTIONVIEWCELL_H
#define MUPHOTOTILECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView;
@protocol MUPhotoTileViewModel;


#import "MUPhotoTileView.h"
#import "MUPhotoTileOverlay.h"

@interface MUPhotoTileCollectionViewCell : UICollectionViewCell {
    MUPhotoTileView *_photoTileView;
}


@property (readonly, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) MUPhotoTileOverlay *photoOverlay;
@property (nonatomic) CGSize targetFrameSize;
@property (retain, nonatomic) NSObject<MUPhotoTileViewModel> *viewModel;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif