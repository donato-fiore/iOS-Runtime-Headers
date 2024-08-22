// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTIMERTRIGGEREDITORVIEWCONTROLLER_H
#define HUTIMERTRIGGEREDITORVIEWCONTROLLER_H

@class NSString, HFItem, NSDateComponents, NSArray, HFTimerTriggerBuilder;
@protocol HUDayOfWeekPickerCellDelegate, HUTimeEventOffsetEditorDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUInlineDatePickerCellDelegate, HUTriggerEditorDelegate;


#import "HUItemTableViewController.h"
#import "HUTriggerConditionEditorItemModuleController.h"
#import "HUTimerTriggerEditorItemManager.h"
#import "HUGridLayoutOptions.h"

@interface HUTimerTriggerEditorViewController : HUItemTableViewController <HUDayOfWeekPickerCellDelegate, HUTimeEventOffsetEditorDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUInlineDatePickerCellDelegate>



@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController; // ivar: _conditionModuleController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUTimerTriggerEditorItemManager *itemManager;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) HFItem *selectedDateOptionItem; // ivar: _selectedDateOptionItem
@property (retain, nonatomic) NSDateComponents *selectedFireTimeComponents;
@property (retain, nonatomic) NSArray *selectedRecurrences;
@property (retain, nonatomic) NSDateComponents *selectedSignificantEventOffset;
@property (readonly) Class superclass;
@property (retain, nonatomic) HFTimerTriggerBuilder *timerTriggerBuilder; // ivar: _timerTriggerBuilder


-(BOOL)_canCommitTriggerBuilder;
-(BOOL)_canContinue;
-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_commitTriggerBuilder;
-(id)_instructionsSectionIDs;
-(id)_localizedRecurrenceDescripiton;
-(id)_selectedSignificantEvent;
-(id)initWithTimerTriggerBuilder:(id)arg0 mode:(NSUInteger)arg1 delegate:(id)arg2 ;
-(id)itemModuleControllers;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_cancel:(id)arg0 ;
-(void)_changeFireTime:(id)arg0 ;
-(void)_showActionEditor:(id)arg0 ;
-(void)_showSummary:(id)arg0 ;
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
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif