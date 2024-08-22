// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBPAIR_H
#define _INPBPAIR_H

@class PBCodable, NSString, NSArray;
@protocol _INPBPair, NSSecureCoding, NSCopying;



@interface _INPBPair : PBCodable <_INPBPair, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasRepeated;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) NSArray *pairCurrencyAmountValues; // ivar: _pairCurrencyAmountValues
@property (readonly, nonatomic) NSUInteger pairCurrencyAmountValuesCount;
@property (copy, nonatomic) NSArray *pairCustomObjects; // ivar: _pairCustomObjects
@property (readonly, nonatomic) NSUInteger pairCustomObjectsCount;
@property (copy, nonatomic) NSArray *pairDataStrings; // ivar: _pairDataStrings
@property (readonly, nonatomic) NSUInteger pairDataStringsCount;
@property (copy, nonatomic) NSArray *pairDataValues; // ivar: _pairDataValues
@property (readonly, nonatomic) NSUInteger pairDataValuesCount;
@property (copy, nonatomic) NSArray *pairDistanceValues; // ivar: _pairDistanceValues
@property (readonly, nonatomic) NSUInteger pairDistanceValuesCount;
@property (copy, nonatomic) NSArray *pairDoubleValues; // ivar: _pairDoubleValues
@property (readonly, nonatomic) NSUInteger pairDoubleValuesCount;
@property (copy, nonatomic) NSArray *pairImageValues; // ivar: _pairImageValues
@property (readonly, nonatomic) NSUInteger pairImageValuesCount;
@property (copy, nonatomic) NSArray *pairIntegerValues; // ivar: _pairIntegerValues
@property (readonly, nonatomic) NSUInteger pairIntegerValuesCount;
@property (copy, nonatomic) NSArray *pairLocationValues; // ivar: _pairLocationValues
@property (readonly, nonatomic) NSUInteger pairLocationValuesCount;
@property (copy, nonatomic) NSArray *pairPaymentMethodValues; // ivar: _pairPaymentMethodValues
@property (readonly, nonatomic) NSUInteger pairPaymentMethodValuesCount;
@property (copy, nonatomic) NSArray *pairPersonValues; // ivar: _pairPersonValues
@property (readonly, nonatomic) NSUInteger pairPersonValuesCount;
@property (copy, nonatomic) NSArray *pairStringValues; // ivar: _pairStringValues
@property (readonly, nonatomic) NSUInteger pairStringValuesCount;
@property (copy, nonatomic) NSArray *pairTemperatureValues; // ivar: _pairTemperatureValues
@property (readonly, nonatomic) NSUInteger pairTemperatureValuesCount;
@property (copy, nonatomic) NSArray *pairUrlValues; // ivar: _pairUrlValues
@property (readonly, nonatomic) NSUInteger pairUrlValuesCount;
@property (nonatomic) BOOL repeated; // ivar: _repeated
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)pairCurrencyAmountValueType;
+(Class)pairCustomObjectType;
+(Class)pairDataStringType;
+(Class)pairDataValueType;
+(Class)pairDistanceValueType;
+(Class)pairDoubleValueType;
+(Class)pairImageValueType;
+(Class)pairIntegerValueType;
+(Class)pairLocationValueType;
+(Class)pairPaymentMethodValueType;
+(Class)pairPersonValueType;
+(Class)pairStringValueType;
+(Class)pairTemperatureValueType;
+(Class)pairUrlValueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)pairCurrencyAmountValueAtIndex:(NSUInteger)arg0 ;
-(id)pairCustomObjectAtIndex:(NSUInteger)arg0 ;
-(id)pairDataStringAtIndex:(NSUInteger)arg0 ;
-(id)pairDataValueAtIndex:(NSUInteger)arg0 ;
-(id)pairDistanceValueAtIndex:(NSUInteger)arg0 ;
-(id)pairDoubleValueAtIndex:(NSUInteger)arg0 ;
-(id)pairImageValueAtIndex:(NSUInteger)arg0 ;
-(id)pairIntegerValueAtIndex:(NSUInteger)arg0 ;
-(id)pairLocationValueAtIndex:(NSUInteger)arg0 ;
-(id)pairPaymentMethodValueAtIndex:(NSUInteger)arg0 ;
-(id)pairPersonValueAtIndex:(NSUInteger)arg0 ;
-(id)pairStringValueAtIndex:(NSUInteger)arg0 ;
-(id)pairTemperatureValueAtIndex:(NSUInteger)arg0 ;
-(id)pairUrlValueAtIndex:(NSUInteger)arg0 ;
-(void)addPairCurrencyAmountValue:(id)arg0 ;
-(void)addPairCustomObject:(id)arg0 ;
-(void)addPairDataString:(id)arg0 ;
-(void)addPairDataValue:(id)arg0 ;
-(void)addPairDistanceValue:(id)arg0 ;
-(void)addPairDoubleValue:(id)arg0 ;
-(void)addPairImageValue:(id)arg0 ;
-(void)addPairIntegerValue:(id)arg0 ;
-(void)addPairLocationValue:(id)arg0 ;
-(void)addPairPaymentMethodValue:(id)arg0 ;
-(void)addPairPersonValue:(id)arg0 ;
-(void)addPairStringValue:(id)arg0 ;
-(void)addPairTemperatureValue:(id)arg0 ;
-(void)addPairUrlValue:(id)arg0 ;
-(void)clearPairCurrencyAmountValues;
-(void)clearPairCustomObjects;
-(void)clearPairDataStrings;
-(void)clearPairDataValues;
-(void)clearPairDistanceValues;
-(void)clearPairDoubleValues;
-(void)clearPairImageValues;
-(void)clearPairIntegerValues;
-(void)clearPairLocationValues;
-(void)clearPairPaymentMethodValues;
-(void)clearPairPersonValues;
-(void)clearPairStringValues;
-(void)clearPairTemperatureValues;
-(void)clearPairUrlValues;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif