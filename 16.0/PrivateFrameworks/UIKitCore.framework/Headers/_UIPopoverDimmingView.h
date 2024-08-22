// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPOPOVERDIMMINGVIEW_H
#define _UIPOPOVERDIMMINGVIEW_H

@class NSString;
@protocol _UIPassthroughScrollInteractionDelegate, _UIPopoverDimmingViewDelegate;


#import "UIDimmingView.h"
#import "_UIPassthroughScrollInteraction.h"
#import "UIView.h"

@interface _UIPopoverDimmingView : UIDimmingView <_UIPassthroughScrollInteractionDelegate>

 {
    BOOL _lastHitTestWasPassedThrough;
}


@property (readonly, nonatomic) _UIPassthroughScrollInteraction *_passthroughScrollInteraction; // ivar: _passthroughScrollInteraction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIPopoverDimmingViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *transitionContainerView; // ivar: _transitionContainerView


-(BOOL)passthroughScrollInteraction:(id)arg0 shouldInteractAtLocation:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_sendDelegateDimmingViewWasTapped;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif