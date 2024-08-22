// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMETADATAVALIDATIONUTILITIES_H
#define HKMETADATAVALIDATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKMetadataValidationUtilities : NSObject



+(BOOL)hk_validateActivityMoveModeMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateAppleECGAlgorithmValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateAppleHeartbeatSeriesAlgorithmVersionMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateBodyTemperatureSensorLocationMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateCoreMotionSourceIdentifierMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateDevicePlacementSideValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateDigitalSignatureMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateHeartRateSensorLocationMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateInsulinDeliveryReasonMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateMealTimeMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateMetadataValueClass:(id)arg0 forKey:(id)arg1 expectedClassLookupTable:(id)arg2 error:(*id)arg3 ;
+(BOOL)hk_validateQuantityMetadataValue:(id)arg0 value:(id)arg1 compatibleUnit:(id)arg2 error:(*id)arg3 ;
+(BOOL)hk_validateSwimmingLocationTypeMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateSwimmingStrokeStyleMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateSyncIdentifierMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateSyncVersionMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateTimeZoneMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateVO2MaxTestTypeMetadataValue:(id)arg0 error:(*id)arg1 ;
+(BOOL)hk_validateWeatherConditionMetadataValue:(id)arg0 error:(*id)arg1 ;


@end


#endif