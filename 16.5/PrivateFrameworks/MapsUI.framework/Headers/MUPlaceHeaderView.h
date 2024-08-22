// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEHEADERVIEW_H
#define MUPLACEHEADERVIEW_H

@class UIView, UILabel, MKTransitInfoLabelView, NSLayoutConstraint, UILayoutGuide, NSString;
@protocol MKActivityObserving, MUPlaceHeaderViewDelegate, MUPlaceHeaderViewModel;


#import "MUImageView.h"
#import "MUVerifiedLogoImageView.h"
#import "MULinkView.h"
#import "MUCardButton.h"
#import "MUStackLayout.h"
#import "MUPlaceCoverPhotoTransitionController.h"
#import "MUPlaceCoverPhotoOptions.h"

@interface MUPlaceHeaderView : UIView <MKActivityObserving>

 {
    MUImageView *_heroImageView;
    MUImageView *_verifiedBusinessCoverPhotoImageView;
    MUVerifiedLogoImageView *_verifiedBusinessLogoImageView;
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
    MULinkView *_containmentLabel;
    UILabel *_verifiedLabel;
    UIView *_verifiedBusinessContainerView;
    MUCardButton *_shareButton;
    MKTransitInfoLabelView *_transitInfoLabelView;
    id *_trailingConstraintProvider;
    NSLayoutConstraint *_titleTrailingConstraint;
    NSLayoutConstraint *_verifiedBusinessHeaderHeightConstraint;
    UILayoutGuide *_topToTitleLayoutGuide;
    MUStackLayout *_stackLayout;
    CGRect _cachedBounds;
    MUPlaceHeaderMetrics _headerMetrics;
    MUPlaceCoverPhotoTransitionController *_coverPhotoTransitionController;
}


@property (readonly, nonatomic) MUPlaceCoverPhotoOptions *coverPhotoOptions; // ivar: _coverPhotoOptions
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlaceHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldBlurChromeHeaderButtons;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressContainmentTap; // ivar: _suppressContainmentTap
@property (readonly, nonatomic) UILayoutGuide *titleLabelToTopLayoutGuide;
@property (nonatomic) CGFloat verifiedBusinessHeaderAlpha;
@property (nonatomic) CGFloat verifiedBusinessHeaderHeight;
@property (retain, nonatomic) NSObject<MUPlaceHeaderViewModel> *viewModel; // ivar: _viewModel


+(CGFloat)minimalModeHeight;
-(CGFloat)_trailingPadding;
-(id)_verifiedAttributedString;
-(id)initWithViewModel:(id)arg0 coverPhotoOptions:(id)arg1 trailingConstraintProvider:(id)arg2 ;
-(id)initWithViewModel:(id)arg0 trailingConstraintProvider:(id)arg1 ;
-(void)_contentSizeDidChange;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_shareButtonPressed;
-(void)_tappedEnclosingPlace;
-(void)_updateAppearance;
-(void)_updateContainmentLineWithAttributedString;
-(void)_updateCoverPhoto;
-(void)_updateWithTransitionController:(id)arg0 ;
-(void)beginAnimatingActivityIndicator;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;
-(void)hideTitle:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)reloadTrailingConstraint;
-(void)setVerifiedBusinessHeaderExpansionProgress:(CGFloat)arg0 ;


@end


#endif