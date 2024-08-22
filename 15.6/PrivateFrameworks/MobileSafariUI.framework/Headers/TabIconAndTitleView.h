// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABICONANDTITLEVIEW_H
#define TABICONANDTITLEVIEW_H

@class UIView, UIImageView, UILabel;



@interface TabIconAndTitleView : UIView {
    BOOL _horizontallyCenterTitle;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    BOOL _usesAccessibilityContentSizeCategory;
}




-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif