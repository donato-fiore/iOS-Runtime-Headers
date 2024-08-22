// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUHOMEHUBSHAREDUSERWARNINGITEMMANAGER_H
#define HUHOMEHUBSHAREDUSERWARNINGITEMMANAGER_H

@class HFItemManager, NSArray, NSMapTable;



@interface HUHomeHubSharedUserWarningItemManager : HFItemManager

@property (retain, nonatomic) NSArray *homes; // ivar: _homes
@property (retain, nonatomic) NSMapTable *homesToUsersMap; // ivar: _homesToUsersMap


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 homesToUsersMap:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif