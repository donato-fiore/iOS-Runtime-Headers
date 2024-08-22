// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCHARACTERISTICTRIGGERSERVICEPICKERCONTENTVIEWCONTROLLER_H
#define HUCHARACTERISTICTRIGGERSERVICEPICKERCONTENTVIEWCONTROLLER_H

@class NAFuture, NSString, UINavigationItem, HFCharacteristicEventBuilderItem, HFEventTriggerBuilder;
@protocol HUServiceGridItemManagerDelegate, HUTriggerEditorDelegate;


#import "HUSelectableServiceGridViewController.h"

@interface HUCharacteristicTriggerServicePickerContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate>



@property (retain, nonatomic) NAFuture *characteristicReadFuture; // ivar: _characteristicReadFuture
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UINavigationItem *effectiveNavigationItem; // ivar: _effectiveNavigationItem
@property (readonly, nonatomic) HFCharacteristicEventBuilderItem *eventBuilderItem; // ivar: _eventBuilderItem
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) NSUInteger source; // ivar: _source
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


+(id)splitCharacteristicResults;
+(id)transformationSetBlock:(SEL)arg0 ;
-(BOOL)canSelectItem:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)serviceGridItemManager:(id)arg0 shouldHideItem:(id)arg1 ;
-(id)getThresholdRangeValueForCharacteristic:(id)arg0 ;
-(id)initWithServiceGridItemManager:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 eventBuilderItem:(id)arg1 mode:(NSUInteger)arg2 source:(NSUInteger)arg3 effectiveNavigationItem:(id)arg4 delegate:(id)arg5 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)_addCharacteristicEventsForAlarmItem:(id)arg0 ;
-(void)_addCharacteristicEventsForOtherDeviceItem:(id)arg0 ;
-(void)_addTriggerValue:(id)arg0 forCharacteristics:(id)arg1 ;
-(void)_cancel:(id)arg0 ;
-(void)_next:(id)arg0 ;
-(void)_validateNextButton;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didChangeSelection;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif