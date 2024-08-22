// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIACCESSIBILITYHUDGESTUREMANAGER_H
#define UIACCESSIBILITYHUDGESTUREMANAGER_H

@class NSMutableArray, NSString;
@protocol UIGestureRecognizerDelegatePrivate, UIAccessibilityHUDGestureDelegate;

#import <Foundation/Foundation.h>

#import "UIViewController.h"
#import "_UIAccessibilityHUDLongPressGestureRecognizer.h"
#import "_UIAccessibilityHUDGateGestureRecognizer.h"
#import "UIGestureRecognizer.h"
#import "UIView.h"

@interface UIAccessibilityHUDGestureManager : NSObject <UIGestureRecognizerDelegatePrivate>

 {
    id<UIAccessibilityHUDGestureDelegate> *_delegate;
    UIViewController *_viewControllerDisplayingHUD;
    _UIAccessibilityHUDLongPressGestureRecognizer *_recognizer;
    _UIAccessibilityHUDGateGestureRecognizer *_gateRecognizer;
    NSMutableArray *_subscribedConcurrentGestureRecognizers;
    BOOL _delegateDirectlyShowsHUD;
    BOOL _isInvalidated;
}


@property (readonly, nonatomic) UIGestureRecognizer *_recognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)_gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_bestViewControllerForView;
-(id)_subscribedConcurrentGestureRecognizers;
-(id)initWithView:(id)arg0 delegate:(id)arg1 ;
-(void)_backOff;
-(void)_clearButtonItemGestureSubscriptions;
-(void)_concurrentGestureRecognizerFired:(id)arg0 ;
-(void)_didToggleLargeContentViewer:(id)arg0 ;
-(void)_dismissAccessibilityHUD;
-(void)_gestureRecognizerChanged:(id)arg0 ;
-(void)_invalidate;
-(void)_openGate;
-(void)_setRecognizersEnabled:(BOOL)arg0 ;
-(void)_showAccessibilityHUDItem:(id)arg0 ;
-(void)dealloc;


@end


#endif