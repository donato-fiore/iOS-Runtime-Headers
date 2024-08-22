// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBLACKHOLECONVERSATIONLISTCOMMONVIEWCONTROLLER_H
#define CKBLACKHOLECONVERSATIONLISTCOMMONVIEWCONTROLLER_H

@class UITableViewController, UIBarButtonItem, NSString, UILabel, _UITableViewDiffableDataSource, NSArray;
@protocol UITableViewDelegate;


#import "CKScheduledUpdater.h"

@interface CKBlackholeConversationListCommonViewController : UITableViewController <UITableViewDelegate>



@property (retain, nonatomic) UIBarButtonItem *clearAllButton; // ivar: _clearAllButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *emptyConversationListLabel; // ivar: _emptyConversationListLabel
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _UITableViewDiffableDataSource *tableViewDataSource; // ivar: _tableViewDataSource
@property (retain, nonatomic) CKScheduledUpdater *updater; // ivar: _updater
@property (retain, nonatomic) NSArray *visibleConversations; // ivar: _visibleConversations


-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)_alertTitleForClearAll;
-(id)_alertTitleForDelete;
-(id)_conversationList;
-(id)_conversations;
-(id)init;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_batchDeleteConversationWithCompletionHandler:(id)arg0 ;
-(void)_clearAllTapped;
-(void)_clearAllTappedWithCompletionHandler:(id)arg0 ;
-(void)_confirmDeleteConversation:(id)arg0 view:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_deleteConversation:(id)arg0 ;
-(void)_deleteConversation:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_updateConversationList;
-(void)_updateConversationListEmptyLabel;
-(void)dealloc;
-(void)didLock;
-(void)didUnlock;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)didWake;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endHoldingConversationListUpdatesForKey:(id)arg0 ;
-(void)popViewControllerIfNecessary;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)setNeedsFocusUpdate;
-(void)statusBarWillAnimateByHeight:(CGFloat)arg0 ;
-(void)suspend;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFocusIfNeeded;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willBecomeActive;
-(void)willResignActive;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willUnlock;


@end


#endif