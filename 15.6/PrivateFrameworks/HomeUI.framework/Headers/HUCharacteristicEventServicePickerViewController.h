// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCHARACTERISTICEVENTSERVICEPICKERVIEWCONTROLLER_H
#define HUCHARACTERISTICEVENTSERVICEPICKERVIEWCONTROLLER_H

@class NSString, HFCharacteristicEventBuilderItem, HFEventTriggerBuilder;
@protocol HUCharacteristicEventServicePickerContentViewControllerDelegate, HUEventUIFlowViewController;


#import "HUInstructionsTableViewController.h"
#import "HUEventUIFlow.h"
#import "HUCharacteristicEventServicePickerContentViewController.h"

@interface HUCharacteristicEventServicePickerViewController : HUInstructionsTableViewController <HUCharacteristicEventServicePickerContentViewControllerDelegate, HUEventUIFlowViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HFCharacteristicEventBuilderItem *eventBuilder; // ivar: _eventBuilder
@property (copy, nonatomic) id *filter;
@property (retain, nonatomic) HUEventUIFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUCharacteristicEventServicePickerContentViewController *servicePickerContentViewController;
@property (readonly, nonatomic) NSUInteger source;
@property (retain, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


+(BOOL)adoptsDefaultGridLayoutMargins;
+(BOOL)canPickServicesFromSource:(NSUInteger)arg0 home:(id)arg1 ;
+(NSUInteger)sourceForTriggerBuilder:(id)arg0 ;
-(id)characteristicTriggerBuilder;
-(id)initWithEventBuilderItem:(id)arg0 triggerBuilder:(id)arg1 source:(NSUInteger)arg2 ;
-(id)initWithEventBuilderItem:(id)arg0 triggerBuilder:(id)arg1 source:(NSUInteger)arg2 flow:(id)arg3 stepIdentifier:(id)arg4 ;
-(id)initWithFlow:(id)arg0 stepIdentifier:(id)arg1 ;
-(id)initWithInstructionsItem:(id)arg0 contentViewController:(id)arg1 ;
-(void)_next:(id)arg0 ;
-(void)characteristicEventServicePickerContentViewController:(id)arg0 didChangeNumberOfSelectedItems:(NSUInteger)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif