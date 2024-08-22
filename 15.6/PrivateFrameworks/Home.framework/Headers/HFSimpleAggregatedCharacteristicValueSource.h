// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSIMPLEAGGREGATEDCHARACTERISTICVALUESOURCE_H
#define HFSIMPLEAGGREGATEDCHARACTERISTICVALUESOURCE_H

@class NSSet, NSDictionary, NSString;
@protocol HFLightProfileAggregatedValueSource, HFAggregatedCharacteristicValueSource, HFCharacteristicValueSource;

#import <Foundation/Foundation.h>

#import "HFServiceDescriptor.h"

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject <HFLightProfileAggregatedValueSource, HFAggregatedCharacteristicValueSource>



@property (readonly, copy, nonatomic) NSSet *allServices; // ivar: _allServices
@property (readonly, copy, nonatomic) NSSet *characteristics; // ivar: _characteristics
@property (readonly, copy, nonatomic) NSDictionary *characteristicsByType; // ivar: _characteristicsByType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *lightProfiles;
@property (readonly, nonatomic) HFServiceDescriptor *primaryServiceDescriptor; // ivar: _primaryServiceDescriptor
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNaturalLightingEnabled;
-(BOOL)isNaturalLightingSupported;
-(id)allCharacteristicsForCharacteristicType:(id)arg0 ;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithValueSource:(id)arg0 characteristics:(id)arg1 primaryServiceDescriptor:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 services:(id)arg1 primaryServiceDescriptor:(id)arg2 ;
-(id)metadataForCharacteristicType:(id)arg0 ;
-(id)readValuesForCharacteristicTypes:(id)arg0 ;
-(id)readValuesForServiceStateRecipe:(id)arg0 ;
-(id)writeNaturalLightEnabledState:(BOOL)arg0 ;
-(id)writeValuesForCharacteristicRecipes:(id)arg0 ;
-(id)writeValuesForCharacteristicTypes:(id)arg0 ;
-(void)beginTransactionWithReason:(id)arg0 readPolicy:(id)arg1 logger:(id)arg2 ;
-(void)commitTransactionWithReason:(id)arg0 ;
-(void)fetchNaturalLightColorTemperatureForBrightness:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif