// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC6HOMEUI31DASHBOARDSECTIONLISTITEMMANAGER_H
#define _TTC6HOMEUI31DASHBOARDSECTIONLISTITEMMANAGER_H

@class HFItemManager, HMHome;



@interface _TtC6HomeUI31DashboardSectionListItemManager : HFItemManager {
    ? roomItemProvider;
    ? categoryItemProvider;
    ? staticItemProvider;
    ? sceneSectionItem;
    ? cameraSectionItem;
    ? favoriteSectionItem;
    ? room;
    ? reorderableSectionList;
}


@property (nonatomic, retain) HMHome *home;


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif