// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKPURCHASABLEGAMECELL_H
#define GKPURCHASABLEGAMECELL_H

@class UILabel, GKStoreItemInternal;


#import "GKBaseGameCell.h"
#import "GKRatingView.h"

@interface GKPurchasableGameCell : GKBaseGameCell

@property (nonatomic) float capturedRating; // ivar: _capturedRating
@property (retain, nonatomic) UILabel *developerLabel; // ivar: _developerLabel
@property (retain, nonatomic) UILabel *numberRatings; // ivar: _numberRatings
@property (retain, nonatomic) UILabel *priceLabel; // ivar: _priceLabel
@property (retain, nonatomic) GKRatingView *ratingStarsView; // ivar: _ratingStarsView
@property (retain, nonatomic) GKStoreItemInternal *storeItem; // ivar: _storeItem


-(BOOL)canRemoveItem;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateModel;
-(void)establishConstraints;
-(void)prepareForReuse;


@end


#endif