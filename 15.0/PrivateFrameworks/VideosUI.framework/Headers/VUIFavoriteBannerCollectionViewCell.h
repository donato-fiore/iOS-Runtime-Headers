// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIFAVORITEBANNERCOLLECTIONVIEWCELL_H
#define VUIFAVORITEBANNERCOLLECTIONVIEWCELL_H



#import "VUIFocusableCollectionViewCell.h"
#import "VUIFavoriteBannerLayout.h"
#import "VUIFavoriteBannerView.h"

@interface VUIFavoriteBannerCollectionViewCell : VUIFocusableCollectionViewCell

@property (retain, nonatomic) VUIFavoriteBannerLayout *bannerLayout; // ivar: _bannerLayout
@property (retain, nonatomic) VUIFavoriteBannerView *bannerView; // ivar: _bannerView
@property (nonatomic) CGFloat width; // ivar: _width


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)registerForInAppMessaging:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif