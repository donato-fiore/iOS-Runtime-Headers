// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNETWORKCONFIGURATIONITEMLISTMODULE_H
#define HUNETWORKCONFIGURATIONITEMLISTMODULE_H

@class HFItemModule, HMHome, HFNetworkConfigurationGroupItemProvider;



@interface HUNetworkConfigurationItemListModule : HFItemModule

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFNetworkConfigurationGroupItemProvider *networkConfigurationGroupItemProvider; // ivar: _networkConfigurationGroupItemProvider


-(BOOL)isItemNetworkConfigurationGroupItem:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)itemProviders;
-(id)networkConfigurationGroupItemForProfile:(id)arg0 ;


@end


#endif