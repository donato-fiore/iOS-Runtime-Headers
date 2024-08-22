// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUMEDIAACCESSORYAUDIOSETTINGSITEMMANAGER_H
#define HUMEDIAACCESSORYAUDIOSETTINGSITEMMANAGER_H

@class HFItemManager, HFItem, HFMediaSystemBuilder;



@interface HUMediaAccessoryAudioSettingsItemManager : HFItemManager

@property (readonly, nonatomic) HFItem *audioSettingsItem; // ivar: _audioSettingsItem
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder; // ivar: _mediaSystemBuilder


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithMediaSystemBuilder:(id)arg0 sourceItem:(id)arg1 delegate:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;


@end


#endif