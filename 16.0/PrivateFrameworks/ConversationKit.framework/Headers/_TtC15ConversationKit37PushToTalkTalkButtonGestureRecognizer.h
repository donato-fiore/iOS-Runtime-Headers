// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT37PUSHTOTALKTALKBUTTONGESTURERECOGNIZER_H
#define _TTC15CONVERSATIONKIT37PUSHTOTALKTALKBUTTONGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface _TtC15ConversationKit37PushToTalkTalkButtonGestureRecognizer : UIGestureRecognizer {
    ? interval;
    ? maximumVerticalVelocity;
    ? timer;
    ? previous;
    ? recognizedGestureWorkItem;
}




-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif