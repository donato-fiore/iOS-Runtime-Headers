// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15REMINDERSUICORE25TTRLISTAPPEARANCEGRIDVIEW_H
#define _TTC15REMINDERSUICORE25TTRLISTAPPEARANCEGRIDVIEW_H

@class UIView, NSArray;



@interface _TtC15RemindersUICore25TTRListAppearanceGridView : UIView {
    ? preferredMaxLayoutWidth;
    ? horizontalMargins;
    ? topMargin;
    ? arrangedSubviews;
    ? verticalGap;
}


@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) CGSize badgeSize; // ivar: badgeSize
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic) CGFloat minimumGap; // ivar: minimumGap


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif