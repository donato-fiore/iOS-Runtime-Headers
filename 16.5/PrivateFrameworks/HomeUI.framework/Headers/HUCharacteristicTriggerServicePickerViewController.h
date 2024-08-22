// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCHARACTERISTICTRIGGERSERVICEPICKERVIEWCONTROLLER_H
#define HUCHARACTERISTICTRIGGERSERVICEPICKERVIEWCONTROLLER_H

@class HFCharacteristicEventBuilderItem, HFEventTriggerBuilder;
@protocol HUTriggerEditorDelegate;


#import "HUInstructionsTableViewController.h"
#import "HUCharacteristicTriggerServicePickerContentViewController.h"

@interface HUCharacteristicTriggerServicePickerViewController : HUInstructionsTableViewController

@property (weak, nonatomic) NSObject<HUTriggerEditorDelegate> *delegate;
@property (readonly, nonatomic) HFCharacteristicEventBuilderItem *eventBuilder; // ivar: _eventBuilder
@property (copy, nonatomic) id *filter;
@property (readonly, nonatomic) NSUInteger mode;
@property (readonly, nonatomic) HUCharacteristicTriggerServicePickerContentViewController *servicePickerContentViewController;
@property (readonly, nonatomic) NSUInteger source;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


+(BOOL)adoptsDefaultGridLayoutMargins;
+(BOOL)canPickServicesFromSource:(NSUInteger)arg0 home:(id)arg1 ;
+(NSUInteger)sourceForTriggerBuilder:(id)arg0 ;
-(id)characteristicTriggerBuilder;
-(id)initWithEventBuilderItem:(id)arg0 triggerBuilder:(id)arg1 mode:(NSUInteger)arg2 source:(NSUInteger)arg3 delegate:(id)arg4 ;
-(id)initWithInstructionsItem:(id)arg0 contentViewController:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif