// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCMODALVIEWGESTURERECOGNIZER_H
#define ASCMODALVIEWGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSMutableSet, UIView;



@interface ASCModalViewGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) NSMutableSet *activeTouches; // ivar: _activeTouches
@property (readonly, nonatomic) UIView *targetView; // ivar: _targetView


-(BOOL)isAnyTouch:(id)arg0 fromEvent:(id)arg1 outsideView:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTargetView:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif