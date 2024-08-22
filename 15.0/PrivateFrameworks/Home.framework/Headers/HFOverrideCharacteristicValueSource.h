// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFOVERRIDECHARACTERISTICVALUESOURCE_H
#define HFOVERRIDECHARACTERISTICVALUESOURCE_H

@class NSString;
@protocol HFLightProfileValueSource, HFCharacteristicValueSource, HFCharacteristicOperationContextProviding, HFOverrideCharacteristicValueProvider;

#import <Foundation/Foundation.h>


@interface HFOverrideCharacteristicValueSource : NSObject <HFLightProfileValueSource, HFCharacteristicValueSource>



@property (readonly, nonatomic) NSObject<HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *originalValueSource; // ivar: _originalValueSource
@property (weak, nonatomic) NSObject<HFOverrideCharacteristicValueProvider> *overrideValueProvider; // ivar: _overrideValueProvider
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNaturalLightingEnabledForProfile:(id)arg0 ;
-(BOOL)isNaturalLightingSupportedForProfile:(id)arg0 ;
-(id)cachedErrorForWriteToCharacteristic:(id)arg0 ;
-(id)cachedValueForCharacteristic:(id)arg0 ;
-(id)initWithOriginalValueSource:(id)arg0 overrideValueProvider:(id)arg1 ;
-(id)readValuesForCharacteristicTypes:(id)arg0 inServices:(id)arg1 ;
-(id)readValuesForCharacteristics:(id)arg0 ;
-(id)writeNaturalLightEnabledState:(BOOL)arg0 forProfile:(id)arg1 ;
-(id)writeValuesForCharacteristics:(id)arg0 ;
-(void)beginTransactionWithReason:(id)arg0 readPolicy:(id)arg1 logger:(id)arg2 ;
-(void)commitTransactionWithReason:(id)arg0 ;
-(void)fetchNaturalLightColorTemperatureForBrightness:(NSInteger)arg0 lightProfile:(id)arg1 completion:(id)arg2 ;


@end


#endif