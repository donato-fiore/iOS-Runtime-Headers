// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT21PARTICIPANTVIEWBUTTON_H
#define _TTC15CONVERSATIONKIT21PARTICIPANTVIEWBUTTON_H

@class UIControl;



@interface _TtC15ConversationKit21ParticipantViewButton : UIControl {
    ? imageView;
    ? blurView;
    ? discView;
    ? image;
    ? colorConfiguration;
}


@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;


-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif