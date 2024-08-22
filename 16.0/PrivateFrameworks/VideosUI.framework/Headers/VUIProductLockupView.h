// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPRODUCTLOCKUPVIEW_H
#define VUIPRODUCTLOCKUPVIEW_H

@class UIView, NSString, NSArray, UIImage, VUIImageProxy, VUIImageView, NSNumber;
@protocol VUIRentalExpirationLabelDelegate, VUIProductLockupViewDelegate, VUILibraryProductLockupViewLayout;


#import "VUISeparatorView.h"
#import "FocusableTextView.h"
#import "VUIRentalExpirationLabel.h"
#import "VUIRoundButton.h"
#import "VUIMediaTagsView.h"
#import "VUILabel.h"

@interface VUIProductLockupView : UIView <VUIRentalExpirationLabelDelegate>



@property (copy, nonatomic) NSString *availabilityText; // ivar: _availabilityText
@property (copy, nonatomic) NSArray *badgeResources; // ivar: _badgeResources
@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView; // ivar: _bottomSeparatorView
@property (copy, nonatomic) NSString *contentDescription; // ivar: _contentDescription
@property (nonatomic) BOOL contentDescriptionExpanded; // ivar: _contentDescriptionExpanded
@property (retain, nonatomic) UIImage *contentRatingImage; // ivar: _contentRatingImage
@property (readonly, nonatomic) VUIImageProxy *coverArtImageProxy; // ivar: _coverArtImageProxy
@property (retain, nonatomic) VUIImageView *coverArtImageView; // ivar: _coverArtImageView
@property (readonly, nonatomic) UIImage *coverArtPlaceholderImage; // ivar: _coverArtPlaceholderImage
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUIProductLockupViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FocusableTextView *descriptionTextView; // ivar: _descriptionTextView
@property (nonatomic) BOOL didSetUpViews; // ivar: _didSetUpViews
@property (retain, nonatomic) UIView *downloadView; // ivar: _downloadView
@property (retain, nonatomic) NSNumber *duration; // ivar: _duration
@property (retain, nonatomic) VUIRentalExpirationLabel *expirationLabel; // ivar: _expirationLabel
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<VUILibraryProductLockupViewLayout> *layout; // ivar: _layout
@property (retain, nonatomic) VUIRoundButton *leftButton; // ivar: _leftButton
@property (retain, nonatomic) VUIMediaTagsView *mediaBadgeTagsView; // ivar: _mediaBadgeTagsView
@property (retain, nonatomic) VUIMediaTagsView *mediaInfoTagsView; // ivar: _mediaInfoTagsView
@property (copy, nonatomic) NSNumber *releaseYear; // ivar: _releaseYear
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) VUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView; // ivar: _topSeparatorView


+(id)productLockupViewWithMedia:(id)arg0 ;
-(CGFloat)_descriptionBottomMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)_descriptionTopMarginWithBaselineMargin:(CGFloat)arg0 otherFont:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutForCategoryAccessibility:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )_layoutForCompact:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )_layoutForStacked:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )_layoutWithSize:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )_sizeOfDescriptionLabel:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateSubtitleLabelForWindowWidth:(CGFloat)arg0 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithMediaEntity:(id)arg0 ;


@end


#endif