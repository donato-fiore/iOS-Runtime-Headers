// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKRULERCONTROLLER_H
#define PKRULERCONTROLLER_H

@class UIView, UIImpactFeedbackGenerator, NSString;
@protocol UIGestureRecognizerDelegate, PKRulerDelegate, PKRulerHostingDelegate;

#import <Foundation/Foundation.h>

#import "PKRulerGestureRecognizer.h"
#import "PKRulerView.h"
#import "PKRulerLayer.h"

@interface PKRulerController : NSObject <UIGestureRecognizerDelegate>

 {
    UIView *_rulerHostingView;
    BOOL _wantsSharedRuler;
    BOOL _isInteractingWithRuler;
    BOOL _rulerIsRotating;
    BOOL _rulerWasShownViaGesture;
    BOOL _canRulerSnapToAngle;
    BOOL _lastTouchWasMaskedByRuler;
    BOOL _lastDrawingWasMaskedByRuler;
    BOOL _lastDrawingWasSnappedToRuler;
    BOOL _rulerSnappedToAngle;
    PKRulerGestureRecognizer *_rulerGestureRecognizer;
    id<PKRulerDelegate> *_delegate;
    id<PKRulerHostingDelegate> *_rulerHostingDelegate;
    PKRulerView *_rulerView;
    PKRulerLayer *_rulerLayer;
    UIImpactFeedbackGenerator *_snapImpactBehavior;
    ? _rulerState;
    ? _previousRulerState;
    CGAffineTransform _rulerStartTransform;
    CGAffineTransform _defaultRulerTransform;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(void)dealloc;
-(void)eatPencilGesture:(id)arg0 ;
-(void)rulerMoveGesture:(id)arg0 ;


@end


#endif