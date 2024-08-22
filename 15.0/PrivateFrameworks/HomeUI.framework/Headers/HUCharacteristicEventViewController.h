// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCHARACTERISTICEVENTVIEWCONTROLLER_H
#define HUCHARACTERISTICEVENTVIEWCONTROLLER_H

@class NSString, HFCharacteristicEventBuilderItem, HFEventTriggerBuilder;
@protocol HUTriggerConditionEditorItemModuleControllerDelegate, HUPickerCellDelegate, HUEventUIFlowViewController;


#import "HUItemTableViewController.h"
#import "HUTriggerConditionEditorItemModuleController.h"
#import "HUEventUIFlow.h"
#import "HUCharacteristicEventItemManager.h"
#import "HUCharacteristicEventOptionItem.h"

@interface HUCharacteristicEventViewController : HUItemTableViewController <HUTriggerConditionEditorItemModuleControllerDelegate, HUPickerCellDelegate, HUEventUIFlowViewController>



@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController; // ivar: _conditionModuleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem; // ivar: _eventBuilderItem
@property (retain, nonatomic) HUEventUIFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUCharacteristicEventItemManager *itemManager;
@property (retain, nonatomic) HUCharacteristicEventOptionItem *selectedEventOptionItem; // ivar: _selectedEventOptionItem
@property (retain, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier
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
-(id)initWithEventBuilderItem:(id)arg0 triggerBuilder:(id)arg1 ;
-(id)initWithFlow:(id)arg0 stepIdentifier:(id)arg1 ;
-(id)itemModuleControllers;
-(id)pickerViewCell:(id)arg0 attributedTitleForValueAtIndex:(NSInteger)arg1 ;
-(void)_doneButtonPressed:(id)arg0 ;
-(void)_nextButtonPressed:(id)arg0 ;
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
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif