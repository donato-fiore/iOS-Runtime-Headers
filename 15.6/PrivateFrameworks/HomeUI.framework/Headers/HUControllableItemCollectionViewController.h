// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCONTROLLABLEITEMCOLLECTIONVIEWCONTROLLER_H
#define HUCONTROLLABLEITEMCOLLECTIONVIEWCONTROLLER_H

@class NSMutableDictionary, UIViewController<HUQuickControlPresentationHost>, UICollectionViewLayout<HUControllableCollectionViewLayout>, UIGestureRecognizer, NSString, HFItemManager, UILongPressGestureRecognizer, HFItem<NSCopying>;
@protocol HUQuickControlPresentationHost, UIGestureRecognizerDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, HUQuickControlPresentationCoordinatorDelegate, HULockAuthorizationDelegate, HUQuickControlPresentationDelegate;


#import "HUItemCollectionViewController.h"
#import "HUQuickControlPresentationCoordinator.h"

@interface HUControllableItemCollectionViewController : HUItemCollectionViewController <HUQuickControlPresentationHost, UIGestureRecognizerDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, HUQuickControlPresentationCoordinatorDelegate>



@property (retain, nonatomic) NSMutableDictionary *actionSetExecutionFuturesKeyedByIdentifier; // ivar: _actionSetExecutionFuturesKeyedByIdentifier
@property (weak, nonatomic) UIViewController<HUQuickControlPresentationHost> *ancestorQuickControlHostAtPresentationTime; // ivar: _ancestorQuickControlHostAtPresentationTime
@property (readonly, nonatomic) UICollectionViewLayout<HUControllableCollectionViewLayout> *collectionViewLayout;
@property (readonly, nonatomic) NSUInteger contentColorStyle; // ivar: _contentColorStyle
@property (retain, nonatomic) UIGestureRecognizer *contextualTapGestureRecognizer; // ivar: _contextualTapGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFItemManager *itemManager;
@property (weak, nonatomic) NSObject<HULockAuthorizationDelegate> *lockAuthorizationDelegate; // ivar: _lockAuthorizationDelegate
@property (retain, nonatomic) HUQuickControlPresentationCoordinator *quickControlPresentationCoordinator; // ivar: _quickControlPresentationCoordinator
@property (weak, nonatomic) NSObject<HUQuickControlPresentationDelegate> *quickControlPresentationDelegate; // ivar: _quickControlPresentationDelegate
@property (retain, nonatomic) UILongPressGestureRecognizer *reorderGestureRecognizer; // ivar: _reorderGestureRecognizer
@property (retain, nonatomic) HFItem<NSCopying> *selectedContextualMenuItem; // ivar: _selectedContextualMenuItem
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCustomDragAndDrop; // ivar: _useCustomDragAndDrop
@property (nonatomic) BOOL viewAppeared; // ivar: _viewAppeared


-(BOOL)_hasTapActionForItem:(id)arg0 ;
-(BOOL)_isMultiControllableServiceAccessory:(id)arg0 ;
-(BOOL)alwaysAllowReordering;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canReorderItemAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canHandleDropSession:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginPresentationWithContext:(id)arg1 ;
-(BOOL)requiresUnlockToPerformActionForItem:(id)arg0 ;
-(id)_ancestorQuickControlPresentationHost;
-(id)_childItemsForItem:(id)arg0 ;
-(id)_itemForServiceControlPresentationAtPoint:(struct CGPoint )arg0 ;
-(id)_performTapActionForItem:(id)arg0 ;
-(id)_visibleCellForItem:(id)arg0 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 targetIndexPathForMoveFromItemAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)customContextualMenuItemsForItem:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)prepareToPerformToggleActionForItem:(id)arg0 sourceItem:(id)arg1 ;
-(id)presentationCoordinator:(id)arg0 contextForPresentationAtPoint:(struct CGPoint )arg1 ;
-(id)quickControlPresentationContextForItem:(id)arg0 atIndexPath:(id)arg1 ;
-(id)quickControlPresentationContextForUUID:(id)arg0 type:(NSUInteger)arg1 ;
-(id)reorderableHomeKitItemListForSection:(NSInteger)arg0 ;
-(id)traitCollectionForPresentationCoordinator:(id)arg0 ;
-(void)_commonInit;
-(void)_handleApplicationWillResignActiveNotification:(id)arg0 ;
-(void)_handleContextualGesture:(id)arg0 ;
-(void)_handleReorderGesture:(id)arg0 ;
-(void)_itemSetDidChange;
-(void)_reorderGestureDidBegin:(id)arg0 ;
-(void)_reorderGestureDidChange:(id)arg0 ;
-(void)_reorderGestureDidEnd:(id)arg0 finished:(BOOL)arg1 ;
-(void)_showQuickControlsForSelectedMenuItem;
-(void)_showSettingsForSelectedMenuItem;
-(void)_updateEditingStateForCell:(id)arg0 ;
-(void)_updateReorderingGestureRecognizer;
-(void)childViewController:(id)arg0 didEndQuickControlsPresentation:(id)arg1 ;
-(void)childViewController:(id)arg0 willBeginQuickControlsPresentation:(id)arg1 ;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didReorderItemWithTransaction:(id)arg0 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)itemManager:(id)arg0 performUpdateRequest:(id)arg1 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentationCoordinator:(id)arg0 applyOverrideAttributes:(id)arg1 toItem:(id)arg2 ;
-(void)presentationCoordinator:(id)arg0 clearOverrideAttributesForItem:(id)arg1 ;
-(void)presentationCoordinator:(id)arg0 didEndPresentationWithContext:(id)arg1 ;
-(void)presentationCoordinator:(id)arg0 didRecognizeTapForItem:(id)arg1 ;
-(void)presentationCoordinator:(id)arg0 willBeginPresentationWithContext:(id)arg1 ;
-(void)presentationCoordinator:(id)arg0 willEndPresentationWithContext:(id)arg1 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setExecutionFuture:(id)arg0 forActionSet:(id)arg1 ;
-(void)setReorderableHomeKitItemList:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif