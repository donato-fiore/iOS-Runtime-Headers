// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSETCLIMATESETTINGSINCARINTENT_H
#define INSETCLIMATESETTINGSINCARINTENT_H

@class NSString, NSNumber, NSMeasurement;
@protocol INSetClimateSettingsInCarIntentExport;


#import "INIntent.h"
#import "INSpeakableString.h"

@interface INSetClimateSettingsInCarIntent : INIntent <INSetClimateSettingsInCarIntentExport>



@property (readonly, nonatomic) NSInteger airCirculationMode;
@property (readonly, copy, nonatomic) INSpeakableString *carName;
@property (readonly, nonatomic) NSInteger climateZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *enableAirConditioner;
@property (readonly, copy, nonatomic) NSNumber *enableAutoMode;
@property (readonly, copy, nonatomic) NSNumber *enableClimateControl;
@property (readonly, copy, nonatomic) NSNumber *enableFan;
@property (readonly, copy, nonatomic) NSNumber *fanSpeedIndex;
@property (readonly, copy, nonatomic) NSNumber *fanSpeedPercentage;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger relativeFanSpeedSetting;
@property (readonly, nonatomic) NSInteger relativeTemperatureSetting;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSMeasurement *temperature;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithEnableFan:(id)arg0 enableAirConditioner:(id)arg1 enableClimateControl:(id)arg2 enableAutoMode:(id)arg3 airCirculationMode:(NSInteger)arg4 fanSpeedIndex:(id)arg5 fanSpeedPercentage:(id)arg6 relativeFanSpeedSetting:(NSInteger)arg7 temperature:(id)arg8 relativeTemperatureSetting:(NSInteger)arg9 climateZone:(NSInteger)arg10 ;
-(id)initWithEnableFan:(id)arg0 enableAirConditioner:(id)arg1 enableClimateControl:(id)arg2 enableAutoMode:(id)arg3 airCirculationMode:(NSInteger)arg4 fanSpeedIndex:(id)arg5 fanSpeedPercentage:(id)arg6 relativeFanSpeedSetting:(NSInteger)arg7 temperature:(id)arg8 relativeTemperatureSetting:(NSInteger)arg9 climateZone:(NSInteger)arg10 carName:(id)arg11 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif