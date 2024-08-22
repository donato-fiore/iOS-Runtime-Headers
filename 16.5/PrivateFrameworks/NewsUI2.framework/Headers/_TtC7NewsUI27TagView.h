// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI27TAGVIEW_H
#define _TTC7NEWSUI27TAGVIEW_H

@class UIView, NSString;
@protocol TSAXCustomReorderMessaging;



@interface _TtC7NewsUI27TagView : UIView <TSAXCustomReorderMessaging>

 {
    ? titleLabel;
    ? imageView;
    ? imageBorder;
    ? subtitleLabel;
    ? badgeView;
    ? countLabel;
    ? accessoryView;
    ? isSelectable;
    ? isHighlightable;
    ? isEditing;
    ? titleFrame;
    ? editingTitleFrame;
    ? subtitleFrame;
    ? editingSubtitleFrame;
    ? contentAccessibilityElement;
    ? _notificationSwitch;
    ? _likeButton;
    ? _dislikeButton;
    ? _shortcutButton;
    ? keyCommandBlocks;
    ? tsaxAccessibilityLabelForReordering;
    ? isSelected;
    ? isHighlighted;
}


@property (nonatomic, readonly) NSString *title;
@property (nonatomic, copy) NSString *tsaxAccessibilityLabelForReordering;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif