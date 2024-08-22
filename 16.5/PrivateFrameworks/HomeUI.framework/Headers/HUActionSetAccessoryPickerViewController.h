// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACTIONSETACCESSORYPICKERVIEWCONTROLLER_H
#define HUACTIONSETACCESSORYPICKERVIEWCONTROLLER_H

@class HFActionSetBuilder;


#import "HUItemCollectionViewController.h"

@interface HUActionSetAccessoryPickerViewController : HUItemCollectionViewController {
    ? accessoryElementModule;
    ? selectionController;
    ? delegate;
}


@property (nonatomic, readonly) HFActionSetBuilder *actionSetBuilder; // ivar: actionSetBuilder


-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithActionSetBuilder:(id)arg0 delegate:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)listContentConfigurationForSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(void)cancelWithSender:(id)arg0 ;
-(void)doneWithSender:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif