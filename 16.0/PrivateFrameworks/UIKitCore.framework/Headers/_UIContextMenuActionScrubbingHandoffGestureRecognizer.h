// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTEXTMENUACTIONSCRUBBINGHANDOFFGESTURERECOGNIZER_H
#define _UICONTEXTMENUACTIONSCRUBBINGHANDOFFGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"

@interface _UIContextMenuActionScrubbingHandoffGestureRecognizer : UIGestureRecognizer {
    CGPoint _initialLocation;
}


@property (nonatomic) CGFloat hysteresis; // ivar: _hysteresis


+(BOOL)_supportsTouchContinuation;
-(BOOL)_gestureIsStillValid;
-(BOOL)_satisfiedHysteresis;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_beginGestureIfPossible;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif