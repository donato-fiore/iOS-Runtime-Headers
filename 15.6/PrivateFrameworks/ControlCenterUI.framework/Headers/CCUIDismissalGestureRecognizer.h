// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUIDISMISSALGESTURERECOGNIZER_H
#define CCUIDISMISSALGESTURERECOGNIZER_H

@class UIPanGestureRecognizer, NSSet;



@interface CCUIDismissalGestureRecognizer : UIPanGestureRecognizer {
    BOOL _triggered;
    NSSet *_currentTouches;
}




-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_cancelOtherGestureRecognizersForTouches:(id)arg0 ;
-(void)_tryToCancelTouches;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif