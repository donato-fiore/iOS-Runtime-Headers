// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6HOMEUI29ACCESSORYGRIDMODULECONTROLLER_H
#define _TTC6HOMEUI29ACCESSORYGRIDMODULECONTROLLER_H

@protocol HUCollectionLayoutManagerDelegate;


#import "HUItemModuleController.h"

@interface _TtC6HomeUI29AccessoryGridModuleController : HUItemModuleController <HUCollectionLayoutManagerDelegate>

 {
    ? cellSettings;
    ? layoutStyle;
    ? $__lazy_storage_$_collectionLayoutManager;
}




-(BOOL)shouldShowHeaderForSection:(id)arg0 ;
-(Class)collectionCellClassForItem:(id)arg0 ;
-(id)collectionLayoutSectionForSectionWithIdentifier:(id)arg0 layoutEnvironment:(id)arg1 ;
-(id)displayedItemsInSection:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(id)transformWithLayoutOptions:(id)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;


@end


#endif