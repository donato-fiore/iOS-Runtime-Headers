// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUIPANDISMISSALGESTURERECOGNIZER_H
#define SIRIUIPANDISMISSALGESTURERECOGNIZER_H

@class UIPanGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, SiriUIPanDismissalGestureRecognizerDelegate;



@interface SiriUIPanDismissalGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SiriUIPanDismissalGestureRecognizerDelegate> *dismissalDelegate; // ivar: _dismissalDelegate
@property (nonatomic) NSInteger dismissalStyle; // ivar: _dismissalStyle
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger initialDirection; // ivar: _initialDirection
@property (nonatomic) CGPoint initialPosition; // ivar: _initialPosition
@property (copy, nonatomic) id *rtlProvider; // ivar: _rtlProvider
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithDismissalDelegate:(id)arg0 dismissalStyle:(NSInteger)arg1 ;
-(id)initWithDismissalDelegate:(id)arg0 dismissalStyle:(NSInteger)arg1 rtlProvider:(id)arg2 ;
-(void)_handlePanWithRubberBandDownDismissUp:(id)arg0 requiredDirection:(NSInteger)arg1 ;
-(void)_handlePanWithRubberBandUpDownDismissTrailing:(id)arg0 requiredDirection:(NSInteger)arg1 ;
// -(void)_updatePanGestureRecognizer:(id)arg0 changedAnimations:(id)arg1 endAnimations:(unk)arg2  ;
-(void)panGestureRecognizerDidPan:(id)arg0 ;


@end


#endif