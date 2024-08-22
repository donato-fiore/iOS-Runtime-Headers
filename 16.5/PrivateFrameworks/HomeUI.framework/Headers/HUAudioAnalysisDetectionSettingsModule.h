// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAUDIOANALYSISDETECTIONSETTINGSMODULE_H
#define HUAUDIOANALYSISDETECTIONSETTINGSMODULE_H

@class HFItemModule, NSSet, HMAccessory, HFItemProvider;



@interface HUAudioAnalysisDetectionSettingsModule : HFItemModule {
    NSSet *_itemProviders;
}


@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HFItemProvider *audioDetectionSettingsItemProvider; // ivar: _audioDetectionSettingsItemProvider


-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 accessory:(id)arg1 ;
-(id)itemProviders;


@end


#endif