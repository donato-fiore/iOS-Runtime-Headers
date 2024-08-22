// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTRANSITDEPARTURESCELL_H
#define MKTRANSITDEPARTURESCELL_H

@class NSMutableDictionary, NSArray, UIImageView, UIButton, UIStackView, NSLayoutConstraint, NSMapTable, NSDate, NSTimeZone, NSString;
@protocol MKTransitDeparturesCellDelegate;


#import "MKCustomSeparatorCell.h"
#import "_MKUILabel.h"
#import "MKThemeMultiPartLabel.h"

@interface MKTransitDeparturesCell : MKCustomSeparatorCell {
    NSUInteger _cellStyle;
    NSMutableDictionary *_constraintsByCellStyle;
    NSArray *_currentCellStyleConstraints;
    UIImageView *_lineImageView;
    UIImageView *_incidentIconImageView;
    _MKUILabel *_primaryLabel;
    MKThemeMultiPartLabel *_secondaryLabel;
    MKThemeMultiPartLabel *_tertiaryLabel;
    UIButton *_incidentButton;
    _MKUILabel *_departureLabel;
    _MKUILabel *_departureDetailLabel;
    UIStackView *_departureStackView;
    UIStackView *_secondaryTextStackView;
    NSLayoutConstraint *_labelLeadingMarginConstraint;
    BOOL _enforceMinimumDepartureLabelWidth;
    NSLayoutConstraint *_minimumDepartureLabelWidthConstraint;
    NSMapTable *_departureDependentConstraintsByView;
    CGFloat _lineImageCenteringValue;
    NSLayoutConstraint *_lineImageToContainerTrailingConstraint;
    NSLayoutConstraint *_lineImageViewTopConstraint;
    NSLayoutConstraint *_lineImageViewToBottomConstraint;
    NSLayoutConstraint *_primaryToTopConstraint;
    NSLayoutConstraint *_departureStackViewToBottomConstraint;
    NSLayoutConstraint *_departureLabelToTopConstraint;
    NSLayoutConstraint *_departureLabelToPrimaryBaselineConstraint;
    NSLayoutConstraint *_lineImageViewCenteringConstraint;
    NSLayoutConstraint *_lineImageViewCenteringVerticalPaddingConstraint;
    NSLayoutConstraint *_incidentIconHorizontalConstraint;
    NSLayoutConstraint *_primaryToBottomConstraint;
    NSLayoutConstraint *_secondaryStackToPrimaryConstraint;
    NSLayoutConstraint *_secondaryStackToBottomConstraint;
    NSLayoutConstraint *_lineImageToTextGutterConstraint;
    NSLayoutConstraint *_lineImageLeadingConstraint;
    NSLayoutConstraint *_lineImageCompressedLeadingConstraint;
    UIImageView *_disclosureArrowImageView;
    NSLayoutConstraint *_labelToDisclosureArrowConstraint;
    NSLayoutConstraint *_lineImageViewHeightConstraint;
}


@property (retain, nonatomic) NSDate *countdownReferenceDate; // ivar: _countdownReferenceDate
@property (weak, nonatomic) NSObject<MKTransitDeparturesCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDate *departureCutoffDate; // ivar: _departureCutoffDate
@property (nonatomic) NSUInteger departureStyle; // ivar: _departureStyle
@property (retain, nonatomic) NSTimeZone *departureTimeZone; // ivar: _departureTimeZone
@property (retain, nonatomic) NSArray *departures; // ivar: _departures
@property (retain, nonatomic) NSString *frequency; // ivar: _frequency
@property (nonatomic, getter=isInactive) BOOL inactive; // ivar: _inactive
@property (copy, nonatomic) NSString *incidentTitle; // ivar: _incidentTitle
@property (readonly, nonatomic) CGFloat labelMargin;
@property (nonatomic) CGFloat lineImageViewSize; // ivar: _lineImageViewSize
@property (retain, nonatomic) NSString *operatingHours; // ivar: _operatingHours
@property (nonatomic, getter=isShowingIncidentIcon) BOOL showIncidentIcon; // ivar: _showIncidentIcon
@property (nonatomic, getter=isShowingNoConnectionEmDash) BOOL showNoConnectionEmDash; // ivar: _showNoConnectionEmDash
@property (nonatomic) BOOL useCompressedGutter; // ivar: _useCompressedGutter
@property (nonatomic) BOOL useCompressedLeading; // ivar: _useCompressedLeading
@property (nonatomic) BOOL useMultilineDeparturesLabel; // ivar: _useMultilineDeparturesLabel


+(BOOL)_needsUpdateMaxLabelWidths;
+(CGFloat)_maxExpectedDepartureLabelWidth;
+(CGFloat)_minTextWidth;
+(CGFloat)maxLineImageWidthforWidth:(CGFloat)arg0 ;
+(id)_attributedStringForCountdownDepartures:(id)arg0 referenceDate:(id)arg1 isShowingNoConnectionEmDash:(BOOL)arg2 ;
+(id)_departureDetailLabelFont;
+(id)_departureLabelFont;
+(id)_nowString;
+(id)_primaryFont;
+(id)_stringForCountdownDepartures:(id)arg0 referenceDate:(id)arg1 isShowingNoConnectionEmDash:(BOOL)arg2 ;
+(id)_stringFromTimestampDate:(id)arg0 departureTimeZone:(id)arg1 ;
+(id)defaultSecondaryFont;
+(id)displayableCountdowDepartureDatesFromDates:(id)arg0 withReferenceDate:(id)arg1 ;
+(id)strongSecondaryFont;
+(void)_addEmDashAttributes:(id)arg0 ;
+(void)_calculateMaxLabelWidths;
+(void)_enumerateMinutesUntilDepartureDates:(id)arg0 withReferenceDate:(id)arg1 block:(id)arg2 ;
+(void)useCompressedGutter:(*BOOL)arg0 compressedLeading:(*BOOL)arg1 forImageWidth:(CGFloat)arg2 inWidth:(CGFloat)arg3 ;
-(BOOL)_isDisplayingDepartureInfo;
-(BOOL)_newStationCardUIEnabled;
-(BOOL)_shouldEnforceDepartureDependentConstraints;
-(BOOL)_shouldEnforceMinimumDepartureLabelWidth;
-(BOOL)_shouldPinSecondaryStackViewToBottom;
-(BOOL)isOpaque;
-(CGFloat)_baselineSpacingAboveView:(id)arg0 ;
-(CGFloat)_labelMarginWithLineImageViewWidth:(CGFloat)arg0 ;
-(CGFloat)_labelToBottomScaledConstantForFullCenteredCellStyle;
-(CGFloat)_labelToTopScaledConstantForFullCenteredCellStyle;
-(CGFloat)_separatorHeight;
-(NSUInteger)_bestCellStyleForCurrentState;
-(NSUInteger)_displayableDeparturesCount;
-(id)_constraintsForCellStyle:(NSUInteger)arg0 ;
-(id)_departureDates;
-(id)_fontForView:(id)arg0 ;
-(id)_incidentIcon;
-(id)_operatingHoursDescriptionForSequence:(id)arg0 mapItem:(id)arg1 useNewLineDelimeter:(BOOL)arg2 ;
-(id)_startEndDatesForSequence:(id)arg0 date:(id)arg1 mapItem:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)multipartStringSeparator;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_addIncidentIcon;
-(void)_commonInit;
-(void)_contentSizeCategoryDidChange;
-(void)_getDepartureDependentConstraintsToActivate:(*id)arg0 toDeactivate:(*id)arg1 ;
-(void)_incidentButtonPressed;
-(void)_removeIncidentIcon;
-(void)_setCellStyle:(NSUInteger)arg0 ;
-(void)_updateConstraintValues;
-(void)_updateDepartureDependentConstraintsForCurrentState;
-(void)_updateLabelFonts;
-(void)_updateLineImageViewConstraintConstants;
-(void)configureCellForRowIndex:(NSInteger)arg0 withMapItem:(id)arg1 sectionController:(id)arg2 outNextLineIsSame:(*BOOL)arg3 ;
-(void)configureLeadingWithTableViewContentMargin:(CGFloat)arg0 width:(CGFloat)arg1 ;
-(void)dealloc;
-(void)infoCardThemeChanged;
-(void)layoutSubviews;
-(void)refreshDeparturesDisplay;
-(void)setAccessibilityOrder;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setIncidentButtonHidden:(BOOL)arg0 ;
-(void)setLineImage:(id)arg0 ;
-(void)setPrimaryText:(id)arg0 ;
-(void)setSecondaryText:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg0 ;
-(void)setShowDisclosureArrow:(BOOL)arg0 ;
-(void)setShowNoConnectionEnDash:(BOOL)arg0 ;
-(void)setTertiaryText:(id)arg0 ;
-(void)updateConstraints;


@end


#endif