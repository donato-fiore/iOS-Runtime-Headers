// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15CONVERSATIONKIT18COUNTDOWNALERTVIEW_H
#define _TTC15CONVERSATIONKIT18COUNTDOWNALERTVIEW_H

@class UIView;



@interface _TtC15ConversationKit18CountdownAlertView : UIView {
    ? backgroundView;
    ? circleView;
    ? numberLabel;
    ? titleLabel;
    ? dividerView;
    ? stopButton;
    ? completion;
    ? newTimer;
    ? stoppedTimer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)cancel;
-(void)layoutSubviews;


@end


#endif