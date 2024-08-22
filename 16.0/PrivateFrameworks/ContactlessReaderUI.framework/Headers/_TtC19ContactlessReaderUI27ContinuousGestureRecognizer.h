// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19CONTACTLESSREADERUI27CONTINUOUSGESTURERECOGNIZER_H
#define _TTC19CONTACTLESSREADERUI27CONTINUOUSGESTURERECOGNIZER_H

@class UIGestureRecognizer;



@interface _TtC19ContactlessReaderUI27ContinuousGestureRecognizer : UIGestureRecognizer {
    ? _touchData;
}




-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif