// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONVIEWDRAGSOURCECONTROLLER_H
#define _UICOLLECTIONVIEWDRAGSOURCECONTROLLER_H

@class NSString, NSIndexPath, NSArray;
@protocol UIDragInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable, _UICollectionViewDragSourceControllerDelegate, UIDragSession;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "UIDragInteraction.h"
#import "_UICollectionViewDragSourceControllerDragState.h"
#import "_UICollectionViewDragSourceControllerSessionState.h"

@interface _UICollectionViewDragSourceController : NSObject <UIDragInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable>



@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) NSInteger currentSessionItemCount;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UICollectionViewDragSourceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSIndexPath *dragFromIndexPath;
@property (readonly, nonatomic) NSArray *dragFromIndexPaths;
@property (weak, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (readonly, nonatomic) BOOL dragItemsCreatedForReordering;
@property (readonly, nonatomic) NSObject<UIDragSession> *dragSession;
@property (retain, nonatomic) _UICollectionViewDragSourceControllerDragState *dragState; // ivar: _dragState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive;
@property (retain, nonatomic) _UICollectionViewDragSourceControllerSessionState *sessionState; // ivar: _sessionState
@property (readonly) Class superclass;


+(id)controllerForCollectionView:(id)arg0 delegate:(id)arg1 ;
-(BOOL)_delegateImplementsSelector:(SEL)arg0 ;
-(BOOL)_dragInteraction:(id)arg0 sessionSupportsSystemDrag:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 prefersFullSizePreviewsForSession:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 sessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 sessionIsRestrictedToDraggingApplication:(id)arg1 ;
-(NSInteger)_dataOwnerForDragSession:(id)arg0 atIndexPath:(id)arg1 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)_dragAndDropController;
-(id)_dragDelegateActual;
-(id)_dragDelegateProxy;
-(id)_dragSourceDelegateActual;
-(id)_dragSourceDelegateProxy;
-(id)_filterCandidateIndexPaths:(id)arg0 forUserSelectedIndexPath:(id)arg1 session:(id)arg2 ;
-(id)_previewParametersForItemAtIndexPath:(id)arg0 ;
-(id)_queryForItemsFromClientForSession:(id)arg0 dataSourceIndexPath:(id)arg1 location:(struct CGPoint )arg2 isInitialQuery:(BOOL)arg3 ;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dragInteraction:(id)arg0 sessionForAddingItems:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)indexPathForDragItem:(id)arg0 ;
-(id)initWithCollectionView:(id)arg0 delegate:(id)arg1 ;
-(void)_addDragItemsToExistingSession:(id)arg0 forDataSourceIndexPath:(id)arg1 ;
-(void)_configureInteraction;
-(void)_sessionWillBegin:(id)arg0 forDragInteraction:(id)arg1 ;
-(void)applyingRebasingUpdatesWithUpdateMap:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willAddItems:(id)arg2 forInteraction:(id)arg3 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionDidMove:(id)arg1 ;
-(void)dragInteraction:(id)arg0 sessionDidTransferItems:(id)arg1 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;


@end


#endif