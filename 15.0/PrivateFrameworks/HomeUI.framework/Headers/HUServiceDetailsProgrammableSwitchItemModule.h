// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSERVICEDETAILSPROGRAMMABLESWITCHITEMMODULE_H
#define HUSERVICEDETAILSPROGRAMMABLESWITCHITEMMODULE_H

@class NSSet, HFItem<HFServiceLikeItem>;


#import "HUServiceDetailsItemModule.h"
#import "HUCharacteristicEventOptionProvider.h"

@interface HUServiceDetailsProgrammableSwitchItemModule : HUServiceDetailsItemModule

@property (copy, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (readonly, nonatomic) HUCharacteristicEventOptionProvider *programmableSwitchOptionsProvider; // ivar: _programmableSwitchOptionsProvider
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *sourceItem;


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;


@end


#endif