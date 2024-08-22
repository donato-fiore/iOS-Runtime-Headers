// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSOFTWAREUPDATERECENTUPDATESITEMMANAGER_H
#define HUSOFTWAREUPDATERECENTUPDATESITEMMANAGER_H

@class HFItemManager, HMHome;


#import "HUSoftwareUpdateItemModule.h"

@interface HUSoftwareUpdateRecentUpdatesItemManager : HFItemManager

@property (retain, nonatomic) HMHome *overrideHome; // ivar: _overrideHome
@property (retain, nonatomic) HUSoftwareUpdateItemModule *softwareUpdateModule; // ivar: _softwareUpdateModule


-(id)_buildItemModulesForHome:(id)arg0 ;
-(id)_homeFuture;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 home:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;


@end


#endif