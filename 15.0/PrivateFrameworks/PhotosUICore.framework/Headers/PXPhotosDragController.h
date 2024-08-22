// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSDRAGCONTROLLER_H
#define PXPHOTOSDRAGCONTROLLER_H

@class UIView, NSString, UIDragInteraction, NSSet, UIDropInteraction, NSMutableSet, _UIDragSnappingFeedbackGenerator, UIViewController;
@protocol PXChangeObserver, UIDragInteractionDelegate, UIDropInteractionDelegate, PXAssetCollectionActionPerformerDelegate, PXLocalDragSessionDelegate, PXPhotosDragControllerDelegate;

#import <Foundation/Foundation.h>

#import "PXAssetCollectionActionManager.h"
#import "PXAssetReference.h"
#import "PXSectionedSelectionManager.h"
#import "PXUpdater.h"

@interface PXPhotosDragController : NSObject <PXChangeObserver, UIDragInteractionDelegate, UIDropInteractionDelegate, PXAssetCollectionActionPerformerDelegate, PXLocalDragSessionDelegate>



@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager; // ivar: _assetCollectionActionManager
@property (readonly, weak, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PXPhotosDragControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (retain, nonatomic) NSSet *draggedAssetReferences; // ivar: _draggedAssetReferences
@property (readonly, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference; // ivar: _dropTargetAssetReference
@property (retain, nonatomic) NSSet *excludedAssets; // ivar: _excludedAssets
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXAssetReference *hitAssetReference; // ivar: _hitAssetReference
@property (nonatomic) BOOL isDragSessionActive; // ivar: _isDragSessionActive
@property (nonatomic) BOOL isUpdatingExcludedAssets; // ivar: _isUpdatingExcludedAssets
@property (readonly, nonatomic) NSMutableSet *localDragSessions; // ivar: _localDragSessions
@property (nonatomic) BOOL reorderFeedbackEnabled; // ivar: _reorderFeedbackEnabled
@property (readonly, nonatomic) _UIDragSnappingFeedbackGenerator *reorderFeedbackGenerator; // ivar: _reorderFeedbackGenerator
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) UIViewController *viewControllerForPresentation;


-(BOOL)_addDraggedAssetReferences:(id)arg0 toLocalSession:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)canDragIn;
-(BOOL)canDragOut;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(NSUInteger)_supportedDropOperationForSession:(id)arg0 ;
-(id)_actionManagerForDropSession:(id)arg0 ;
-(id)_assetReferenceForDragItem:(id)arg0 ;
-(id)_createDragItemForAssetReference:(id)arg0 ;
-(id)_createLocalSession;
-(id)_draggableAssetReferenceAtLocation:(struct CGPoint )arg0 ;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dragInteraction:(id)arg0 sessionForAddingItems:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)hostViewControllerForActionPerformer:(id)arg0 ;
-(id)init;
-(id)initWithContentView:(id)arg0 selectionManager:(id)arg1 assetCollectionActionManager:(id)arg2 delegate:(id)arg3 ;
-(id)scrollView;
-(void)_localSessionForDragSession:(id)arg0 changeBlock:(id)arg1 ;
-(void)_localSessionForDropSession:(id)arg0 changeBlock:(id)arg1 ;
-(void)_presentConfidentialityWarning;
-(void)_pruneLocalSessionIfFinished:(id)arg0 ;
-(void)_removeDraggedAssetReferece:(id)arg0 fromLocalSession:(id)arg1 ;
-(void)_setupWithContentView:(id)arg0 ;
-(void)_updateDraggedAssetReferences;
-(void)_updateDropTarget;
-(void)_updateExcludedAssets;
-(void)_updateIsDragSessionActive;
-(void)_updateTrackedAssetReferences;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willAddItems:(id)arg2 forInteraction:(id)arg3 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)localDragSession:(id)arg0 didChangeProperty:(SEL)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)removeFromView;


@end


#endif