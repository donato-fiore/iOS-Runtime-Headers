// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC6HOMEUI30ACTIONGRIDITEMMODULECONTROLLER_H
#define _TTC6HOMEUI30ACTIONGRIDITEMMODULECONTROLLER_H

@protocol HUCollectionLayoutManagerDelegate, HUContainedAccessoryElementsGridViewControllerDelegate, HUServiceActionControlsViewControllerDelegate, NSObject;


#import "HUItemModuleController.h"

@interface _TtC6HomeUI30ActionGridItemModuleController : HUItemModuleController <HUCollectionLayoutManagerDelegate, HUContainedAccessoryElementsGridViewControllerDelegate, HUServiceActionControlsViewControllerDelegate, NSObject>

 {
    ? delegate;
    ? $__lazy_storage_$_collectionLayoutManager;
    ? presentedServiceGroupDetailsViewController;
}




-(BOOL)hasDetailsActionFor:(id)arg0 item:(id)arg1 ;
-(BOOL)shouldShowHeaderForSection:(id)arg0 ;
-(Class)collectionCellClassForItem:(id)arg0 ;
-(id)collectionLayoutSectionForSectionWithIdentifier:(id)arg0 layoutEnvironment:(id)arg1 ;
-(id)detailsViewControllerFor:(id)arg0 item:(id)arg1 ;
-(id)displayedItemsInSection:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(id)transformWithLayoutOptions:(id)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)serviceActionControlsViewController:(id)arg0 removeServiceActionItem:(id)arg1 ;


@end


#endif