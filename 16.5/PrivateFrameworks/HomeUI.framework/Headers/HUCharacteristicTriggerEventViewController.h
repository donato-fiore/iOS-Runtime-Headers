// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCHARACTERISTICTRIGGEREVENTVIEWCONTROLLER_H
#define HUCHARACTERISTICTRIGGEREVENTVIEWCONTROLLER_H

@class NSString, HFCharacteristicEventBuilderItem, HFEventTriggerBuilder;
@protocol HUTriggerConditionEditorItemModuleControllerDelegate, HUPickerCellDelegate, HUTriggerEditorDelegate;


#import "HUItemTableViewController.h"
#import "HUTriggerConditionEditorItemModuleController.h"
#import "HUCharacteristicTriggerEventItemManager.h"
#import "HUCharacteristicEventOptionItem.h"

@interface HUCharacteristicTriggerEventViewController : HUItemTableViewController <HUTriggerConditionEditorItemModuleControllerDelegate, HUPickerCellDelegate>



@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController; // ivar: _conditionModuleController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem; // ivar: _eventBuilderItem
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUCharacteristicTriggerEventItemManager *itemManager;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) HUCharacteristicEventOptionItem *selectedEventOptionItem; // ivar: _selectedEventOptionItem
@property (readonly) Class superclass;
@property (retain, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(BOOL)_canCommitTriggerBuilder;
-(BOOL)_canContinue;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(BOOL)pickerViewCell:(id)arg0 canSelectValueAtIndex:(NSInteger)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfValuesForPickerViewCell:(id)arg0 ;
-(id)_commitTriggerBuilder;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithCharacteristicEventBuilderItem:(id)arg0 triggerBuilder:(id)arg1 mode:(NSUInteger)arg2 delegate:(id)arg3 ;
-(id)pickerViewCell:(id)arg0 attributedTitleForValueAtIndex:(NSInteger)arg1 ;
-(id)visibleTriggerValuesForItem:(id)arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)_showActionEditor:(id)arg0 ;
-(void)_showSummary:(id)arg0 ;
-(void)_updateTriggerBuilder;
-(void)_updateVisibleCellCheckmarks;
-(void)_validateNextButton;
-(void)conditionEditorModuleController:(id)arg0 dismissDetailViewController:(id)arg1 ;
-(void)conditionEditorModuleController:(id)arg0 presentDetailViewController:(id)arg1 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)pickerViewCell:(id)arg0 didSelectValueAtIndex:(NSInteger)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif