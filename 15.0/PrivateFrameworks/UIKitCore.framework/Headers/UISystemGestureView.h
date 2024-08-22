// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISYSTEMGESTUREVIEW_H
#define UISYSTEMGESTUREVIEW_H



#import "UIView.h"

@interface UISystemGestureView : UIView



-(BOOL)_canChangeFirstResponder:(id)arg0 toResponder:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)_hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
-(struct CGRect )_responderSelectionRectForWindow:(id)arg0 ;


@end


#endif