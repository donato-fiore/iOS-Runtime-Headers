// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDDYNAMICOPERATIONCONTROLLER_H
#define TSDDYNAMICOPERATIONCONTROLLER_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "TSDInteractiveCanvasController.h"
#import "TSDAutoscroll.h"

@interface TSDDynamicOperationController : NSObject {
    TSDInteractiveCanvasController *mICC;
    BOOL mOperationIsDynamic;
    BOOL mResetGuides;
    BOOL mSupportsAlignmentGuides;
    BOOL mPossibleDynamicOperation;
    TSDAutoscroll *mAutoscroll;
}


@property (readonly, nonatomic) NSSet *allTransformedReps; // ivar: mAllTransformedReps
@property (readonly, nonatomic) NSSet *currentlyTransformingReps; // ivar: mReps


-(BOOL)isInOperation;
-(BOOL)isInPossibleDynamicOperation;
-(BOOL)isOperationDynamic;
-(id)initWithInteractiveCanvasController:(id)arg0 ;
-(void)beginOperation;
-(void)beginPossibleDynamicOperation;
-(void)cancelOperation;
-(void)dealloc;
-(void)endOperation;
-(void)handleGestureRecognizer:(id)arg0 ;
-(void)handleTrackerManipulator:(id)arg0 ;
-(void)invalidateGuides;
-(void)p_beginDynamicOperationForReps:(id)arg0 ;
-(void)p_cleanupOperation;
-(void)p_controllingTMDidResetInOperation:(id)arg0 ;
-(void)p_resetGuidesForCleanup:(BOOL)arg0 ;
-(void)startTransformingReps:(id)arg0 ;
-(void)stopTransformingReps:(id)arg0 ;


@end


#endif