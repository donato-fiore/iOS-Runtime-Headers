// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTRANGEADJUSTMENTINTERACTION_H
#define UITEXTRANGEADJUSTMENTINTERACTION_H

@class NSString;
@protocol UIGestureRecognizerDelegate, UIInteraction, UITextRangeAdjustmentInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UITextGestureTuning.h"
#import "UITextModernLoupeSession.h"
#import "UITouch.h"
#import "UITextRangeAdjustmentGestureRecognizer.h"
#import "UIView.h"

@interface UITextRangeAdjustmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>

 {
    UITextGestureTuning *_gestureTuning;
    UITextModernLoupeSession *_loupeSession;
}


@property (retain, nonatomic) UITouch *activeTouch; // ivar: _activeTouch
@property (readonly, nonatomic) UITextRangeAdjustmentGestureRecognizer *adjustmentGestureRecognizer; // ivar: _adjustmentGestureRecognizer
@property (nonatomic) BOOL baseIsStart; // ivar: _baseIsStart
@property (nonatomic) CGPoint basePoint; // ivar: _basePoint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UITextRangeAdjustmentInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGPoint extentPoint; // ivar: _extentPoint
@property (nonatomic) CGFloat firstMovedTime; // ivar: _firstMovedTime
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialBasePoint; // ivar: _initialBasePoint
@property (nonatomic) CGFloat initialDistance; // ivar: _initialDistance
@property (readonly, nonatomic) CGPoint initialExtentPoint; // ivar: _initialExtentPoint
@property (nonatomic) CGPoint initialPoint; // ivar: _initialPoint
@property (readonly) Class superclass;
@property (nonatomic) CGPoint touchOffset; // ivar: _touchOffset
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)_gestureTuningEnabledForTouches:(id)arg0 ;
-(BOOL)_pointCloserToEnd:(struct CGPoint )arg0 startEdge:(struct CGRect )arg1 endEdge:(struct CGRect )arg2 ;
-(BOOL)_shouldApplyOffsetForTouchType:(NSInteger)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(struct CGPoint )_convertPointToViewCoordinateSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )applyTouchOffset:(struct CGPoint )arg0 ;
-(struct CGRect )_activeAdjustmentEdgeRect;
-(void)_adjustmentInteractionBeganWithLocation:(struct CGPoint )arg0 startPoint:(struct CGPoint )arg1 forTouchType:(NSInteger)arg2 ;
-(void)_adjustmentInteractionCancelled;
-(void)_adjustmentInteractionChangedWithLocation:(struct CGPoint )arg0 forTouchType:(NSInteger)arg1 ;
-(void)_adjustmentInteractionEndedAtLocation:(struct CGPoint )arg0 forTouchType:(NSInteger)arg1 ;
-(void)_createGestureTuningIfNecessary;
-(void)_didRecognizeAdjustmentGesture:(id)arg0 ;
-(void)_updateAdjustmentInteractionWithState:(NSInteger)arg0 location:(struct CGPoint )arg1 locationOfFirstTouch:(struct CGPoint )arg2 forTouchType:(NSInteger)arg3 ;
-(void)didMoveToView:(id)arg0 ;
-(void)manuallyUpdateInteractionWithGestureState:(NSInteger)arg0 location:(struct CGPoint )arg1 locationOfFirstTouch:(struct CGPoint )arg2 forTouchType:(NSInteger)arg3 ;
-(void)updateBaseAndExtentPointsFromEdges;
-(void)willMoveToView:(id)arg0 ;


@end


#endif