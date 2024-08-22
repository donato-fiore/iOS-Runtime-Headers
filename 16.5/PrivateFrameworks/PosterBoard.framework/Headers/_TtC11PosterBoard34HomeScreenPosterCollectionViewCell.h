// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11POSTERBOARD34HOMESCREENPOSTERCOLLECTIONVIEWCELL_H
#define _TTC11POSTERBOARD34HOMESCREENPOSTERCOLLECTIONVIEWCELL_H

@class TtC11PosterBoard28PosterPairCollectionViewCell;



@interface _TtC11PosterBoard34HomeScreenPosterCollectionViewCell : TtC11PosterBoard28PosterPairCollectionViewCell {
    ? delegate;
    ? homeScreenIconContentView;
    ? $__lazy_storage_$_lockPosterPreviewView;
    ? lockPosterBlurView;
    ? gradientPreviewView;
    ? solidColorPreviewView;
    ? $__lazy_storage_$_homePosterPreviewView;
    ? homePosterSnapshotView;
    ? homePosterBlurView;
    ? homeScreenConfiguration;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif