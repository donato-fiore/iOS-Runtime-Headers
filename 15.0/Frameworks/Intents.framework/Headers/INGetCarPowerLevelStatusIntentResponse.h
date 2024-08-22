// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INGETCARPOWERLEVELSTATUSINTENTRESPONSE_H
#define INGETCARPOWERLEVELSTATUSINTENTRESPONSE_H

@class NSString, NSNumber, NSDictionary, NSMeasurement, NSDateComponents;
@protocol INGetCarPowerLevelStatusIntentResponseExport;


#import "INIntentResponse.h"

@interface INGetCarPowerLevelStatusIntentResponse : INIntentResponse <INGetCarPowerLevelStatusIntentResponseExport>



@property (copy, nonatomic) NSString *activeConnector;
@property (copy, nonatomic) NSString *carIdentifier;
@property (copy, nonatomic) NSNumber *chargePercentRemaining;
@property (copy, nonatomic) NSNumber *charging;
@property (copy, nonatomic) NSDictionary *chargingFormulaArguments;
@property (readonly, nonatomic) NSInteger code;
@property (copy, nonatomic) NSDictionary *consumptionFormulaArguments;
@property (copy, nonatomic) NSMeasurement *currentBatteryCapacity;
@property (copy, nonatomic) NSDateComponents *dateOfLastStateUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSMeasurement *distanceRemaining;
@property (copy, nonatomic) NSMeasurement *distanceRemainingElectric;
@property (copy, nonatomic) NSMeasurement *distanceRemainingFuel;
@property (copy, nonatomic) NSNumber *fuelPercentRemaining;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSMeasurement *maximumBatteryCapacity;
@property (copy, nonatomic) NSMeasurement *maximumDistance;
@property (copy, nonatomic) NSMeasurement *maximumDistanceElectric;
@property (copy, nonatomic) NSMeasurement *maximumDistanceFuel;
@property (copy, nonatomic) NSMeasurement *minimumBatteryCapacity;
@property (copy, nonatomic) NSNumber *minutesToFull;
@property (readonly) Class superclass;


+(BOOL)_appLaunchRequestedFromCode:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)_codeFromType:(int)arg0 errorCode:(int)arg1 appLaunchRequested:(BOOL)arg2 ;
+(int)_errorCodeFromCode:(NSInteger)arg0 ;
+(int)_typeFromCode:(NSInteger)arg0 ;
-(NSInteger)_codeWithName:(id)arg0 ;
-(NSInteger)_intentResponseCode;
-(id)_dictionaryRepresentation;
-(id)_initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)init;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)propertiesByName;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPropertiesByName:(id)arg0 ;


@end


#endif