// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUIEXPANDABLEPLATTERPANGESTURERECOGNIZER_H
#define SIRISHAREDUIEXPANDABLEPLATTERPANGESTURERECOGNIZER_H

@class UIPanGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, SiriSharedUIExpandablePlatterPanGestureRecognizerDelegate;



@interface SiriSharedUIExpandablePlatterPanGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate>



@property (nonatomic) BOOL allowExpandedState; // ivar: _allowExpandedState
@property (nonatomic) CGFloat collapsedHeight; // ivar: _collapsedHeight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat expandedHeight; // ivar: _expandedHeight
@property (weak, nonatomic) NSObject<SiriSharedUIExpandablePlatterPanGestureRecognizerDelegate> *expansionDelegate; // ivar: _expansionDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialHeight; // ivar: _initialHeight
@property (nonatomic) CGFloat scrollViewContentHeight; // ivar: _scrollViewContentHeight
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(CGFloat)projectedTranslationWithVelocity:(CGFloat)arg0 decelerationRate:(CGFloat)arg1 ;
-(id)initWithExpansionDelegate:(id)arg0 ;
-(void)panGestureRecognizerDidPan:(id)arg0 ;


@end


#endif