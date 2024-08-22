// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI30DISMISSIBLEBOLDTITLEHEADERVIEW_H
#define _TTC18HEALTHEXPERIENCEUI30DISMISSIBLEBOLDTITLEHEADERVIEW_H

@class UIView;



@interface _TtC18HealthExperienceUI30DismissibleBoldTitleHeaderView : UIView {
    ? chromeHostView;
    ? heightConstraint;
    ? dataSource;
    ? detailLabel;
    ? titleLabel;
    ? accessoryLabel;
    ? detailContainerView;
    ? $__lazy_storage_$_accessoryImage;
    ? title;
}




-(id)accessibilityAccessoryLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif