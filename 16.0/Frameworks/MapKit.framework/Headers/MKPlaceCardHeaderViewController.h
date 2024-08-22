// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACECARDHEADERVIEWCONTROLLER_H
#define MKPLACECARDHEADERVIEWCONTROLLER_H

@class UIImageView, UIView, NSArray, UILayoutGuide, NSURL, NSLayoutConstraint, NSString;
@protocol _MKStackViewDelegate, MKModuleViewControllerProtocol, MKETAProviderObserver, MKUGCCallToActionViewDelegate, MKPlaceCardHeaderViewControllerDelegate, GEOTransitLineItem, _MKPlaceItem;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceSectionRowView.h"
#import "_MKUILabel.h"
#import "_MKDataHeaderModel.h"
#import "_MKTokenAttributedString.h"
#import "MKUGCCallToActionViewAppearance.h"
#import "_MKLocalizedHoursBuilder.h"

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <_MKStackViewDelegate, MKModuleViewControllerProtocol, MKETAProviderObserver>

 {
    NSUInteger _layout;
    MKPlaceSectionRowView *_titleSectionView;
    MKPlaceSectionRowView *_labelsSectionView;
    UIImageView *_logoImageView;
    _MKUILabel *_titleOnlyLabel;
    _MKUILabel *_firstLabel;
    _MKUILabel *_secondLabel;
    _MKUILabel *_secondaryNameLabel;
    _MKUILabel *_thirdLabel;
    UIView *_thirdDisplayedLabel;
    NSArray *_constraints;
    UILayoutGuide *_leadingGuide;
    NSURL *_logoURL;
    _MKDataHeaderModel *_dataModel;
    _MKTokenAttributedString *_titleToken;
    _MKTokenAttributedString *_secondaryNameToken;
    _MKTokenAttributedString *_distanceToken;
    _MKTokenAttributedString *_ratingsToken;
    _MKTokenAttributedString *_priceToken;
    _MKTokenAttributedString *_categoryToken;
    _MKTokenAttributedString *_openStateToken;
    _MKTokenAttributedString *_userLocationToken;
    _MKTokenAttributedString *_venueToken;
    _MKTokenAttributedString *_verifiedToken;
    NSLayoutConstraint *_titleTrailingConstraint;
    NSLayoutConstraint *_secondLabelToFirstLabelConstraint;
    NSLayoutConstraint *_lastLabelToBottomConstraint;
    CGFloat _secondLabelToFirstLabelConstraintConstantMax;
    CGFloat _secondLabelToFirstLabelConstraintConstantMin;
    BOOL _isUserLocation;
    BOOL _optionSmallScreen;
    BOOL _constraintsCreated;
    BOOL _notVerified;
    CGFloat _lastMaskAlphaValueApplied;
}


@property (retain, nonatomic) MKUGCCallToActionViewAppearance *callToActionAppearance; // ivar: _callToActionAppearance
@property (weak, nonatomic) NSObject<MKUGCCallToActionViewDelegate> *callToActionDelegate; // ivar: _callToActionDelegate
@property (nonatomic) CGFloat contentAlpha; // ivar: _contentAlpha
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKPlaceCardHeaderViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat lastLabelToBottomConstant;
@property (readonly, nonatomic) NSObject<GEOTransitLineItem> *lineItem; // ivar: _lineItem
@property (retain, nonatomic) _MKLocalizedHoursBuilder *localizedHoursBuilder; // ivar: _localizedHoursBuilder
@property (readonly, nonatomic) NSObject<_MKPlaceItem> *placeItem; // ivar: _placeItem
@property (readonly, nonatomic) BOOL shouldShowCallToActionWithRatingHeaderInfo;
@property (readonly) Class superclass;


+(CGFloat)minimalModeHeight;
-(BOOL)_canShowWhileLocked;
-(BOOL)_hasSecondaryName;
-(BOOL)_isLikelyToShowDistance;
-(BOOL)_mapItemShouldDisplayDistance:(id)arg0 ;
-(CGFloat)secondaryNameLabelPadding;
-(id)_currentTitle;
-(id)_openStateString;
-(id)_reviewLabelText;
-(id)_secondaryNameTitle;
-(id)_verifiedText;
-(id)initWithLineItem:(id)arg0 layout:(NSUInteger)arg1 ;
-(id)initWithPlaceItem:(id)arg0 layout:(NSUInteger)arg1 ;
-(id)newLabel;
-(id)secondaryNameTimingFunction;
-(id)titleFont;
-(void)ETAProviderUpdated:(id)arg0 ;
-(void)_commonInit;
-(void)_contentSizeDidChange;
-(void)_contentSizeDidChangeNotificationHandler;
-(void)_createViews;
-(void)_loadLogo;
-(void)_setupDatas;
-(void)animateSecondLabelWithPercentage:(CGFloat)arg0 ;
-(void)infoCardThemeChanged;
-(void)setConstraints;
-(void)updateContent;
-(void)updateContentAlpha;
-(void)updateHeaderTitle;
-(void)updateViews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif