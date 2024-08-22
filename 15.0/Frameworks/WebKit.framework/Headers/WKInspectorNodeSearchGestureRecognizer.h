// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKINSPECTORNODESEARCHGESTURERECOGNIZER_H
#define WKINSPECTORNODESEARCHGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer {
    RetainPtr<UITouch> _touch;
}




-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_processTouches:(id)arg0 state:(NSInteger)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif