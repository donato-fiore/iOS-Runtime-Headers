// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC6HOMEUI29SERVICEGROUPEDITORITEMMANAGER_H
#define _TTC6HOMEUI29SERVICEGROUPEDITORITEMMANAGER_H

@class HFItemManager;



@interface _TtC6HomeUI29ServiceGroupEditorItemManager : HFItemManager {
    ? creatingNew;
    ? nameAndIconItem;
    ? accessoryElementItemModule;
    ? selectionController;
    ? staticItemProvider;
    ? accessoryElementContext;
}




-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif