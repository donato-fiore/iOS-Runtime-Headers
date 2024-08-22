// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8NEWSFEED27DEBUGFORMATEDITORSTATUSVIEW_H
#define _TTC8NEWSFEED27DEBUGFORMATEDITORSTATUSVIEW_H

@class UIView;



@interface _TtC8NewsFeed27DebugFormatEditorStatusView : UIView {
    ? onHistoryTap;
    ? historyButton;
    ? onPackageTap;
    ? packageButton;
    ? onErrorTap;
    ? errorButton;
    ? statusLabel;
    ? editor;
    ? activityIndicatorView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif