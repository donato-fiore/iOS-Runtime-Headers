// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI33FEATURESTATUSPLATFORMFEEDITEMVIEW_H
#define _TTC18HEALTHEXPERIENCEUI33FEATURESTATUSPLATFORMFEEDITEMVIEW_H

@class UIView;



@interface _TtC18HealthExperienceUI33FeatureStatusPlatformFeedItemView : UIView {
    ? baseIdentifier;
    ? parentViewController;
    ? actionHandler;
    ? context;
    ? containerViewBackgroundColor;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_primaryDescriptionStackView;
    ? secondaryFootnoteColor;
    ? secondaryFootnoteFont;
    ? secondaryLinkColor;
    ? secondaryLinkFont;
    ? $__lazy_storage_$_secondaryDescriptionLabel;
    ? $__lazy_storage_$_iconImageView;
    ? $__lazy_storage_$_disclosureImageView;
    ? $__lazy_storage_$_bottomAccessoryView;
    ? iconImageViewWidthConstraint;
    ? iconImageViewLeadingConstraint;
    ? disclosureImageViewWidthConstraint;
    ? disclosureImageViewTrailingConstraint;
    ? titleLabelLeadingConstraint;
    ? titleLabelTopConstraint;
    ? titleLabelTrailingConstraint;
    ? primaryDescriptionStackViewHeightConstraint;
    ? primaryDescriptionStackViewTopSpacingConstraint;
    ? secondaryDescriptionLabelHeightConstraint;
    ? secondaryDescriptionLabelTopSpacingConstraint;
    ? secondaryDescriptionLabelBottomConstraint;
    ? bottomAccessoryViewHeightConstraint;
    ? bottomAccessoryViewBottomConstraint;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didSelectCell:(id)arg0 in:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif