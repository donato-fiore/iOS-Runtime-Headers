// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBULLETINCATEGORY_H
#define HMDBULLETINCATEGORY_H

@class HMFObject;



@interface HMDBulletinCategory : HMFObject



+(BOOL)isSecureServiceType:(id)arg0 ;
+(BOOL)isSensorDetectedCharacteristic:(id)arg0 ;
+(id)_enumerationValueLocalizationKeys;
+(id)_localizedStateForValue:(id)arg0 characteristicType:(id)arg1 ;
+(id)_presentationTypeForType:(id)arg0 ;
+(id)_secureStateMap;
+(id)_sensorMap;
+(id)bulletinReasonForChangedCharacteristic:(id)arg0 ;
+(id)composedNameForCharacteristic:(id)arg0 ;
+(id)localizedActionForCharacteristic:(id)arg0 ;
+(id)localizedStateForCharacteristic:(id)arg0 ;
+(id)localizedStringForItems:(id)arg0 ;
+(id)presentationValueForValue:(id)arg0 type:(id)arg1 ;
+(id)targetCurrentCharacteristicTypeMap;
+(id)trimLeadingAndTailingDotInName:(id)arg0 ;
+(id)trimLeadingAndTailingSpacesInName:(id)arg0 ;


@end


#endif