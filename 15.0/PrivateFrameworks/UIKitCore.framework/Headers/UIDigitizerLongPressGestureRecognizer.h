// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDIGITIZERLONGPRESSGESTURERECOGNIZER_H
#define UIDIGITIZERLONGPRESSGESTURERECOGNIZER_H

@class NSString;
@protocol _UIDigitizerGestureRecognizerImpDelegate;


#import "UIGestureRecognizer.h"
#import "_UIDigitizerGestureRecognizerImp.h"

@interface UIDigitizerLongPressGestureRecognizer : UIGestureRecognizer <_UIDigitizerGestureRecognizerImpDelegate>

 {
    _UIDigitizerGestureRecognizerImp *_imp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGPoint digitizerLocation;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minimumPressDuration;
@property (readonly) Class superclass;


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEndedSuccessfully:(id)arg0 ;
-(void)pressesHeldForMinimum:(id)arg0 ;
-(void)pressesHeldOverMaximum:(id)arg0 ;
-(void)pressesNotHeldLongEnough:(id)arg0 ;
-(void)reset;
-(void)setAllowedPressTypes:(id)arg0 ;
-(void)setAllowedTouchTypes:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesBeganSuccessfully:(id)arg0 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif