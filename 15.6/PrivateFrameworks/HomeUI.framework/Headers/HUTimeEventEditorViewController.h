// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTIMEEVENTEDITORVIEWCONTROLLER_H
#define HUTIMEEVENTEDITORVIEWCONTROLLER_H

@class NSString, HFItem, NSDateComponents, NSArray, HFEventBuilder<HFTimeEventBuilder>, HFEventTriggerBuilder;
@protocol HUDayOfWeekPickerCellDelegate, HUTimeEventOffsetEditorDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUInlineDatePickerCellDelegate, HUEventUIFlowViewController;


#import "HUItemTableViewController.h"
#import "HUEventUIFlow.h"
#import "HUTimeEventEditorItemManager.h"
#import "HUGridLayoutOptions.h"

@interface HUTimeEventEditorViewController : HUItemTableViewController <HUDayOfWeekPickerCellDelegate, HUTimeEventOffsetEditorDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUInlineDatePickerCellDelegate, HUEventUIFlowViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUEventUIFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUTimeEventEditorItemManager *itemManager;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) HFItem *selectedDateOptionItem; // ivar: _selectedDateOptionItem
@property (retain, nonatomic) NSDateComponents *selectedFireTimeComponents;
@property (retain, nonatomic) NSArray *selectedRecurrences;
@property (retain, nonatomic) NSDateComponents *selectedSignificantEventOffset;
@property (retain, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) HFEventBuilder<HFTimeEventBuilder> *timeEvent; // ivar: _timeEvent
@property (retain, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(BOOL)_canCommitTriggerBuilder;
-(BOOL)_canContinue;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_commitTriggerBuilder;
-(id)_instructionsSectionIDs;
-(id)_localizedRecurrenceDescription;
-(id)_selectedSignificantEvent;
-(id)initWithFlow:(id)arg0 stepIdentifier:(id)arg1 ;
-(id)initWithTimeEvent:(id)arg0 triggerBuilder:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_changeFireTime:(id)arg0 ;
-(void)_doneButtonPressed:(id)arg0 ;
-(void)_nextButtonPressed:(id)arg0 ;
-(void)conditionEditorModuleController:(id)arg0 dismissDetailViewController:(id)arg1 ;
-(void)conditionEditorModuleController:(id)arg0 presentDetailViewController:(id)arg1 ;
-(void)datePickerCell:(id)arg0 didSelectDate:(id)arg1 ;
-(void)dayOfWeekPickerCell:(id)arg0 didChangeSelectedRecurrences:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)timerTriggerOffsetEditor:(id)arg0 didFinishWithOffset:(id)arg1 ;
-(void)timerTriggerOffsetEditorDidCancel:(id)arg0 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif