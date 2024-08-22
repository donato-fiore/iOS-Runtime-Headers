// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCADLOCKUPCONTENTVIEW_H
#define ASCADLOCKUPCONTENTVIEW_H

@class UIControl, NSString, UILabel, UIColor;
@protocol ASCOfferButtonDelegate, ASCLockupPresenterView, ASCAdLockupPresenterView, ASCOfferPresenterView;


#import "ASCAdTransparencyButtonView.h"
#import "ASCSkeletonLabel.h"
#import "ASCEditorsChoiceView.h"
#import "ASCArtworkView.h"
#import "ASCOfferButton.h"
#import "ASCOfferTheme.h"
#import "ASCStarRatingView.h"

@interface ASCAdLockupContentView : UIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCAdLockupPresenterView, ASCOfferPresenterView>



@property (nonatomic, getter=isAdMarkerHidden) BOOL adMarkerHidden; // ivar: _adMarkerHidden
@property (readonly, nonatomic) ASCAdTransparencyButtonView *adTransparencyButton; // ivar: _adTransparencyButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ASCSkeletonLabel *descriptionLabel; // ivar: _descriptionLabel
@property (readonly, nonatomic) ASCEditorsChoiceView *editorsChoiceView; // ivar: _editorsChoiceView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILabel *headingLabel;
@property (readonly, nonatomic) UILabel *headingLabelIfLoaded; // ivar: _headingLabelIfLoaded
@property (readonly, nonatomic) ASCArtworkView *iconArtworkView; // ivar: _iconArtworkView
@property (copy, nonatomic) UIColor *loadingColor;
@property (readonly, nonatomic) ASCOfferButton *offerButton; // ivar: _offerButton
@property (readonly, nonatomic) UILabel *offerStatusLabel;
@property (readonly, nonatomic) UILabel *offerStatusLabelIfLoaded; // ivar: _offerStatusLabelIfLoaded
@property (copy, nonatomic) ASCOfferTheme *offerTheme; // ivar: _offerTheme
@property (readonly, nonatomic) CGSize preferredIconSize;
@property (retain, nonatomic) NSString *size; // ivar: _size
@property (readonly, nonatomic) ASCStarRatingView *starRatingView; // ivar: _starRatingView
@property (readonly, nonatomic) ASCSkeletonLabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic) ASCSkeletonLabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) UILabel *userRatingLabel; // ivar: _userRatingLabel


+(id)descriptionLabelFontForSize:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
+(id)userRatingLabelFontForSize:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)makeLayout;
-(id)saveOfferState;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)addAdTransparencyTarget:(id)arg0 action:(SEL)arg1 ;
-(void)addOfferTarget:(id)arg0 action:(SEL)arg1 ;
-(void)beginOfferModalStateWithCancelBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endOfferModalState;
-(void)invalidateIntrinsicContentSize;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)offerButton:(id)arg0 willTransitionToMetadata:(id)arg1 usingAnimator:(id)arg2 ;
-(void)removeAdTransparencyTarget:(id)arg0 action:(SEL)arg1 ;
-(void)removeOfferTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setEditorsChoice:(BOOL)arg0 ;
-(void)setHeading:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setIconImage:(id)arg0 withDecoration:(id)arg1 ;
-(void)setLoading:(BOOL)arg0 ;
-(void)setOfferEnabled:(BOOL)arg0 ;
-(void)setOfferInteractive:(BOOL)arg0 ;
-(void)setOfferMetadata:(id)arg0 ;
-(void)setOfferStatus:(id)arg0 ;
-(void)setPrefersRightToLeftLayout:(BOOL)arg0 ;
-(void)setProductDescription:(id)arg0 ;
-(void)setProductRating:(float)arg0 ;
-(void)setProductRatingBadge:(id)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif