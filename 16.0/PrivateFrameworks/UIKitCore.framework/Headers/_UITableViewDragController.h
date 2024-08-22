// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITABLEVIEWDRAGCONTROLLER_H
#define _UITABLEVIEWDRAGCONTROLLER_H

@class NSMapTable, NSString, NSIndexPath, NSMutableOrderedSet, UITableView<_UITableViewDragControllerDelegate>;
@protocol UIDragInteractionDelegate_Internal, UIDragSession;

#import <Foundation/Foundation.h>

#import "UIDragInteraction.h"
#import "UITableViewCell.h"

@interface _UITableViewDragController : NSObject <UIDragInteractionDelegate_Internal>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSMapTable *cellsAnimatingCancel; // ivar: _cellsAnimatingCancel
@property (nonatomic) NSInteger clientEnabledState; // ivar: _clientEnabledState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIDragInteraction *dragInteraction; // ivar: _dragInteraction
@property (retain, nonatomic) NSObject<UIDragSession> *dragSession; // ivar: _dragSession
@property (readonly, nonatomic) UITableViewCell *draggedCell;
@property (readonly, nonatomic) NSIndexPath *draggedIndexPath;
@property (nonatomic) BOOL forceEnabledForReordering; // ivar: _forceEnabledForReordering
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableOrderedSet *indexPaths; // ivar: _indexPaths
@property (retain, nonatomic) UITableViewCell *initiatingCell; // ivar: _initiatingCell
@property (retain, nonatomic) NSIndexPath *initiatingIndexPath; // ivar: _initiatingIndexPath
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView<_UITableViewDragControllerDelegate> *tableView; // ivar: _tableView
@property (retain, nonatomic) NSMutableOrderedSet *tentativeIndexPaths; // ivar: _tentativeIndexPaths
@property (retain, nonatomic) UITableViewCell *tentativeInitiatingCell; // ivar: _tentativeInitiatingCell
@property (retain, nonatomic) NSIndexPath *tentativeInitiatingIndexPath; // ivar: _tentativeInitiatingIndexPath


+(BOOL)isEnabledByDefault;
-(BOOL)_dragInteraction:(id)arg0 sessionSupportsSystemDrag:(id)arg1 ;
-(BOOL)_dragInteractionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg0 ;
-(BOOL)canProvideItemsForDragAtPoint:(struct CGPoint )arg0 ;
-(BOOL)dragInteraction:(id)arg0 prefersFullSizePreviewsForSession:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 sessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 sessionIsRestrictedToDraggingApplication:(id)arg1 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dragInteraction:(id)arg0 sessionForAddingItems:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)initWithTableView:(id)arg0 ;
-(void)addTentativeRowAtIndexPath:(id)arg0 ;
-(void)beginDragForTentativeRows;
-(void)beginDragOfRowsForSession:(id)arg0 notifyDelegate:(BOOL)arg1 ;
-(void)clearTentativeRows;
-(void)dragInteraction:(id)arg0 item:(id)arg1 willAnimateCancelWithAnimator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willAddItems:(id)arg2 forInteraction:(id)arg3 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dragInteraction:(id)arg0 willAnimateLiftWithAnimator:(id)arg1 session:(id)arg2 ;
-(void)forceReset;
-(void)immediatelyBeginDragWithTouch:(id)arg0 ;
-(void)resetDragState;
-(void)setupDragInteraction;
-(void)uninstallFromTableView;
-(void)updateDragInteractionEnabledState;


@end


#endif