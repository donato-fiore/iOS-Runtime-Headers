// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDKNOBTRACKER_H
#define TSDKNOBTRACKER_H

@protocol TSDLayoutManipulatingTracker;

#import <Foundation/Foundation.h>

#import "TSDAutoscroll.h"
#import "TSDInteractiveCanvasController.h"
#import "TSDKnob.h"
#import "TSDRep.h"

@interface TSDKnobTracker : NSObject <TSDLayoutManipulatingTracker>



@property (retain, nonatomic) TSDAutoscroll *autoscroll; // ivar: mAutoscroll
@property (nonatomic) CGPoint currentPosition; // ivar: mCurrentPosition
@property (readonly, nonatomic) CGFloat delay;
@property (readonly, nonatomic) BOOL didBegin; // ivar: mDidBegin
@property (nonatomic) BOOL didDrag; // ivar: mDidDrag
@property (nonatomic) BOOL dragEnding; // ivar: mDragEnding
@property (readonly, nonatomic) BOOL endedOperationDueToESC; // ivar: mEndedOperationDueToESC
@property (readonly, nonatomic) TSDInteractiveCanvasController *icc;
@property (nonatomic) BOOL isInspectorDrivenTracking; // ivar: mIsInspectorDrivenTracking
@property (retain, nonatomic) TSDKnob *knob; // ivar: mKnob
@property (readonly, nonatomic) CGPoint knobOffset; // ivar: mKnobOffset
@property (retain, nonatomic) TSDRep *rep; // ivar: mRep


-(BOOL)allowHUDToDisplay;
-(BOOL)operationShouldBeDynamic;
-(BOOL)shouldEndMovingKnobOnESC;
-(BOOL)shouldHideOtherKnobs;
-(BOOL)shouldHideSelectionHighlight;
-(BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg0 ;
-(BOOL)shouldUseKnobOffset;
-(BOOL)supportsAlignmentGuides;
-(BOOL)wantsAutoscroll;
-(CGFloat)unscaledStartAutoscrollThreshold;
-(NSUInteger)enabledKnobMask;
-(id)initWithRep:(id)arg0 knob:(id)arg1 ;
-(int)allowedAutoscrollDirections;
-(struct CGAffineTransform )transformInRootForStandardKnobs;
-(struct CGPoint )convertKnobPositionToUnscaledCanvas:(struct CGPoint )arg0 ;
-(struct CGRect )currentBoundsForStandardKnobs;
-(void)beginMovingKnob;
-(void)changeDynamicLayoutsForReps:(id)arg0 ;
-(void)commitChangesForReps:(id)arg0 ;
-(void)dealloc;
-(void)endMovingKnob;
-(void)moveKnobToCanvasPosition:(struct CGPoint )arg0 ;
-(void)moveKnobToRepPosition:(struct CGPoint )arg0 ;
-(void)updateAfterAutoscroll:(id)arg0 ;
-(void)willEndMovingKnobDueToESC;


@end


#endif