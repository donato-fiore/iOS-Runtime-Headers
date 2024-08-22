// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC6HOMEUI49ACTIONSETCONTAINERSUMMARYGRIDITEMMODULECONTROLLER_H
#define _TTC6HOMEUI49ACTIONSETCONTAINERSUMMARYGRIDITEMMODULECONTROLLER_H

@protocol HUCollectionLayoutManagerDelegate, HUSceneEditorDelegate;


#import "HUItemModuleController.h"

@interface _TtC6HomeUI49ActionSetContainerSummaryGridItemModuleController : HUItemModuleController <HUCollectionLayoutManagerDelegate, HUSceneEditorDelegate>

 {
    ? $__lazy_storage_$_collectionLayoutManager;
    ? sceneEditorDelegate;
}




-(BOOL)shouldShowHeaderForSection:(id)arg0 ;
-(Class)collectionCellClassForItem:(id)arg0 ;
-(id)collectionLayoutSectionForSectionWithIdentifier:(id)arg0 layoutEnvironment:(id)arg1 ;
-(id)displayedItemsInSection:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(id)transformWithLayoutOptions:(id)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)sceneEditor:(id)arg0 removeActionSetBuilderFromTrigger:(id)arg1 ;


@end


#endif