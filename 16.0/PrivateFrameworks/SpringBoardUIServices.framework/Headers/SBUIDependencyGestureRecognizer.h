// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIDEPENDENCYGESTURERECOGNIZER_H
#define SBUIDEPENDENCYGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSString, NSSet;
@protocol UIGestureRecognizerDelegate;



@interface SBUIDependencyGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>

 {
    CGPoint _initialSceneReferenceLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat hysteresis; // ivar: _hysteresis
@property (copy, nonatomic) NSSet *observedControlClasses; // ivar: _observedControlClasses
@property (readonly) Class superclass;


-(BOOL)_didExceedHysteresisWithTouches:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )_convertPoint:(struct CGPoint )arg0 fromSceneReferenceCoordinatesToView:(id)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif