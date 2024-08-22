// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLICATIONMESSAGECONTENTVIEW_H
#define PKAPPLICATIONMESSAGECONTENTVIEW_H

@class UIView, UIButton, UIImageView, UILabel, NSMutableArray, UIFont, PKApplicationMessageContent;
@protocol PKApplicationMessageContentViewDelegate;


#import "PKApplicationMessageContentView_State.h"

@interface PKApplicationMessageContentView : UIView {
    UIButton *_dismiss;
    UIView *_contentView;
    ? _animationState;
    UIView *_iconContainer;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_body;
    ? _layoutState;
    PKApplicationMessageContentView_State *_state;
    NSMutableArray *_snapshots;
    UIFont *_significantFont;
    UIFont *_fixedSignificantFont;
    UIFont *_regularFont;
    BOOL _deferringUpdate;
    BOOL _deferredSubviewUpdate;
    BOOL _dismissable;
    PKApplicationMessageContent *_content;
    id<PKApplicationMessageContentViewDelegate> *_delegate;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif