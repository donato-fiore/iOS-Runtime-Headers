// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISWIPEDISMISSALGESTURERECOGNIZER_H
#define _UISWIPEDISMISSALGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"

@interface _UISwipeDismissalGestureRecognizer : UIGestureRecognizer

@property (nonatomic) CGFloat allowableMovement; // ivar: _allowableMovement
@property (nonatomic) CGPoint originalTouchPoint; // ivar: _originalTouchPoint


+(BOOL)_shouldDefaultToTouches;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif