// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKUSERINTERACTIONGESTURERECOGNIZER_H
#define _MKUSERINTERACTIONGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSMutableSet;
@protocol _MKUserInteractionGestureRecognizerTouchObserver;



@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *_activeTouches;
}


@property (weak, nonatomic) NSObject<_MKUserInteractionGestureRecognizerTouchObserver> *touchObserver; // ivar: _touchObserver


-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif