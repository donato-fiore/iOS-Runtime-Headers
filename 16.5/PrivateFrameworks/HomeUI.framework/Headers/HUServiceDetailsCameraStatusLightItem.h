// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSERVICEDETAILSCAMERASTATUSLIGHTITEM_H
#define HUSERVICEDETAILSCAMERASTATUSLIGHTITEM_H

@protocol HUServiceDetailsCameraSettingsReaderWriterConfigurator;


#import "HUServiceDetailsAbstractItem.h"
#import "HUServiceDetailsCameraSettingsReaderWriter.h"

@interface HUServiceDetailsCameraStatusLightItem : HUServiceDetailsAbstractItem <HUServiceDetailsCameraSettingsReaderWriterConfigurator>



@property (retain, nonatomic) HUServiceDetailsCameraSettingsReaderWriter *settingsReaderWriter; // ivar: _settingsReaderWriter


-(BOOL)_canReadWriteAccessModeIndicator;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)cameraSettings;
-(id)characteristicForSettings:(id)arg0 ;
-(id)characteristicValueManager;
-(id)itemTitle;
-(id)itemTitleLocalizationKey;
-(id)transactionReason;
-(id)updateUserSettingsWithValue:(BOOL)arg0 ;


@end


#endif