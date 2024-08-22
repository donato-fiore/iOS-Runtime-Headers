// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11POSTERBOARD28POSTERPAIRCOLLECTIONVIEWCELL_H
#define _TTC11POSTERBOARD28POSTERPAIRCOLLECTIONVIEWCELL_H

@class TtC11PosterBoard24PosterCollectionViewCell;



@interface _TtC11PosterBoard28PosterPairCollectionViewCell : TtC11PosterBoard24PosterCollectionViewCell {
    ? snapshotProvider;
    ? posterPair;
    ? lockPosterSnapshotView;
    ? keyLineView;
    ? isReloadingLockPosterSnapshot;
    ? lockPosterSnapshotImage;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif