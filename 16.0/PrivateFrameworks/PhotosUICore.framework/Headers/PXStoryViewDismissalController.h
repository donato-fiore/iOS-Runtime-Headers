// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYVIEWDISMISSALCONTROLLER_H
#define PXSTORYVIEWDISMISSALCONTROLLER_H

@class NSString, UIView;
@protocol PXChangeObserver;

#import <Foundation/Foundation.h>

#import "PXPointAnimator.h"
#import "PXStoryItemPlacement.h"
#import "PXNumberAnimator.h"
#import "PXSwipeDownTracker.h"
#import "PXUpdater.h"
#import "PXStoryViewControllerTransition.h"
#import "PXStoryViewModel.h"

@interface PXStoryViewDismissalController : NSObject <PXChangeObserver>



@property (retain, nonatomic) PXPointAnimator *centerOffsetAnimator; // ivar: _centerOffsetAnimator
@property (nonatomic) CGPoint currentGestureLocation; // ivar: _currentGestureLocation
@property (nonatomic) CGPoint currentGestureVelocity; // ivar: _currentGestureVelocity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialGestureLocation; // ivar: _initialGestureLocation
@property (retain, nonatomic) PXStoryItemPlacement *initialItemPlacement; // ivar: _initialItemPlacement
@property (retain, nonatomic) UIView *referenceView; // ivar: _referenceView
@property (retain, nonatomic) PXNumberAnimator *releaseAnimationDismissalProgressAnimator; // ivar: _releaseAnimationDismissalProgressAnimator
@property (retain, nonatomic) PXNumberAnimator *releaseAnimationProgressAnimator; // ivar: _releaseAnimationProgressAnimator
@property (nonatomic) CGSize sourceSize; // ivar: _sourceSize
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) PXSwipeDownTracker *swipeDownTracker; // ivar: _swipeDownTracker
@property (nonatomic) BOOL targetCancelled; // ivar: _targetCancelled
@property (nonatomic) CGPoint targetCenter; // ivar: _targetCenter
@property (nonatomic) CGSize targetSize; // ivar: _targetSize
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (retain, nonatomic) PXStoryViewControllerTransition *viewControllerTransition; // ivar: _viewControllerTransition
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(void)_invalidateCurrentPlacement;
-(void)_invalidateInitialItemPlacement;
-(void)_invalidateSwipeDownTracker;
-(void)_setNeedsUpdate;
-(void)_updateCurrentPlacement;
-(void)_updateInitialItemPlacement;
-(void)_updateSwipeDownTracker;
-(void)handlePanDownGestureRecognizer:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif