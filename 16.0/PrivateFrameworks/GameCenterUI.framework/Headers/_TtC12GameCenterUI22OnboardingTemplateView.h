// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI22ONBOARDINGTEMPLATEVIEW_H
#define _TTC12GAMECENTERUI22ONBOARDINGTEMPLATEVIEW_H

@class UIView;



@interface _TtC12GameCenterUI22OnboardingTemplateView : UIView {
    ? headerTitle;
    ? headerDetailText;
    ? headerIcon;
    ? viewBeforeHeader;
    ? viewAfterHeader;
    ? viewsInVerticalBottomTray;
    ? viewsInHorizontalBottomTray;
    ? contentStack;
    ? contentScrollView;
    ? $__lazy_storage_$_headerContainer;
    ? $__lazy_storage_$_headerView;
    ? bottomTrayTopMargin;
    ? bottomTrayIntraItemSpacing;
    ? bottomTrayButtonHeight;
    ? $__lazy_storage_$_verticalBottomTray;
    ? $__lazy_storage_$_horizontalButtonTray;
    ? verticalContentSpacing;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif