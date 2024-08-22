// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUINTERACTIVEDISMISSALCONTROLLER_H
#define PUINTERACTIVEDISMISSALCONTROLLER_H

@class UIViewController, UIView;
@protocol PUInterruptibleViewControllerTransition, PUInteractiveDismissalControllerDelegate, PUTilingViewControllerTransition;

#import <Foundation/Foundation.h>

#import "PUTileController.h"
#import "PUTilingView.h"

@interface PUInteractiveDismissalController : NSObject {
    ? _delegateFlags;
}


@property (retain, nonatomic, setter=_setInterruptibleViewControllerTransition:) NSObject<PUInterruptibleViewControllerTransition> *_interruptibleViewControllerTransition; // ivar: __interruptibleViewControllerTransition
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers; // ivar: __needsUpdateGestureRecognizers
@property (weak, nonatomic, setter=_setViewController:) UIViewController *_viewController; // ivar: __viewController
@property (retain, nonatomic, setter=_setViewHostingGestureRecognizers:) UIView *_viewHostingGestureRecognizers; // ivar: __viewHostingGestureRecognizers
@property (weak, nonatomic) NSObject<PUInteractiveDismissalControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PUTileController *designatedTileController;
@property (readonly, nonatomic) BOOL isHandlingDismissalInteraction; // ivar: _isHandlingDismissalInteraction
@property (readonly, nonatomic) PUTilingView *tilingView;
@property (readonly, nonatomic) NSObject<PUTilingViewControllerTransition> *tilingViewControllerTransition;


-(BOOL)canBeginDismissalAtLocationFromProvider:(id)arg0 ;
-(NSInteger)_preferredDismissalTransitionType;
-(void)_invalidateGestureRecognizers;
-(void)_invalidateInterruptibleViewControllerTransition;
-(void)_invalidateViewController;
-(void)_invalidateViewHostingGestureRecognizers;
-(void)_updateGestureRecognizersIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateInterruptibleViewControllerTransitionIfNeeded;
-(void)_updateViewControllerIfNeeded;
-(void)_updateViewHostingGestureRecognizersIfNeeded;
-(void)beginDismissal;
-(void)endDismissal:(BOOL)arg0 ;
-(void)invalidateDelegateData;
-(void)updateDismissalWithInteractionProgress:(CGFloat)arg0 interactionWillFinish:(BOOL)arg1 ;
-(void)updateGestureRecognizersWithHostingView:(id)arg0 ;


@end


#endif