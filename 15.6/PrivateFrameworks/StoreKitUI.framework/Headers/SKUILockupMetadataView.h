// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUILOCKUPMETADATAVIEW_H
#define SKUILOCKUPMETADATAVIEW_H

@class UIView, UILabel, UIColor, UIImageView, NSString;


#import "SKUIBadgeLabel.h"
#import "SKUIClientContext.h"

@interface SKUILockupMetadataView : UIView {
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    SKUIBadgeLabel *_editorialBadgeLabel;
    UILabel *_itemCountLabel;
    UILabel *_itemOfferLabel;
    UILabel *_releaseDateLabel;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
}


@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *categoryString;
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (copy, nonatomic) NSString *editorialBadgeString;
@property (copy, nonatomic) NSString *itemCountString;
@property (copy, nonatomic) NSString *itemOfferString;
@property (nonatomic) NSInteger numberOfUserRatings; // ivar: _numberOfUserRatings
@property (readonly, nonatomic) UIColor *primaryTextColor; // ivar: _textColor
@property (copy, nonatomic) NSString *releaseDateString;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) float userRating; // ivar: _userRating
@property (nonatomic) NSUInteger visibleFields; // ivar: _visibleFields


+(CGFloat)maximumHeightWithVisibleFields:(NSUInteger)arg0 ;
-(id)_decimalNumberFormatter;
-(id)_newDefaultLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadUserRatingViews;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setColoringWithColorScheme:(id)arg0 ;


@end


#endif