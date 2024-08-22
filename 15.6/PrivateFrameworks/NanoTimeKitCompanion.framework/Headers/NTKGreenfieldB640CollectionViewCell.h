// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKGREENFIELDB640COLLECTIONVIEWCELL_H
#define NTKGREENFIELDB640COLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, UIImageView, UILabel;



@interface NTKGreenfieldB640CollectionViewCell : UICollectionViewCell {
    UIView *_faceView;
    UIImageView *_snapshotFaceViewForErrorState;
    UIImageView *_watchBandImageView;
    UILabel *_faceNameLabel;
    UIImageView *_selectedCheckImageView;
    BOOL _shouldPresentCheckmark;
}




+(id)reuseIdentifier;
+(struct CGSize )cellSizeForWatchBandImage:(id)arg0 watchFaceName:(id)arg1 ;
-(void)_populateWithDecodedRecipe:(id)arg0 bandImage:(id)arg1 shouldPresentFaceName:(BOOL)arg2 shouldPresentCheckmark:(BOOL)arg3 isSelected:(BOOL)arg4 ;
-(void)layoutSubviews;
-(void)prepareCellWithDecodedRecipe:(id)arg0 bandImage:(id)arg1 shouldPresentFaceName:(BOOL)arg2 shouldPresentCheckmark:(BOOL)arg3 isSelected:(BOOL)arg4 ;
-(void)prepareForReuse;
-(void)updateSeletedState:(BOOL)arg0 ;


@end


#endif