// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HULOCATIONTRIGGEREDITORSUMMARYVIEWCONTROLLER_H
#define HULOCATIONTRIGGEREDITORSUMMARYVIEWCONTROLLER_H

@class NSString, HFEventTriggerBuilder;
@protocol HUTriggerConditionEditorItemModuleControllerDelegate, HULocationTriggerRegionEditorViewControllerDelegate, HUPresenceUserPickerItemModuleControllerDelegate, HUTriggerEditorDelegate;


#import "HUItemTableViewController.h"
#import "HUTriggerConditionEditorItemModuleController.h"
#import "HULocationTriggerEditorSummaryItemManager.h"
#import "HUPresenceUserPickerItemModuleController.h"

@interface HULocationTriggerEditorSummaryViewController : HUItemTableViewController <HUTriggerConditionEditorItemModuleControllerDelegate, HULocationTriggerRegionEditorViewControllerDelegate, HUPresenceUserPickerItemModuleControllerDelegate>



@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionEditorModuleController; // ivar: _conditionEditorModuleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HUTriggerEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HULocationTriggerEditorSummaryItemManager *itemManager;
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder
@property (readonly, nonatomic) HUPresenceUserPickerItemModuleController *userPickerModuleController; // ivar: _userPickerModuleController


+(id)defaultLocationEventBuilderForHome:(id)arg0 eventType:(NSUInteger)arg1 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithTriggerBuilder:(id)arg0 mode:(NSUInteger)arg1 delegate:(id)arg2 ;
-(id)itemModuleControllers;
-(void)_showActionEditor:(id)arg0 ;
-(void)_showSummary:(id)arg0 ;
-(void)conditionEditorModuleController:(id)arg0 dismissDetailViewController:(id)arg1 ;
-(void)conditionEditorModuleController:(id)arg0 presentDetailViewController:(id)arg1 ;
-(void)presenceUserPickerItemModuleController:(id)arg0 presentViewController:(id)arg1 ;
-(void)regionEditor:(id)arg0 didFinishWithRegion:(id)arg1 ;
-(void)regionEditorDidCancel:(id)arg0 ;
-(void)resetSelectedLocationToHomeForPresenceUserPickerItemModuleController:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif