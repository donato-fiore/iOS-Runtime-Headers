// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDPINCHGESTURERECOGNIZER_H
#define UIKEYBOARDPINCHGESTURERECOGNIZER_H

@class NSMutableSet, NSMutableDictionary;
@protocol UIKeyboardPinchGestureRecognizerDelegate;


#import "UIGestureRecognizer.h"

@interface UIKeyboardPinchGestureRecognizer : UIGestureRecognizer {
    CGFloat _pinchSeparationValues;
    NSMutableSet *_activeTouches;
    NSMutableDictionary *_initialTouchPoints;
    CGFloat _beginPinchTimestamp;
}


@property (readonly, nonatomic) CGFloat initialPinchSeparation; // ivar: _initialPinchSeparation
@property (nonatomic) NSObject<UIKeyboardPinchGestureRecognizerDelegate> *pinchDelegate; // ivar: _pinchDelegate
@property (readonly, nonatomic) BOOL pinchDetected; // ivar: _pinchDetected


-(BOOL)canBePreventedByGestureRecognizer:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(CGFloat)finalProgressForInitialProgress:(CGFloat)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)dealloc;
-(void)interpretTouchesForSplit;
-(void)reset;
-(void)resetPinchCalculations;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif