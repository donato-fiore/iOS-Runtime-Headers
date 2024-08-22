// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISGESTURERECOGNIZER_H
#define ACUISGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSString, NSSet;
@protocol UIGestureRecognizerDelegate;



@interface ACUISGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *observedControlClasses; // ivar: _observedControlClasses
@property (readonly) Class superclass;


-(BOOL)_shouldRecognizeTouchForView:(id)arg0 ;
-(BOOL)_shouldRecognizeTouches:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif