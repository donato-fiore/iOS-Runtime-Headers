// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDKNOBDRAGGESTURERECOGNIZER_H
#define TSDKNOBDRAGGESTURERECOGNIZER_H

@class UIGestureRecognizer, UITouch;
@protocol TSDAutoscrollDelegate, TSDTrackerManipulator;


#import "TSDiOSCanvasViewController.h"
#import "TSDKnobTracker.h"
#import "TSDRep.h"
#import "TSDAutoscroll.h"
#import "TSDInteractiveCanvasController.h"

@interface TSDKnobDragGestureRecognizer : UIGestureRecognizer <TSDAutoscrollDelegate, TSDTrackerManipulator>

 {
    TSDiOSCanvasViewController *mCVC;
    UITouch *mTouch;
    CGPoint mKnobToTouchOffset;
    TSDKnobTracker *mTracker;
    BOOL mKnobTouchHasMoved;
    BOOL mDelayHasElapsed;
    CGPoint mOriginalPointInWindow;
    UITouch *mSecondTouch;
    TSDRep *mLastHitRep;
    BOOL mTouchesMoved;
}


@property (retain, nonatomic) TSDAutoscroll *autoscroll; // ivar: mAutoscroll
@property (nonatomic) CGPoint autoscrollPoint; // ivar: mAutoscrollPoint
@property (readonly, nonatomic) TSDInteractiveCanvasController *icc;
@property (readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // ivar: mICC


-(BOOL)allowTrackerManipulatorToTakeControl:(id)arg0 ;
-(BOOL)p_hitRepIsValid:(id)arg0 ;
-(BOOL)readyToEndOperation;
-(CGFloat)unscaledStartAutoscrollThreshold;
-(id)initWithInteractiveCanvasController:(id)arg0 ;
-(id)tracker;
-(int)allowedAutoscrollDirections;
-(struct CGPoint )p_pointInUnscaledCanvas;
-(void)cancelBecauseOfRotation;
-(void)dealloc;
-(void)operationDidEnd;
-(void)p_cancelDelayedKnobTracking;
-(void)p_requestDelayedKnobTracking:(CGFloat)arg0 ;
-(void)p_triggerDelayedKnobTracking:(id)arg0 ;
-(void)reset;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateAfterAutoscroll:(id)arg0 ;


@end


#endif