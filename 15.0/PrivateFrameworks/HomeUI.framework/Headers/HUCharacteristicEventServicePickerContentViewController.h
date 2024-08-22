// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCHARACTERISTICEVENTSERVICEPICKERCONTENTVIEWCONTROLLER_H
#define HUCHARACTERISTICEVENTSERVICEPICKERCONTENTVIEWCONTROLLER_H

@class NSString, HFCharacteristicEventBuilderItem, HFEventTriggerBuilder;
@protocol HUServiceGridItemManagerDelegate, HUEventUIFlowViewController, HUCharacteristicEventServicePickerContentViewControllerDelegate;


#import "HUSelectableServiceGridViewController.h"
#import "HUEventUIFlow.h"

@interface HUCharacteristicEventServicePickerContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate, HUEventUIFlowViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem; // ivar: _eventBuilderItem
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (retain, nonatomic) HUEventUIFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HUCharacteristicEventServicePickerContentViewControllerDelegate> *servicePickerDelegate; // ivar: _servicePickerDelegate
@property (readonly, nonatomic) NSUInteger source; // ivar: _source
@property (retain, nonatomic) NSString *stepIdentifier; // ivar: _stepIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


+(id)splitCharacteristicResults;
+(id)transformationSetBlock:(SEL)arg0 ;
-(BOOL)canSelectItem:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)serviceGridItemManager:(id)arg0 shouldHideItem:(id)arg1 ;
-(id)initWithFlow:(id)arg0 stepIdentifier:(id)arg1 ;
-(id)initWithServiceGridItemManager:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 eventBuilderItem:(id)arg1 source:(NSUInteger)arg2 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)_addCharacteristicEventsForAlarmItem:(id)arg0 ;
-(void)_addCharacteristicEventsForOtherDeviceItem:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didChangeSelection;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif