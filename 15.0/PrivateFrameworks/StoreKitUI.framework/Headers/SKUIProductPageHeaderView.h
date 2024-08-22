// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPRODUCTPAGEHEADERVIEW_H
#define SKUIPRODUCTPAGEHEADERVIEW_H

@class UIView, UILabel, UIImageView, NSString, UIControl, UIImage;
@protocol SKUIItemOfferButtonDelegate, SKUIContentRatingArtworkLoaderObserver;


#import "SKUIBadgeLabel.h"
#import "SKUIClientContext.h"
#import "SKUIProductPageHeaderLabel.h"
#import "SKUIColorScheme.h"
#import "SKUIItemContentRating.h"
#import "SKUIContentRatingArtworkResourceLoader.h"
#import "SKUIItemOffer.h"
#import "SKUIItemOfferButton.h"
#import "SKUIItemState.h"

@interface SKUIProductPageHeaderView : UIView <SKUIItemOfferButtonDelegate, SKUIContentRatingArtworkLoaderObserver>

 {
    UILabel *_ageBandLabel;
    SKUIBadgeLabel *_editorialBadgeLabel;
    SKUIClientContext *_clientContext;
    UIImageView *_headerImageView;
    UIImageView *_iconImageView;
    UILabel *_inAppPurchasesLabel;
    UILabel *_itemOfferExplanationLabel;
    UILabel *_itemOfferExplanationTitleLabel;
    BOOL _needsLayoutAfterButtonAnimation;
    SKUIProductPageHeaderLabel *_titleLabel;
    UILabel *_userRatingLabel;
    UIImageView *_userRatingStarsView;
}


@property (copy, nonatomic) NSString *ageBandString;
@property (readonly, nonatomic) UIControl *artistButton; // ivar: _artistButton
@property (copy, nonatomic) NSString *artistName;
@property (retain, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (retain, nonatomic) SKUIItemContentRating *contentRating; // ivar: _contentRating
@property (retain, nonatomic) SKUIContentRatingArtworkResourceLoader *contentRatingArtworkLoader; // ivar: _contentRatingArtworkLoader
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *editorialBadge;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *headerImage;
@property (nonatomic) CGFloat headerImageHeight; // ivar: _headerImageHeight
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *inAppPurchasesString;
@property (retain, nonatomic) SKUIItemOffer *itemOffer; // ivar: _itemOffer
@property (readonly, nonatomic) SKUIItemOfferButton *itemOfferButton; // ivar: _itemOfferButton
@property (copy, nonatomic) NSString *itemOfferExplanationText;
@property (copy, nonatomic) NSString *itemOfferExplanationTitle;
@property (copy, nonatomic) SKUIItemState *itemState; // ivar: _itemState
@property (nonatomic) NSInteger numberOfUserRatings; // ivar: _numberOfUserRatings
@property (nonatomic, getter=isRestricted) BOOL restricted; // ivar: _restricted
@property (retain, nonatomic) SKUIItemContentRating *secondaryContentRating; // ivar: _secondaryContentRating
@property (readonly, nonatomic) UIControl *shareButton; // ivar: _shareButton
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) CGFloat userRating; // ivar: _userRating


-(?)_getBottomLayoutProperties:(?)arg0 origins:(?)arg1 heightforWidth;
-(?)_getTopLayoutProperties:(?)arg0 origins:(?)arg1 heightforWidth;
-(id)initWithClientContext:(id)arg0 ;
-(void)_cancelConfirmationAction:(id)arg0 ;
-(void)_finishButtonAnimation;
-(void)_reloadItemOfferButton:(BOOL)arg0 ;
-(void)_showConfirmationAction:(id)arg0 ;
-(void)contentRatingArtworkLoader:(id)arg0 didLoadImage:(id)arg1 forContentRating:(id)arg2 ;
-(void)dealloc;
-(void)itemOfferButtonDidAnimateTransition:(id)arg0 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)sizeToFit;


@end


#endif