// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAUDIOANALYSISSETTINGSITEMMODULE_H
#define HUAUDIOANALYSISSETTINGSITEMMODULE_H

@class HFItemModule, HFAccessoryItemProvider, HFItemProvider, NSString, HMHome, HFMediaAccessoryItemProvider;
@protocol HFMediaAccessoryCommonSettingsDelegate;



@interface HUAudioAnalysisSettingsItemModule : HFItemModule <HFMediaAccessoryCommonSettingsDelegate>



@property (retain, nonatomic) HFAccessoryItemProvider *accessoryItemProvider; // ivar: _accessoryItemProvider
@property (retain, nonatomic) HFItemProvider *audioAnalysisDeviceItemProvider; // ivar: _audioAnalysisDeviceItemProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFMediaAccessoryItemProvider *mediaAccessoryItemProvider; // ivar: _mediaAccessoryItemProvider
@property (retain, nonatomic) HFItemProvider *soundsItemProvider; // ivar: _soundsItemProvider
@property (readonly) Class superclass;


+(id)_audioAnalysisDeviceItemComparator:(SEL)arg0 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)enableAudioAnalysisSetting:(BOOL)arg0 forItem:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 ;
-(id)itemProviders;
-(id)updateAudioAnalysisDetectionSettings:(BOOL)arg0 forItem:(id)arg1 ;
-(void)_buildItemProviders;
-(void)mediaProfileContainer:(id)arg0 didUpdateSettingKeypath:(id)arg1 value:(id)arg2 ;


@end


#endif