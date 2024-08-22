// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCC6HOMEUI33TRIGGERACTIONPICKERVIEWCONTROLLER33CONVERTTOSHORTCUTMODULECONTROLLER_H
#define _TTCC6HOMEUI33TRIGGERACTIONPICKERVIEWCONTROLLER33CONVERTTOSHORTCUTMODULECONTROLLER_H

@protocol HUCollectionLayoutManagerDelegate;


#import "HUItemModuleController.h"

@interface _TtCC6HomeUI33TriggerActionPickerViewController33ConvertToShortcutModuleController : HUItemModuleController <HUCollectionLayoutManagerDelegate>

 {
    ? $__lazy_storage_$_collectionLayoutManager;
}




-(BOOL)shouldShowHeaderForSection:(id)arg0 ;
-(Class)collectionCellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)collectionLayoutSectionForSectionWithIdentifier:(id)arg0 layoutEnvironment:(id)arg1 ;
-(id)displayedItemsInSection:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;


@end


#endif