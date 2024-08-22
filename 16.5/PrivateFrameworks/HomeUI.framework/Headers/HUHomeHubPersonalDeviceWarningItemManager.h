// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEHUBPERSONALDEVICEWARNINGITEMMANAGER_H
#define HUHOMEHUBPERSONALDEVICEWARNINGITEMMANAGER_H

@class HFItemManager, NSSet;



@interface HUHomeHubPersonalDeviceWarningItemManager : HFItemManager

@property (retain, nonatomic) NSSet *devices; // ivar: _devices


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 devices:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)itemForDevice:(id)arg0 ;


@end


#endif