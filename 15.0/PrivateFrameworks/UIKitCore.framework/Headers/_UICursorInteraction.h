// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICURSORINTERACTION_H
#define _UICURSORINTERACTION_H

@class NSString;
@protocol UIPointerInteractionDelegate, UIInteraction, _UICursorInteractionDelegate;

#import <Foundation/Foundation.h>

#import "_UICursorRequest.h"
#import "UIPointerInteraction.h"
#import "UIView.h"

@interface _UICursorInteraction : NSObject <UIPointerInteractionDelegate, UIInteraction>

 {
    ? _delegateImplements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<_UICursorInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_pausesCursorUpdatesWhilePanning, setter=_setPausesCursorUpdatesWhilePanning:) BOOL pausesCursorUpdatesWhilePanning;
@property (retain, nonatomic) _UICursorRequest *pendingRequest; // ivar: _pendingRequest
@property (readonly) Class superclass;
@property (retain, nonatomic) UIPointerInteraction *underlyingPointerInteraction; // ivar: _underlyingPointerInteraction
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 completion:(id)arg3 ;
-(void)_pointerInteraction:(id)arg0 targetRegionForDeceleratingPointerWithRequests:(id)arg1 completion:(id)arg2 ;
// -(void)_queryDelegateRegionForRequest:(id)arg0 defaultRegion:(id)arg1 completion:(id)arg2 synchronously:(unk)arg3  ;
-(void)didMoveToView:(id)arg0 ;
-(void)invalidate;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif