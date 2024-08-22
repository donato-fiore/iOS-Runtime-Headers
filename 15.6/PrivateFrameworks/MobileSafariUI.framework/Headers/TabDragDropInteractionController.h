// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABDRAGDROPINTERACTIONCONTROLLER_H
#define TABDRAGDROPINTERACTIONCONTROLLER_H

@class NSMapTable, NSString;
@protocol UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, UIDragInteractionDelegate, UIDropInteractionDelegate, UIContextMenuInteractionDelegate, UIDragSession, TabDocumentDragDropDataSource;

#import <Foundation/Foundation.h>

#import "TabDocumentDropHandler.h"

@interface TabDragDropInteractionController : NSObject <UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private, UIDragInteractionDelegate, UIDropInteractionDelegate, UIContextMenuInteractionDelegate>

 {
    NSMapTable *_placeholderDocumentsForSessions;
    NSMapTable *_insertedTabsForDragItems;
    NSUInteger _dropAnimationCount;
    NSMapTable *_hasHiddenDocumentsForDragSessions;
    id<UIDragSession> *_pendingDragSession;
}


@property (readonly, weak, nonatomic) NSObject<TabDocumentDragDropDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TabDocumentDropHandler *dropHandler; // ivar: _dropHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canOpenInCurrentTabForSession:(id)arg0 tabView:(id)arg1 ;
-(BOOL)_shouldMovePlaceholderItem:(id)arg0 overTargetItem:(id)arg1 withDropLocation:(struct CGPoint )arg2 interaction:(id)arg3 ;
-(BOOL)_tabViewIsFilteringTabs:(id)arg0 ;
-(BOOL)dragInteraction:(id)arg0 prefersFullSizePreviewsForSession:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(id)_autoscrollerForInteraction:(id)arg0 ;
-(id)_insertPlaceholderTabIfNeededForSession:(id)arg0 interaction:(id)arg1 ;
-(id)_newDragItemsAtPoint:(struct CGPoint )arg0 excludingTabDocuments:(id)arg1 interaction:(id)arg2 ;
-(id)_tabCollectionItemAtPoint:(struct CGPoint )arg0 interaction:(id)arg1 ;
-(id)_viewForTransitionToItem:(id)arg0 withTabCollectionView:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)dragInteraction:(id)arg0 itemsForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 dropHandler:(id)arg1 ;
-(void)_cleanUpDragPreviewForSesssion:(id)arg0 ;
-(void)_cleanUpDropPlaceholderForSession:(id)arg0 interaction:(id)arg1 ;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg0 ;
-(void)_transitionToDragState:(NSInteger)arg0 fromDragState:(NSInteger)arg1 forTabCollectionItemsInSession:(id)arg2 interaction:(id)arg3 ;
-(void)_unhideTabDocumentsForLocalDragSession:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willAddItems:(id)arg2 forInteraction:(id)arg3 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;


@end


#endif