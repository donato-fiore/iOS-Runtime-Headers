// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSCAPABILITYMANAGER_H
#define PSCAPABILITYMANAGER_H

@class NSNumber, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PSCapabilityManager : NSObject

@property (retain, nonatomic) NSNumber *overrideForAllBoolValues; // ivar: _overrideForAllBoolValues
@property (retain, nonatomic) NSMutableDictionary *overrides; // ivar: _overrides


+(id)sharedManager;
-(BOOL)capabilityBoolAnswer:(id)arg0 ;
-(BOOL)hasCapabilities:(id)arg0 ;
-(id)applicationDisplayIdentifiers;
-(id)capabilityAnswer:(id)arg0 ;
-(id)init;
-(id)preferencesCapabilityAnswer:(id)arg0 ;
-(id)supportPSPhoneNoiseCancellationCapability;
-(id)supportPSPhotoFormatProRAWCapability;
-(id)supportPSRecordHDRVideoCapability;
-(id)supportsAutoWhiteBalanceCapability;
-(id)supportsDisplayZoomCapability;
-(id)supportsInEDUModeCapability;
-(id)supportsInStoreDemoModeCapability;
-(id)supportsLightningAdapterCapability;
-(id)supportsListeningExperienceCapbility;
-(id)supportsNightShiftCapability;
-(id)supportsPSCellularDataPlanCapability;
-(id)supportsPSDeveloperSettingsCapability;
-(id)supportsPSExposureNotificationsCapability;
-(id)supportsPSHomeScreenPhoneCapability;
-(id)supportsPSPencilCapability;
-(id)supportsPSTTYCapability;
-(id)supportsPSTrackpadAndMouseCapability;
-(id)supportsPSTrackpadOnlyCapability;
-(id)supportsPictureInPictureCapability;
-(id)supportsRaiseToWakeCapability;
-(id)supportsWalletApplePayCapability;
-(void)setOverrideValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif