// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYVIEWMODEPLAYERTOBROWSERTRANSITION_H
#define PXSTORYVIEWMODEPLAYERTOBROWSERTRANSITION_H



#import "PXStoryViewModeFocusedClipsViewTransition.h"
#import "PXNumberAnimator.h"
#import "PXPointAnimator.h"
#import "PXGLayout.h"
#import "PXSwipeDownTracker.h"

@interface PXStoryViewModePlayerToBrowserTransition : PXStoryViewModeFocusedClipsViewTransition {
    PXNumberAnimator *_completionProgressAnimator;
    PXPointAnimator *_centerOffsetAnimator;
    PXGLayout *_referenceLayout;
    BOOL _shouldFadeOutEverything;
    float _fractionCompletedAtFadeOutStart;
    CGFloat _lastSwipeDownDuration;
}


@property (readonly, nonatomic) PXSwipeDownTracker *swipeDownTracker; // ivar: _swipeDownTracker


-(BOOL)hasActiveAnimation;
-(BOOL)shouldFinish;
-(CGFloat)alphaForClipWithInfo:(struct ? )arg0 proposedAlpha:(CGFloat)arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(CGFloat)fadeoutDuration;
-(id)initWithSourceTimelineLayoutSnapshot:(id)arg0 assetReference:(id)arg1 trackingClipIdentifier:(NSInteger)arg2 ;
-(id)presentedBoundingBoxForViewMode:(NSInteger)arg0 ;
-(struct ? )contentsTransformOverrideForClipWithInfo:(struct ? )arg0 proposedOverride:(struct ? )arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(struct CGRect )frameForClipWithInfo:(struct ? )arg0 proposedFrame:(struct CGRect )arg1 inViewMode:(NSInteger)arg2 layout:(id)arg3 ;
-(void)swipeDownInteractionStateDidChange;


@end


#endif