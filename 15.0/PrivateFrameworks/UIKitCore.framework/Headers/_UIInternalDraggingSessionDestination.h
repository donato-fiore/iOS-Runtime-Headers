// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIINTERNALDRAGGINGSESSIONDESTINATION_H
#define _UIINTERNALDRAGGINGSESSIONDESTINATION_H

@class UIDraggingImageSlotOwner, NSMutableSet, PBItemCollection, NSPointerArray, NSString, NSArray, NSProgress;
@protocol _UIDataTransferMonitorDelegate, NSProgressReporting, _UIDraggingInfo, _UIDropInteractionOwning, _UIDruidDestinationConnection;


#import "_UIInternalDraggingSessionSource.h"
#import "UIWindowScene.h"
#import "_UIDragSetDownAnimation.h"
#import "_UIDataTransferMonitor.h"
#import "_UIApplicationModalProgressController.h"
#import "_DUIPotentialDrop.h"
#import "UIDragEvent.h"
#import "UIWindow.h"
#import "_UIDropSessionImpl.h"

@interface _UIInternalDraggingSessionDestination : UIDraggingImageSlotOwner <_UIDataTransferMonitorDelegate, NSProgressReporting, _UIDraggingInfo>

 {
    unsigned int _touchRoutingPolicyContextID;
    _UIInternalDraggingSessionSource *_sessionSource;
    BOOL _connectedToDruid;
    BOOL _isPolicyDriven;
    BOOL _dragInteractionDidEnd;
    NSMutableSet *_enteredDestinations;
    id<_UIDropInteractionOwning> *_dropDestinationOwner;
    UIWindowScene *_dropDestinationWindowScene;
    id *_dropPerformBlock;
    id *_dropCompletionBlock;
    id *_postDropAnimationCompletionBlock;
    _UIDragSetDownAnimation *_setDownAnimation;
    PBItemCollection *_droppedItemCollection;
    _UIDataTransferMonitor *_dataTransferMonitor;
    _UIApplicationModalProgressController *_modalProgressAlertController;
    BOOL _dropWasPerformed;
    _DUIPotentialDrop *_lastPotentialDrop;
    NSPointerArray *_dragEvents;
}


@property (readonly, nonatomic) UIDragEvent *activeDragEvent;
@property (readonly, nonatomic) CGPoint centroid; // ivar: _centroid
@property (readonly, nonatomic) UIWindow *centroidWindow; // ivar: _centroidWindow
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didRequestDropToBePerformed;
@property (readonly, nonatomic) NSArray *dragEvents;
@property (readonly, nonatomic) NSUInteger draggingSourceOperationMask;
@property (readonly, nonatomic) BOOL drivenByPointer; // ivar: _drivenByPointer
@property (readonly, nonatomic) NSArray *dropItemProviders; // ivar: _dropItemProviders
@property (readonly, nonatomic) _UIDropSessionImpl *dropSession; // ivar: _dropSession
@property (retain, nonatomic) NSObject<_UIDruidDestinationConnection> *druidConnection; // ivar: _druidConnection
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UIInternalDraggingSessionSource *inAppSessionSource;
@property (copy, nonatomic) NSArray *internalItems; // ivar: _internalItems
@property (readonly, nonatomic) BOOL isAccessibilitySession; // ivar: _isAccessibilitySession
@property (readonly, nonatomic) NSUInteger outsideAppSourceOperationMask; // ivar: _outsideAppSourceOperationMask
@property (readonly, nonatomic) NSArray *preDropItemProviders;
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (nonatomic) NSUInteger progressIndicatorStyle; // ivar: _progressIndicatorStyle
@property (readonly, nonatomic) unsigned int sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) BOOL shouldDragEventBeSentToGestureRecognizers;
@property (readonly, nonatomic) NSInteger sourceDataOwner; // ivar: _sourceDataOwner
@property (readonly, nonatomic) NSUInteger sourceOperationMask;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIWindow *weakCentroidWindow; // ivar: _weakCentroidWindow


-(BOOL)canBeDrivenByDragEvent:(id)arg0 ;
-(NSUInteger)actualDragOperationForProposedDragOperation:(NSUInteger)arg0 destinationDataOwner:(NSInteger)arg1 forbidden:(*BOOL)arg2 ;
-(id)initWithDragManager:(id)arg0 dragEvent:(id)arg1 ;
-(struct CGPoint )draggingLocationInCoordinateSpace:(id)arg0 ;
-(void)_removeFromDragManager;
-(void)_sessionDidEndNormally:(BOOL)arg0 ;
-(void)addDragEvent:(id)arg0 ;
-(void)connect;
-(void)dataTransferMonitorBeganTransfers:(id)arg0 ;
-(void)dataTransferMonitorFinishedTransfers:(id)arg0 ;
-(void)dragDidExitApp;
-(void)dragInteractionEnding;
-(void)enteredDestination:(id)arg0 ;
-(void)enumerateItemsUsingBlock:(id)arg0 ;
-(void)handOffDroppedItems:(id)arg0 ;
-(void)itemsBecameDirty:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
// -(void)requestDropOnOwner:(id)arg0 withOperation:(NSUInteger)arg1 perform:(id)arg2 completion:(unk)arg3  ;
-(void)requestVisibleItems:(id)arg0 ;
-(void)sawDragEndEvent;
-(void)setUpDropAnimation:(id)arg0 contextID:(*unsigned int)arg1 layerRenderID:(*NSUInteger)arg2 ;
-(void)takePotentialDrop:(id)arg0 ;
-(void)takeVisibleDroppedItems:(id)arg0 ;
-(void)updateCentroidFromDragEvent;


@end


#endif