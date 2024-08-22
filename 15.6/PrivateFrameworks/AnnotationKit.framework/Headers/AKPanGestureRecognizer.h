// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKPANGESTURERECOGNIZER_H
#define AKPANGESTURERECOGNIZER_H

@class UIPanGestureRecognizer, NSMutableSet, NSMutableArray, NSString;
@protocol AKPenDetectionGestureRecognizerProtocol;



@interface AKPanGestureRecognizer : UIPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>



@property (readonly, nonatomic) NSUInteger additionalNumberOfTouches;
@property (retain, nonatomic) NSMutableSet *additionalTouches; // ivar: _additionalTouches
@property (retain, nonatomic) NSMutableArray *currentAccumulatedTouches; // ivar: _currentAccumulatedTouches
@property (nonatomic) CGFloat currentMaxWeight; // ivar: _currentMaxWeight
@property (nonatomic) CGFloat currentWeight; // ivar: _currentWeight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint locationOfFirstTouch; // ivar: _locationOfFirstTouch
@property (nonatomic) BOOL penGestureDetected; // ivar: _penGestureDetected
@property (readonly) Class superclass;


-(id)accumulatedTouches;
-(struct CGPoint )locationOfFirstTouchInView:(id)arg0 ;
-(void)_checkTouchForStylus:(id)arg0 ;
-(void)reset;
-(void)resetAccumulatedTouches;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif