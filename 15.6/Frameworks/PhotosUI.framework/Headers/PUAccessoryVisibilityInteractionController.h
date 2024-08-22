// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUACCESSORYVISIBILITYINTERACTIONCONTROLLER_H
#define PUACCESSORYVISIBILITYINTERACTIONCONTROLLER_H

@class PXNumberAnimator, NSString, UIPanGestureRecognizer, PXVerticalSwipeGestureRecognizerHelper;
@protocol PXChangeObserver, UIGestureRecognizerDelegate, PUBrowsingViewModelChangeObserver, PUAccessoryVisibilityInteractionControllerDelegate;

#import <Foundation/Foundation.h>

#import "PUAssetViewModel.h"
#import "PUChangeDirectionValueFilter.h"
#import "PUBrowsingSession.h"

@interface PUAccessoryVisibilityInteractionController : NSObject <PXChangeObserver, UIGestureRecognizerDelegate, PUBrowsingViewModelChangeObserver>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _isUpdateScheduled;
    ? _needsUpdateFlags;
    ? _delegateFlags;
}


@property (retain, nonatomic, setter=_setAssetViewModel:) PUAssetViewModel *_assetViewModel; // ivar: __assetViewModel
@property (retain, nonatomic, setter=_setContentOffsetOverrideFactor:) PXNumberAnimator *_contentOffsetOverrideFactor; // ivar: __contentOffsetOverrideFactor
@property (nonatomic, setter=_setInitialContentOffset:) CGPoint _initialContentOffset; // ivar: __initialContentOffset
@property (retain, nonatomic, setter=_setOverridingContentOffsetY:) PXNumberAnimator *_overridingContentOffsetY; // ivar: __overridingContentOffsetY
@property (retain, nonatomic, setter=_setSwipeDirectionValueFilter:) PUChangeDirectionValueFilter *_swipeDirectionValueFilter; // ivar: __swipeDirectionValueFilter
@property (retain, nonatomic, setter=_setVerticalDirectionValueFilter:) PUChangeDirectionValueFilter *_verticalDirectionValueFilter; // ivar: __verticalDirectionValueFilter
@property (retain, nonatomic) PUBrowsingSession *browsingSession; // ivar: _browsingSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUAccessoryVisibilityInteractionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *verticalSwipeGestureRecognizerHelper; // ivar: _verticalSwipeGestureRecognizerHelper


-(BOOL)_needsUpdate;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_currentAssetViewModel;
-(id)init;
-(void)_handlePanGestureRecognizer:(id)arg0 ;
-(void)_handleScheduledUpdate;
-(void)_invalidateContentOffset;
-(void)_performChanges:(id)arg0 ;
-(void)_setAccessoryVisible:(BOOL)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateContentOffsetIfNeeded;
-(void)_updateGestureRecognizers;
-(void)_updateIfNeeded;
-(void)invalidateViewHostingGestureRecognizers;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif