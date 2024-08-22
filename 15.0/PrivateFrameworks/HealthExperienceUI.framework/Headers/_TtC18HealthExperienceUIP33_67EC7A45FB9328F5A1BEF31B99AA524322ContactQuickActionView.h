// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUIP33_67EC7A45FB9328F5A1BEF31B99AA524322CONTACTQUICKACTIONVIEW_H
#define _TTC18HEALTHEXPERIENCEUIP33_67EC7A45FB9328F5A1BEF31B99AA524322CONTACTQUICKACTIONVIEW_H

@class TtC18HealthExperienceUI29BackgroundHighlightableButton;



@interface _TtC18HealthExperienceUIP33_67EC7A45FB9328F5A1BEF31B99AA524322ContactQuickActionView : TtC18HealthExperienceUI29BackgroundHighlightableButton {
    ? presentingViewController;
    ? contactType;
    ? contactButtonDelegate;
    ? didTapAction;
    ? $__lazy_storage_$_contactIconImageView;
    ? $__lazy_storage_$_label;
    ? isDisabled;
    ? $__lazy_storage_$_regularConstraints;
    ? $__lazy_storage_$_accessibilityConstraints;
}




-(id)initWithCoder:(id)arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif