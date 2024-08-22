// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCLINICALONBOARDINGGATEWAYCELL_H
#define WDCLINICALONBOARDINGGATEWAYCELL_H

@class UILabel, NSLayoutConstraint, HKBorderLineView, UIStackView;


#import "WDMedicalRecordGroupableCell.h"
#import "WDBrandLogoView.h"

@interface WDClinicalOnboardingGatewayCell : WDMedicalRecordGroupableCell

@property (readonly, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (readonly, nonatomic) NSLayoutConstraint *featureDownloadBottomConstraint; // ivar: _featureDownloadBottomConstraint
@property (readonly, nonatomic) UILabel *featureDownloadTextLabel; // ivar: _featureDownloadTextLabel
@property (readonly, nonatomic) UILabel *featureDownloadTitleLabel; // ivar: _featureDownloadTitleLabel
@property (readonly, nonatomic) HKBorderLineView *featureDownloadView; // ivar: _featureDownloadView
@property (readonly, nonatomic) NSLayoutConstraint *featureSharingBottomConstraint; // ivar: _featureSharingBottomConstraint
@property (readonly, nonatomic) UILabel *featureSharingTextLabel; // ivar: _featureSharingTextLabel
@property (readonly, nonatomic) UILabel *featureSharingTitleLabel; // ivar: _featureSharingTitleLabel
@property (readonly, nonatomic) HKBorderLineView *featureSharingView; // ivar: _featureSharingView
@property (readonly, nonatomic) WDBrandLogoView *logoView; // ivar: _logoView
@property (readonly, nonatomic) UIStackView *outerSpecContainerView; // ivar: _outerSpecContainerView
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) UILabel *tapToConnectLabel; // ivar: _tapToConnectLabel
@property (readonly, nonatomic) NSLayoutConstraint *tapToConnectLabelHeightConstraint; // ivar: _tapToConnectLabelHeightConstraint
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) UIStackView *verticalSpecContainerView; // ivar: _verticalSpecContainerView


-(id)_contentViewMarginsGuide;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_constrainStackViewContainerWithinContentView;
-(void)_createDetailLabel;
-(void)_createDownloadAvailableView;
-(void)_createLogoView;
-(void)_createOuterSpecContainerView;
-(void)_createSharingAvailableView;
-(void)_createTapToConnectLabel;
-(void)_createTitleLabel;
-(void)_createVerticalSpecContainerView;
-(void)_positionTapToConnectLabel;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg0 ;
-(void)_updateForContentSizeCategory:(id)arg0 ;
-(void)_updateLabelVisibility;
-(void)configureWithGateway:(id)arg0 dataProvider:(id)arg1 connected:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setUpConstraints;
-(void)setupSubviews;
-(void)tintColorDidChange;


@end


#endif