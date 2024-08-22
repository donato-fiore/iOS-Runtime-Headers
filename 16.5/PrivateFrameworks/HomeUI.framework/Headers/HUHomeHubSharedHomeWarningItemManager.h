// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEHUBSHAREDHOMEWARNINGITEMMANAGER_H
#define HUHOMEHUBSHAREDHOMEWARNINGITEMMANAGER_H

@class HFItemManager, NSSet;



@interface HUHomeHubSharedHomeWarningItemManager : HFItemManager

@property (retain, nonatomic) NSSet *homes; // ivar: _homes


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 homes:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)itemForHome:(id)arg0 ;


@end


#endif