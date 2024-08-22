// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIINTERNALDRAGGINGSESSIONSOURCE_H
#define _UIINTERNALDRAGGINGSESSIONSOURCE_H

@class UIDraggingImageSlotOwner, PBItemCollection, NSTimer, NSString, NSArray;
@protocol _UIDraggingInfo, _UIDraggingSessionDelegate;


#import "UIDraggingSystemTouchRoutingPolicy.h"
#import "_UIDragSetDownAnimation.h"
#import "UIDraggingBeginningSessionConfiguration.h"
#import "UIWindow.h"
#import "UIDragEvent.h"
#import "_UIDruidSourceConnection.h"
#import "UIView.h"

@interface _UIInternalDraggingSessionSource : UIDraggingImageSlotOwner <_UIDraggingInfo>

 {
    CGPoint _lastNotifiedCentroid;
    BOOL _didHandOffDragImage;
    PBItemCollection *_pbItemCollection;
    UIDraggingSystemTouchRoutingPolicy *_touchRoutingPolicy;
    _UIDragSetDownAnimation *_setDownAnimation;
    NSInteger _stateAfterSetDown;
    BOOL _sentWillEnd;
    BOOL _hostIsActive;
    BOOL _originatedInHostedWindow;
    NSTimer *_waitingToSendDidExitAppTimer;
    UIDraggingBeginningSessionConfiguration *_configuration;
}


@property (readonly, nonatomic) BOOL canAddItems;
@property (readonly, nonatomic) CGPoint centroid; // ivar: _centroid
@property (readonly, nonatomic) UIWindow *centroidWindow; // ivar: _centroidWindow
@property (nonatomic) NSInteger dataOwner; // ivar: _dataOwner
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIDraggingSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didHandOffDragImage;
@property (weak, nonatomic) UIDragEvent *dragEvent; // ivar: _dragEvent
@property (readonly, nonatomic) NSUInteger draggingSourceOperationMask;
@property (retain, nonatomic) _UIDruidSourceConnection *druidConnection; // ivar: _druidConnection
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *internalItems; // ivar: _internalItems
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) NSUInteger outsideAppSourceOperationMask; // ivar: _outsideAppSourceOperationMask
@property (readonly, nonatomic) BOOL prefersFullSizePreview;
@property (nonatomic) NSUInteger resultOperation; // ivar: _resultOperation
@property (readonly, nonatomic) unsigned int sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) BOOL shouldCancelOnAppDeactivation;
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIWindow *weakCentroidWindow; // ivar: _weakCentroidWindow
@property (readonly, nonatomic) NSUInteger withinAppSourceOperationMask; // ivar: _withinAppSourceOperationMask


-(BOOL)_canHandOffCancelledItems:(id)arg0 ;
-(BOOL)_routingPolicyHasSpecificTouchContextIDs;
-(BOOL)dynamicallyUpdatesPrefersFullSizePreviews;
-(BOOL)preventsSimultaneousDragFromView:(id)arg0 ;
-(BOOL)touchRoutingPolicyContainsContextIDToAlwaysSend:(unsigned int)arg0 ;
-(id)initWithDragManager:(id)arg0 configuration:(id)arg1 ;
-(id)touchRoutingPolicy;
-(struct CGPoint )draggingLocationInCoordinateSpace:(id)arg0 ;
-(void)_didBeginDrag;
-(void)_endWithOperation:(NSUInteger)arg0 ;
-(void)_getOperationMaskFromDelegate;
-(void)_handOffCancelledItems:(id)arg0 ;
-(void)_hostDidDeactivate;
-(void)_hostWillBecomeActive;
-(void)_sendDataTransferFinished;
-(void)_sendDidEndWithOperation:(NSUInteger)arg0 ;
-(void)_sendDidMove;
-(void)_sendDragPreviewReplyWithIndexSet:(id)arg0 dragPreviews:(id)arg1 completion:(id)arg2 ;
-(void)_sendHandedOffDragImage;
-(void)_sendHandedOffDragImageForItem:(id)arg0 ;
-(void)_sendWillAddItems:(id)arg0 ;
-(void)_sendWillBegin;
-(void)_sendWillEndWithOperation:(NSUInteger)arg0 ;
-(void)_setupAnimationForCancelledItems:(id)arg0 returningContextID:(*unsigned int)arg1 layerRenderID:(*NSUInteger)arg2 ;
-(void)addPublicItems:(id)arg0 ;
-(void)beginDrag:(id)arg0 ;
-(void)cancelDrag;
-(void)dragDidExitApp;
-(void)dragIsInsideApp;
-(void)enumerateItemsUsingBlock:(id)arg0 ;
-(void)itemsBecameDirty:(id)arg0 ;
-(void)updateCentroidFromDragEvent;


@end


#endif