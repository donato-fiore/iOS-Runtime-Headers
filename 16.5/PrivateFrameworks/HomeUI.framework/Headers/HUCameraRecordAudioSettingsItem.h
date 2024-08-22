// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCAMERARECORDAUDIOSETTINGSITEM_H
#define HUCAMERARECORDAUDIOSETTINGSITEM_H

@class HFItem, HMCameraProfile, HMHome;
@protocol HUServiceDetailsCameraSettingsReaderWriterConfigurator;


#import "HUServiceDetailsCameraSettingsReaderWriter.h"

@interface HUCameraRecordAudioSettingsItem : HFItem <HUServiceDetailsCameraSettingsReaderWriterConfigurator>



@property (retain, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUServiceDetailsCameraSettingsReaderWriter *settingsReaderWriter; // ivar: _settingsReaderWriter


-(BOOL)_canReadWriteCameraRecordingSettings;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)cameraSettings;
-(id)characteristicForSettings:(id)arg0 ;
-(id)characteristicValueManager;
-(id)init;
-(id)initWithCameraProfile:(id)arg0 ;
-(id)itemTitle;
-(id)itemTitleLocalizationKey;
-(id)transactionReason;
-(id)updateRecordAudioSettingWithValue:(BOOL)arg0 ;


@end


#endif