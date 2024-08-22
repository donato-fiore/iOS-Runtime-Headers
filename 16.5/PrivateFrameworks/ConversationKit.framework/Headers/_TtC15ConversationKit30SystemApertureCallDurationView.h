// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT30SYSTEMAPERTURECALLDURATIONVIEW_H
#define _TTC15CONVERSATIONKIT30SYSTEMAPERTURECALLDURATIONVIEW_H

@class UIView, NSString;



@interface _TtC15ConversationKit30SystemApertureCallDurationView : UIView {
    ? controller;
}


@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) CGFloat alpha;
@property (nonatomic) BOOL hidden;


-(BOOL)isHidden;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif