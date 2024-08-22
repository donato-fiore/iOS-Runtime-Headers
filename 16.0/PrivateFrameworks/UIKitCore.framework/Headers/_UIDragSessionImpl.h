// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDRAGSESSIONIMPL_H
#define _UIDRAGSESSIONIMPL_H

@class NSMutableArray, NSMapTable, NSHashTable, NSMutableSet, NSString, NSArray, NSSet;
@protocol _UIDraggingSessionDelegate, UIDragSession, _UIDragSetDownAnimationTarget, _UIDragDropSessionInternal;

#import <Foundation/Foundation.h>

#import "_UIInternalDraggingSessionSource.h"
#import "UIDragInteraction.h"

@interface _UIDragSessionImpl : NSObject <_UIDraggingSessionDelegate, UIDragSession, _UIDragSetDownAnimationTarget, _UIDragDropSessionInternal>

 {
    NSMutableArray *_allItems;
    NSMapTable *_dragSourceInteractionByItem;
    NSHashTable *_allInteractions;
    BOOL _didHandOffDragImage;
    NSMutableSet *_addedDraggingItemsWaitingForHandOffOfDragImage;
    NSMutableSet *_addedDragItemsPendingUpdate;
}


@property (readonly, nonatomic, getter=_allowsItemsToUpdate) BOOL _allowsItemsToUpdate;
@property (readonly, nonatomic) NSInteger _dataOwner;
@property (readonly, nonatomic) BOOL allowsMoveOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_internalDragSession, setter=_setInternalDragSession:) _UIInternalDraggingSessionSource *internalDragSession; // ivar: _internalDragSession
@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) id *localContext; // ivar: _localContext
@property (readonly, weak, nonatomic) UIDragInteraction *primaryInteraction; // ivar: _primaryInteraction
@property (readonly, nonatomic, getter=isRestrictedToDraggingApplication) BOOL restrictedToDraggingApplication;
@property (nonatomic, getter=_sentSessionDidBegin, setter=_setSentSessionDidBegin:) BOOL sentSessionDidBegin; // ivar: _sentSessionDidBegin
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *trackedInteractions;


+(id)_localDragSessionForSessionDestination:(id)arg0 ;
+(id)activeSessions;
-(BOOL)_canAddItems;
-(BOOL)_isActive;
-(BOOL)_setDownAnimation:(id)arg0 shouldDelaySetDownOfDragItem:(id)arg1 completion:(id)arg2 ;
-(BOOL)canLoadObjectsOfClass:(Class)arg0 ;
-(BOOL)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg0 ;
-(BOOL)draggingSessionPrefersFullSizePreviews:(id)arg0 ;
-(BOOL)hasItemsConformingToTypeIdentifiers:(id)arg0 ;
-(NSUInteger)draggingSession:(id)arg0 sourceOperationMaskForDraggingWithinApp:(BOOL)arg1 ;
-(id)_internalSession;
-(id)_setDownAnimation:(id)arg0 customSpringAnimationBehaviorForSetDownOfDragItem:(id)arg1 ;
-(id)_setDownAnimation:(id)arg0 prepareForSetDownOfDragItem:(id)arg1 visibleDroppedItem:(id)arg2 ;
-(id)_windowForSetDownOfDragItem:(id)arg0 ;
-(id)dragSourceInteractionForDragItem:(id)arg0 ;
-(id)initWithInteraction:(id)arg0 ;
-(struct CGPoint )locationInView:(id)arg0 ;
-(void)_cancelDrag;
-(void)_draggingSession:(id)arg0 handedOffDragImageForItem:(id)arg1 ;
-(void)_draggingSessionHandedOffDragImage:(id)arg0 ;
-(void)_itemsNeedUpdate:(id)arg0 ;
-(void)_setDownAnimation:(id)arg0 willAnimateSetDownOfDragItem:(id)arg1 withAnimator:(id)arg2 ;
-(void)addItems:(id)arg0 forDragSourceInteraction:(id)arg1 ;
-(void)draggingSession:(id)arg0 willAddItems:(id)arg1 ;
-(void)draggingSessionDidEnd:(id)arg0 withOperation:(NSUInteger)arg1 ;
-(void)draggingSessionDidMove:(id)arg0 ;
-(void)draggingSessionDidTransferItems:(id)arg0 ;
-(void)draggingSessionWillBegin:(id)arg0 ;
-(void)draggingSessionWillEnd:(id)arg0 withOperation:(NSUInteger)arg1 ;


@end


#endif