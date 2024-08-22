// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUONEUPGESTURERECOGNIZERCOORDINATOR_H
#define PUONEUPGESTURERECOGNIZERCOORDINATOR_H

@class UILongPressGestureRecognizer, NSHashTable, NSString, PULongPressDragController;
@protocol UIGestureRecognizerDelegate, PUOneUpGestureRecognizerCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "PUTouchingGestureRecognizer.h"
#import "PUBrowsingSession.h"
#import "PUDoubleTapZoomController.h"
#import "PUOneUpBarsController.h"

@interface PUOneUpGestureRecognizerCoordinator : NSObject <UIGestureRecognizerDelegate>

 {
    ? _delegateFlags;
    PUTouchingGestureRecognizer *_touchingGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}


@property (retain, nonatomic, setter=_setIrisGestureRecognizers:) NSHashTable *_irisGestureRecognizers; // ivar: __irisGestureRecognizers
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers; // ivar: __needsUpdateGestureRecognizers
@property (retain, nonatomic) PUBrowsingSession *browsingSession; // ivar: _browsingSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUOneUpGestureRecognizerCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PUDoubleTapZoomController *doubleTapZoomController; // ivar: _doubleTapZoomController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PULongPressDragController *longPressDragController; // ivar: _longPressDragController
@property (retain, nonatomic) PUOneUpBarsController *oneUpBarsController; // ivar: _oneUpBarsController
@property (readonly) Class superclass;
@property (readonly, nonatomic) PUTouchingGestureRecognizer *touchingGestureRecognizer;


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)longPressGestureRecognizer;
-(void)_invalidateGestureRecognizers;
-(void)_updateGestureRecognizersIfNeeded;
-(void)addIrisGestureRecognizer:(id)arg0 ;
-(void)invalidateViewHostingGestureRecognizers;


@end


#endif