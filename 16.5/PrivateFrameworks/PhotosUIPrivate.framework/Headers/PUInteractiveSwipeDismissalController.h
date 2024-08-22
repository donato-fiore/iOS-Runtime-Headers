// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUINTERACTIVESWIPEDISMISSALCONTROLLER_H
#define PUINTERACTIVESWIPEDISMISSALCONTROLLER_H

@class UIPanGestureRecognizer, NSString, PXVerticalSwipeGestureRecognizerHelper;
@protocol UIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate;


#import "PUInteractiveDismissalController.h"
#import "PUChangeDirectionValueFilter.h"
#import "PUSwipedDownTileTracker.h"

@interface PUInteractiveSwipeDismissalController : PUInteractiveDismissalController <UIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate>



@property (retain, nonatomic, setter=_setDismissGestureDirectionValueFilter:) PUChangeDirectionValueFilter *_dismissGestureDirectionValueFilter; // ivar: __dismissGestureDirectionValueFilter
@property (retain, nonatomic, setter=_setPanGestureRecognizer:) UIPanGestureRecognizer *_panGestureRecognizer; // ivar: __panGestureRecognizer
@property (retain, nonatomic, setter=_setSwipedDownTileTracker:) PUSwipedDownTileTracker *_swipedDownTileTracker; // ivar: __swipedDownTileTracker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_isHandlingPanGestureRecognizer, setter=_setHandlingPanGestureRecognizer:) BOOL handlingPanGestureRecognizer; // ivar: _handlingPanGestureRecognizer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *verticalSwipeGestureRecognzierHelper; // ivar: _verticalSwipeGestureRecognzierHelper


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)verticalSwipeGestureRecognizerHelper:(id)arg0 shouldRecognizeSwipeDownGestureRecognizer:(id)arg1 ;
-(id)init;
-(void)_handlePanGestureRecognizer:(id)arg0 ;
-(void)dealloc;
-(void)updateGestureRecognizersWithHostingView:(id)arg0 ;


@end


#endif