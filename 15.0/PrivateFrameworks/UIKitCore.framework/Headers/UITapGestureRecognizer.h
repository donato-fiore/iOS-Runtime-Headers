// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITAPGESTURERECOGNIZER_H
#define UITAPGESTURERECOGNIZER_H

@class NSString, NSArray;
@protocol UITapRecognizerDelegate;


#import "UIGestureRecognizer.h"
#import "UITapRecognizer.h"

@interface UITapGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate>

 {
    CGPoint _locationInView;
    UITapRecognizer *_imp;
    unsigned int _delaysRecognitionForGreaterTapCounts;
}


@property (nonatomic, setter=_setButtonType:) NSInteger _buttonType; // ivar: _buttonType
@property (nonatomic) NSInteger buttonMaskRequired;
@property (readonly, nonatomic) CGPoint centroid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSingleKeyPressGesture; // ivar: _isSingleKeyPressGesture
@property (readonly, nonatomic) CGPoint location;
@property (nonatomic) CGFloat maximumTapDuration;
@property (nonatomic) NSUInteger numberOfTapsRequired;
@property (nonatomic) NSUInteger numberOfTouchesRequired;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *touches;


+(BOOL)_supportsTouchContinuation;
+(BOOL)supportsSecureCoding;
-(BOOL)_delaysRecognitionForGreaterTapCounts;
-(BOOL)_isGestureType:(NSInteger)arg0 ;
-(BOOL)_shouldFailInResponseToPresses:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg0 ;
-(BOOL)canPreventGestureRecognizer:(id)arg0 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg0 ;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg0 ;
-(CGFloat)_allowableSeparation;
-(CGFloat)_allowableTouchTimeSeparation;
-(CGFloat)_touchSloppinessFactor;
-(CGFloat)allowableMovement;
-(CGFloat)maximumIntervalBetweenSuccessiveTaps;
-(CGFloat)maximumSingleTapDuration;
-(NSInteger)_finalStateForRecognition;
-(NSUInteger)numberOfTouches;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )_digitizerLocation;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )locationOfTouch:(NSUInteger)arg0 inView:(id)arg1 ;
-(void)_appendSubclassDescription:(id)arg0 ;
-(void)_resetGestureRecognizer;
-(void)_setAllowableSeparation:(CGFloat)arg0 ;
-(void)_setAllowableTouchTimeSeparation:(CGFloat)arg0 ;
-(void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setAllowableMovement:(CGFloat)arg0 ;
-(void)setAllowedPressTypes:(id)arg0 ;
-(void)setMaximumIntervalBetweenSuccessiveTaps:(CGFloat)arg0 ;
-(void)setMaximumSingleTapDuration:(CGFloat)arg0 ;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg0 ;
-(void)tapRecognizerRecognizedTap:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif