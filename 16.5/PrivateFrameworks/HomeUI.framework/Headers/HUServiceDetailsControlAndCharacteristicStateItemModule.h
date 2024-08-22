// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSERVICEDETAILSCONTROLANDCHARACTERISTICSTATEITEMMODULE_H
#define HUSERVICEDETAILSCONTROLANDCHARACTERISTICSTATEITEMMODULE_H

@class NSSet, HFCharacteristicStateItemProvider, HFControlPanelItemProvider;
@protocol HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate;


#import "HUServiceDetailsItemModule.h"

@interface HUServiceDetailsControlAndCharacteristicStateItemModule : HUServiceDetailsItemModule {
    NSSet *_itemProviders;
}


@property (readonly, nonatomic) HFCharacteristicStateItemProvider *characteristicStateItemProvider; // ivar: _characteristicStateItemProvider
@property (readonly, nonatomic) HFControlPanelItemProvider *controlPanelItemProvider; // ivar: _controlPanelItemProvider
@property (weak, nonatomic) NSObject<HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate> *delegate; // ivar: _delegate


-(BOOL)isServiceGroup;
-(id)_allCharacteristicTypesForItem:(id)arg0 ;
-(id)_characteristicStateItemComparator:(SEL)arg0 ;
-(id)_createGroupCharacteristicSectionsForItems:(id)arg0 ;
-(id)_createStandaloneCharacteristicSectionsForItems:(id)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 sourceItem:(id)arg2 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 sourceItem:(id)arg2 delegate:(id)arg3 ;
-(id)itemProviders;
-(id)sourceServiceItem;


@end


#endif