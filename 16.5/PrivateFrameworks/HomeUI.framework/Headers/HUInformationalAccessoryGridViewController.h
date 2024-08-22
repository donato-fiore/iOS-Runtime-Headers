// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUINFORMATIONALACCESSORYGRIDVIEWCONTROLLER_H
#define HUINFORMATIONALACCESSORYGRIDVIEWCONTROLLER_H

@class NSSet;


#import "HUItemCollectionViewController.h"

@interface HUInformationalAccessoryGridViewController : HUItemCollectionViewController {
    ? visibleAccessories;
    ? module;
    ? moduleController;
}


@property (nonatomic, copy) NSSet *visibleAccessories;


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)init;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)initWithVisibleAccessories:(id)arg0 ;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif