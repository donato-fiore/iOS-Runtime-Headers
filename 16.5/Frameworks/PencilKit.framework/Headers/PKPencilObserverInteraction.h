// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPENCILOBSERVERINTERACTION_H
#define PKPENCILOBSERVERINTERACTION_H

@class UIPencilInteraction, NSString, UIView;
@protocol PKHoverControllerDelegate, PKPencilObserverGestureRecognizerDelegate, UIPencilInteractionDelegate, UIInteraction, PKPencilObserverInteractionDelegate;

#import <Foundation/Foundation.h>

#import "PKPencilStatisticsManager.h"
#import "PKHoverController.h"
#import "PKPencilShadowView.h"
#import "PKPencilObserverGestureRecognizer.h"

@interface PKPencilObserverInteraction : NSObject <PKHoverControllerDelegate, PKPencilObserverGestureRecognizerDelegate, UIPencilInteractionDelegate, UIInteraction>

 {
    vector<PKInputPoint, std::allocator<PKInputPoint>> _inputPoints;
    BOOL _shadowOpacityOverrideIsActive;
    id<PKPencilObserverInteractionDelegate> *_delegate;
    CGFloat _shadowOpacityOverrideValue;
    PKPencilStatisticsManager *_statisticsManager;
    PKHoverController *_hoverController;
    PKPencilShadowView *_systemShadowView;
    PKPencilObserverGestureRecognizer *_pencilObserver;
    CGFloat _timestampForHoverBegan;
    CGFloat _timestampForPencilObserverBegan;
    CGFloat _timestampForShadowOpacityOverrideChange;
    CGFloat _previousActivePencilMinuteTimestamp;
    UIPencilInteraction *_pencilInteraction;
    CGPoint _currentLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)didMoveToView:(id)arg0 ;
-(void)disableOpacityOverride;
-(void)hoverController:(id)arg0 didBegin:(struct ? )arg1 ;
-(void)hoverController:(id)arg0 didUpdate:(struct ? )arg1 ;
-(void)hoverController:(id)arg0 intentionalHoverWithDuration:(CGFloat)arg1 ;
-(void)hoverControllerDidEnd:(id)arg0 ;
-(void)pencilInteractionDidTap:(id)arg0 ;
-(void)pencilObserver:(id)arg0 didBeginAtPoint:(struct ? )arg1 ;
-(void)pencilObserver:(id)arg0 didMoveToPoint:(struct ? )arg1 ;
-(void)pencilObserverDidEnd:(id)arg0 ;
-(void)sceneDidEnterBackground:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif