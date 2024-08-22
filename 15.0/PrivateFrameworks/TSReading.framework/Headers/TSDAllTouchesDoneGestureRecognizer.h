// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDALLTOUCHESDONEGESTURERECOGNIZER_H
#define TSDALLTOUCHESDONEGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSMutableSet;



@interface TSDAllTouchesDoneGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *mTouches;
}




-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)dealloc;
-(void)p_touchesEndedOrCancelled:(id)arg0 ;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif