// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSHORTCUTSACCESSORYPICKERVIEWCONTROLLER_H
#define HUSHORTCUTSACCESSORYPICKERVIEWCONTROLLER_H



#import "HUItemCollectionViewController.h"

@interface HUShortcutsAccessoryPickerViewController : HUItemCollectionViewController {
    ? configuration;
    ? home;
    ? selectionController;
    ? moduleContext;
    ? module;
    ? moduleController;
}




-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)getServices;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithHome:(id)arg0 configuration:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(void)configureWithDefaultSelectionController;
-(void)setServices:(id)arg0 ;


@end


#endif