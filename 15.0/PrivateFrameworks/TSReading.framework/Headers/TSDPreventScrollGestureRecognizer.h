// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDPREVENTSCROLLGESTURERECOGNIZER_H
#define TSDPREVENTSCROLLGESTURERECOGNIZER_H

@class UIGestureRecognizer, UITouch;


#import "TSDInteractiveCanvasController.h"

@interface TSDPreventScrollGestureRecognizer : UIGestureRecognizer {
    TSDInteractiveCanvasController *mICC;
    UITouch *mTouch;
    UITouch *mSecondTouch;
}




-(id)initWithInteractiveCanvasController:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif