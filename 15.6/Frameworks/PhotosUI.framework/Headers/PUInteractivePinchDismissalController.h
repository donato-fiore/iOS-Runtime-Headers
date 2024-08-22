// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUINTERACTIVEPINCHDISMISSALCONTROLLER_H
#define PUINTERACTIVEPINCHDISMISSALCONTROLLER_H

@class UIPinchGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, PUPinchedTileTrackerDelegate;


#import "PUInteractiveDismissalController.h"
#import "PUPinchedTileTracker.h"
#import "PUChangeDirectionValueFilter.h"

@interface PUInteractivePinchDismissalController : PUInteractiveDismissalController <UIGestureRecognizerDelegate, PUPinchedTileTrackerDelegate>



@property (retain, nonatomic, setter=_setPinchGestureRecognizer:) UIPinchGestureRecognizer *_pinchGestureRecognizer; // ivar: __pinchGestureRecognizer
@property (retain, nonatomic, setter=_setPinchedTileTracker:) PUPinchedTileTracker *_pinchedTileTracker; // ivar: __pinchedTileTracker
@property (retain, nonatomic, setter=_setScaleDirectionValueFilter:) PUChangeDirectionValueFilter *_scaleDirectionValueFilter; // ivar: __scaleDirectionValueFilter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_isHandlingPinchGestureRecognizer, setter=_setHandlingPinchGestureRecognizer:) BOOL handlingPinchGestureRecognizer; // ivar: _handlingPinchGestureRecognizer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)pinchedTiledTracker:(id)arg0 finalLayoutInfoForInitialLayoutInfo:(id)arg1 ;
-(void)_handlePinchGestureRecognizer:(id)arg0 ;
-(void)dealloc;
-(void)updateGestureRecognizersWithHostingView:(id)arg0 ;


@end


#endif