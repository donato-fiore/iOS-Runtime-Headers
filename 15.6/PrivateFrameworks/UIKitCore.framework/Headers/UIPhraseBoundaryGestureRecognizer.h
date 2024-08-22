// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPHRASEBOUNDARYGESTURERECOGNIZER_H
#define UIPHRASEBOUNDARYGESTURERECOGNIZER_H

@class UIResponder<UITextInput>;


#import "UILongPressGestureRecognizer.h"
#import "UIDelayedAction.h"

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
    UIDelayedAction *_secondDelayTimer;
}


@property (nonatomic) CGFloat secondDelay; // ivar: _secondDelay
@property (readonly, nonatomic) BOOL secondDelayElapsed; // ivar: _secondDelayElapsed
@property (weak, nonatomic) UIResponder<UITextInput> *textInput; // ivar: _textInput
@property (weak, nonatomic) id *userData; // ivar: _userData


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)secondDelayElapsed:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)startTimer;


@end


#endif