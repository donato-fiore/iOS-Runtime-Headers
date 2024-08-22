// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKBANNERCOLLECTIONVIEWCELL_H
#define CKBANNERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView;



@interface CKBannerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *bannerView; // ivar: _bannerView


+(id)reuseIdentifier;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithEntity:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif