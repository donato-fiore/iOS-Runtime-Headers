// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HULOCATIONEVENTEDITORSUMMARYVIEWCONTROLLER_H
#define HULOCATIONEVENTEDITORSUMMARYVIEWCONTROLLER_H

@class NSString;
@protocol HULocationTriggerRegionEditorViewControllerDelegate, HUPresenceUserPickerItemModuleControllerDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUEventUIFlowViewController;


#import "HUItemTableViewController.h"
#import "HUTriggerConditionEditorItemModuleController.h"
#import "HUEventUIFlow.h"
#import "HULocationEventEditorSummaryItemManager.h"
#import "HUPresenceUserPickerItemModuleController.h"

@interface HULocationEventEditorSummaryViewController : HUItemTableViewController <HULocationTriggerRegionEditorViewControllerDelegate, HUPresenceUserPickerItemModuleControllerDelegate, HUTriggerConditionEditorItemModuleControllerDelegate, HUEventUIFlowViewController>



@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionEditorModuleController; // ivar: _conditionEditorModuleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUEventUIFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HULocationEventEditorSummaryItemManager *itemManager;
@property (retain, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) HUPresenceUserPickerItemModuleController *userPickerModuleController; // ivar: _userPickerModuleController


+(id)defaultLocationEventBuilderForHome:(id)arg0 eventType:(NSUInteger)arg1 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithFlow:(id)arg0 stepIdentifier:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(void)_doneButtonPressed:(id)arg0 ;
-(void)conditionEditorModuleController:(id)arg0 dismissDetailViewController:(id)arg1 ;
-(void)conditionEditorModuleController:(id)arg0 presentDetailViewController:(id)arg1 ;
-(void)presenceUserPickerItemModuleController:(id)arg0 presentViewController:(id)arg1 ;
-(void)regionEditor:(id)arg0 didFinishWithRegion:(id)arg1 ;
-(void)regionEditorDidCancel:(id)arg0 ;
-(void)resetSelectedLocationToHomeForPresenceUserPickerItemModuleController:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif