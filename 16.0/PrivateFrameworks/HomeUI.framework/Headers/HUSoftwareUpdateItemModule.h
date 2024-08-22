// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSOFTWAREUPDATEITEMMODULE_H
#define HUSOFTWAREUPDATEITEMMODULE_H

@class HFItemModule, NSSet, HMHome, HFItem<HFSoftwareUpdatableItemProtocol>;


#import "HUSoftwareUpdateInfoItemProvider.h"

@interface HUSoftwareUpdateItemModule : HFItemModule

@property (readonly, nonatomic) NSSet *accessories; // ivar: _accessories
@property (nonatomic) BOOL hideAppleUpdates; // ivar: _hideAppleUpdates
@property (nonatomic) BOOL hideThirdPartyUpdates; // ivar: _hideThirdPartyUpdates
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUSoftwareUpdateInfoItemProvider *softwareUpdateInfoItemProvider; // ivar: _softwareUpdateInfoItemProvider
@property (readonly, nonatomic) HFItem<HFSoftwareUpdatableItemProtocol> *sourceItem; // ivar: _sourceItem


-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 sourceItem:(id)arg2 ;
-(void)_reloadItemProviders;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif