// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYSETTINGSPROFILEITEMMANAGER_H
#define HUACCESSORYSETTINGSPROFILEITEMMANAGER_H

@class HFItemManager;


#import "HUAccessorySettingsProfileModule.h"

@interface HUAccessorySettingsProfileItemManager : HFItemManager

@property (retain, nonatomic) HUAccessorySettingsProfileModule *profileModule; // ivar: _profileModule


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 accessoryGroupItem:(id)arg1 ;


@end


#endif