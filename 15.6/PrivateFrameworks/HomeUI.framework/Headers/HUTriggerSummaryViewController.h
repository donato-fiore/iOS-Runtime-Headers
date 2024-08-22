// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTRIGGERSUMMARYVIEWCONTROLLER_H
#define HUTRIGGERSUMMARYVIEWCONTROLLER_H

@class NSString, NSSet, HFTriggerBuilder;
@protocol HUTriggerEditorDelegate, HUSwitchCellDelegate, HUTriggerActionSetsModuleControllerDelegate, UITextViewDelegate, WFHomeComposeViewControllerDelegate, HUNameAndIconEditorCellDelegate, HUTriggerEventsModuleControllerDelegate, HUTriggerDurationModuleControllerDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUTriggerMediaModuleControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUTriggerActionSetsModuleController.h"
#import "HUTriggerConditionEditorItemModuleController.h"
#import "HUTriggerActionFlow.h"
#import "HUForwardingTriggerActionBuilderDelegate.h"
#import "HUTriggerSummaryItemManager.h"

@interface HUTriggerSummaryViewController : HUItemTableViewController <HUTriggerEditorDelegate, HUSwitchCellDelegate, HUTriggerActionSetsModuleControllerDelegate, UITextViewDelegate, WFHomeComposeViewControllerDelegate, HUNameAndIconEditorCellDelegate, HUTriggerEventsModuleControllerDelegate, HUTriggerDurationModuleControllerDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUTriggerMediaModuleControllerDelegate>



@property (retain, nonatomic) HUTriggerActionSetsModuleController *actionSetsModuleController; // ivar: _actionSetsModuleController
@property (retain, nonatomic) HUTriggerConditionEditorItemModuleController *conditionEditorModuleController; // ivar: _conditionEditorModuleController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL detailEditorChangedTrigger; // ivar: _detailEditorChangedTrigger
@property (copy, nonatomic) NSString *editingName; // ivar: _editingName
@property (retain, nonatomic) HUTriggerActionFlow *flow; // ivar: _flow
@property (retain, nonatomic) HUForwardingTriggerActionBuilderDelegate *forwardingTriggerActionBuilderDelegate; // ivar: _forwardingTriggerActionBuilderDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEditingExistingTrigger; // ivar: _isEditingExistingTrigger
@property (readonly, nonatomic) HUTriggerSummaryItemManager *itemManager;
@property (copy, nonatomic) NSSet *prioritizedHomeObjects;
@property (readonly, nonatomic) NSString *savedName;
@property (readonly) Class superclass;
@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder
@property (nonatomic) BOOL viewHasAppeared; // ivar: _viewHasAppeared


+(BOOL)adoptsDefaultGridLayoutMargins;
+(id)createTriggerSummaryViewControllerForHome:(id)arg0 withTriggerActionSetBuilder:(id)arg1 andTriggerActionBuilderEditorDelegate:(id)arg2 ;
-(BOOL)_canCommitTriggerBuilder;
-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)childViewControllersToPreload;
-(id)contentConfigurationForFooterViewAtSectionIndex:(NSUInteger)arg0 ;
-(id)contentConfigurationForHeaderViewAtSectionIndex:(NSUInteger)arg0 ;
-(id)currentTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)defaultTextForTextField:(id)arg0 item:(id)arg1 ;
-(id)initWithTriggerBuilder:(id)arg0 flow:(id)arg1 delegate:(id)arg2 ;
-(id)initWithTriggerBuilder:(id)arg0 mode:(NSUInteger)arg1 isPresentedModally:(BOOL)arg2 delegate:(id)arg3 ;
-(id)itemTableHeaderMessage;
-(id)placeholderTextForTextField:(id)arg0 item:(id)arg1 ;
-(void)_addAction:(id)arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)_cancelShortcutEditor:(id)arg0 ;
-(void)_commitTriggerBuilder;
-(void)_deleteTrigger:(id)arg0 indexPath:(id)arg1 ;
-(void)_done:(id)arg0 ;
-(void)_removeActionsInServiceActionItem:(id)arg0 ;
-(void)_sendNameAssignedEvent:(id)arg0 error:(id)arg1 ;
-(void)_setTriggerEnabled:(BOOL)arg0 ;
-(void)_showEditorForTriggerBuilderItem:(id)arg0 ;
-(void)_showShortcutEditorForTriggerBuilderItem:(id)arg0 ;
-(void)_testTrigger;
-(void)_updateDurationModuleDynamicFooterView;
-(void)_updateTableHeaderConfiguration;
-(void)_updateTriggerBuilderName;
-(void)actionSetsModuleController:(id)arg0 didUpdateTriggerBuilder:(id)arg1 ;
-(void)conditionEditorModuleController:(id)arg0 dismissDetailViewController:(id)arg1 ;
-(void)conditionEditorModuleController:(id)arg0 presentDetailViewController:(id)arg1 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)durationModuleController:(id)arg0 requestsScrollToItem:(id)arg1 ;
-(void)eventsModuleController:(id)arg0 pushViewController:(id)arg1 ;
-(void)eventsModuleControllerDidUpdateTriggerBuilder:(id)arg0 ;
-(void)homeComposeViewController:(id)arg0 didFinishWithHomeWorkflow:(id)arg1 ;
-(void)itemManager:(id)arg0 didUpdateResultsForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)mediaModuleController:(id)arg0 pushViewController:(id)arg1 ;
-(void)serviceGridViewController:(id)arg0 didTapItem:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textDidChange:(id)arg0 forTextField:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)textFieldDidFinishEditing:(id)arg0 ;
-(void)triggerEditor:(id)arg0 didFinishWithTriggerBuilder:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif