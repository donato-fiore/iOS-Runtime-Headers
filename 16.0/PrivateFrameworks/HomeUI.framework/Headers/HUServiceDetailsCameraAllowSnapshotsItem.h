// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSERVICEDETAILSCAMERAALLOWSNAPSHOTSITEM_H
#define HUSERVICEDETAILSCAMERAALLOWSNAPSHOTSITEM_H

@class HMCameraUserSettings;
@protocol HUServiceDetailsCameraSettingsReaderWriterConfigurator;


#import "HUServiceDetailsAbstractItem.h"
#import "HUServiceDetailsCameraSettingsReaderWriter.h"

@interface HUServiceDetailsCameraAllowSnapshotsItem : HUServiceDetailsAbstractItem <HUServiceDetailsCameraSettingsReaderWriterConfigurator>



@property (retain, nonatomic) HMCameraUserSettings *cameraUserSettings; // ivar: _cameraUserSettings
@property (retain, nonatomic) HUServiceDetailsCameraSettingsReaderWriter *settingsReaderWriter; // ivar: _settingsReaderWriter
@property (nonatomic) BOOL shouldBeHidden; // ivar: _shouldBeHidden


-(BOOL)_canReadWriteHMCameraSnapshotsControl;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)cameraSettings;
-(id)characteristicForSettings:(id)arg0 ;
-(id)characteristicValueManager;
-(id)initWithSourceServiceItem:(id)arg0 home:(id)arg1 shouldBeHidden:(BOOL)arg2 ;
-(id)itemTitle;
-(id)itemTitleLocalizationKey;
-(id)transactionReason;
-(id)updateUserSettingsWithValue:(BOOL)arg0 ;


@end


#endif