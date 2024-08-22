// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABICONANDTITLEVIEW_H
#define TABICONANDTITLEVIEW_H

@class UIView, UIImageView, UILabel, SFUnreadIndicator;



@interface TabIconAndTitleView : UIView {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    BOOL _usesAccessibilityContentSizeCategory;
    SFUnreadIndicator *_unreadIndicator;
    BOOL _showsUnreadIndicator;
    NSInteger _alignment;
}




-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif