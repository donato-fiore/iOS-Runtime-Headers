// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYEVENTPICKERVIEWCONTROLLER_H
#define HUACCESSORYEVENTPICKERVIEWCONTROLLER_H

@class HFCharacteristicEventBuilderItem, HFEventTriggerBuilder;
@protocol HUTriggerEditorDelegate;


#import "HUItemCollectionViewController.h"

@interface HUAccessoryEventPickerViewController : HUItemCollectionViewController {
    ? accessoryElementModule;
    ? selectionController;
    ? filter;
}


@property (nonatomic, weak) NSObject<HUTriggerEditorDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) HFCharacteristicEventBuilderItem *eventBuilderItem; // ivar: eventBuilderItem
@property (nonatomic, copy) id *filter;
@property (nonatomic, readonly) NSUInteger mode; // ivar: mode
@property (nonatomic, readonly) NSUInteger source; // ivar: source
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder; // ivar: triggerBuilder


-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithEventBuilderItem:(id)arg0 triggerBuilder:(id)arg1 mode:(NSUInteger)arg2 source:(NSUInteger)arg3 delegate:(id)arg4 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)listContentConfigurationForSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)nextWithSender:(id)arg0 ;
-(void)validateNextButton;
-(void)viewDidLoad;


@end


#endif