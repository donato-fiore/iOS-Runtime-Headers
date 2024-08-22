// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI19SPECIFIERHEADERVIEW_H
#define _TTC18HEALTHEXPERIENCEUI19SPECIFIERHEADERVIEW_H

@class UIView;
@protocol PSHeaderFooterView;



@interface _TtC18HealthExperienceUI19SpecifierHeaderView : UIView <PSHeaderFooterView>

 {
    ? image;
    ? descriptionText;
    ? statusText;
    ? $__lazy_storage_$_iconImageView;
    ? $__lazy_storage_$_descriptionLabel;
    ? $__lazy_storage_$_statusLabel;
}




-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSpecifier:(id)arg0 ;


@end


#endif