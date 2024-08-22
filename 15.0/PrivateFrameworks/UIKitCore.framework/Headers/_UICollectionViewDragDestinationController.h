// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONVIEWDRAGDESTINATIONCONTROLLER_H
#define _UICOLLECTIONVIEWDRAGDESTINATIONCONTROLLER_H

@class NSIndexPath, NSString, CADisplayLink;
@protocol UIDropInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable, UIDropSession, _UICollectionViewDragDestinationControllerDelegate;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "UICollectionViewDropProposal.h"
#import "UIDropInteraction.h"
#import "_UIDragDestinationControllerDropProposalState.h"
#import "_UIDragDestinationControllerReorderingState.h"
#import "_UIDragDestinationControllerSessionState.h"

@interface _UICollectionViewDragDestinationController : NSObject <UIDropInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable>



@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) UICollectionViewDropProposal *currentDropProposal;
@property (readonly, nonatomic) NSObject<UIDropSession> *currentDropSession;
@property (readonly, nonatomic) NSIndexPath *currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UICollectionViewDragDestinationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (retain, nonatomic) _UIDragDestinationControllerDropProposalState *dropProposalState; // ivar: _dropProposalState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive;
@property (retain, nonatomic) CADisplayLink *reorderDisplayLink; // ivar: _reorderDisplayLink
@property (retain, nonatomic) _UIDragDestinationControllerReorderingState *reorderingState; // ivar: _reorderingState
@property (retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState; // ivar: _sessionState
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsLocalSessionReordering;


+(id)controllerForCollectionView:(id)arg0 delegate:(id)arg1 ;
-(BOOL)_hasGapLargeEnoughToRequireDropActionCallForCurrentItemAttributes:(id)arg0 proposedNextItemAttributes:(id)arg1 ;
-(BOOL)_isLocalInteractiveMove;
-(BOOL)_isMultiItemSource;
-(BOOL)_shouldPerformMovementForProposal:(id)arg0 ;
-(BOOL)_shouldQueryDropActionForIndexPath:(id)arg0 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)hasPerformedReordering;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)_computeNextItemAttributesStartingFromItemAttributes:(id)arg0 withCurrentDragLocation:(struct CGPoint )arg1 ;
-(id)_dragAndDropController;
-(id)_dragDestinationDelegateActual;
-(id)_dragDestinationDelegateProxy;
-(id)_dropDelegateActual;
-(id)_dropDelegateProxy;
-(id)_effectiveDropProposalForProposal:(id)arg0 ;
-(id)_queryClientForPreviewParamtersForItemAtIndexPath:(id)arg0 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithCollectionView:(id)arg0 delegate:(id)arg1 ;
-(void)_cancelCurrentInteractiveReorder;
-(void)_cancelInteractiveReorderingIfNeeded;
-(void)_commitCurrentDragAndDropSession;
-(void)_commitCurrentInteractiveReordering;
-(void)_configureInteraction;
-(void)_configureReorderingDisplayLinkIfNeeded;
-(void)_endInteractiveReorderingIfNeeded;
-(void)_pauseReorderingDisplayLink;
-(void)_reorderingDisplayLinkDidTick;
-(void)_resumeReorderingDisplayLink;
-(void)_updateDropProposalByQueryingClientIfNeeded:(id)arg0 indicatorLayoutAttributes:(id)arg1 ;
-(void)applyingRebasingUpdatesWithUpdateMap:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)dragSourceSelectedItemCountDidChangeWithCount:(NSInteger)arg0 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)dropWasCancelled;


@end


#endif