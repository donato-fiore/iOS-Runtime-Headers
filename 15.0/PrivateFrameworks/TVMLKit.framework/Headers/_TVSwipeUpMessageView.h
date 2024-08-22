// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVSWIPEUPMESSAGEVIEW_H
#define _TVSWIPEUPMESSAGEVIEW_H

@class UIView, NSString, UILabel;


#import "_TVImageView.h"

@interface _TVSwipeUpMessageView : UIView {
    int _swipeUpMessageState;
}


@property (readonly, nonatomic) _TVImageView *chevronView; // ivar: _chevronView
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) UILabel *messageView; // ivar: _messageView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_processSwipeUpMessageEvent:(int)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif