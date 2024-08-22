// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6HOMEUI29DASHBOARDFILTERBARITEMMANAGER_H
#define _TTC6HOMEUI29DASHBOARDFILTERBARITEMMANAGER_H

@class HFItemManager;



@interface _TtC6HomeUI29DashboardFilterBarItemManager : HFItemManager {
    ? categoryItemProvider;
    ? actionSetItemProvider;
}




-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif