// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPMETADATA_H
#define HAPMETADATA_H

@class HMFObject, NSString, NSDictionary, NSArray, NSSet, NSMutableArray, NSNumber;



@interface HAPMetadata : HMFObject

@property (retain, nonatomic) NSString *hapBaseUUIDSuffix; // ivar: _hapBaseUUIDSuffix
@property (retain, nonatomic) NSDictionary *hapCharacteristicMap; // ivar: _hapCharacteristicMap
@property (retain, nonatomic) NSDictionary *hapCharacteristicNameTypeMap; // ivar: _hapCharacteristicNameTypeMap
@property (readonly, nonatomic) NSArray *hapCharacteristics;
@property (readonly, nonatomic) NSArray *hapProperties;
@property (retain, nonatomic) NSDictionary *hapPropertyMap; // ivar: _hapPropertyMap
@property (retain, nonatomic) NSDictionary *hapServiceMap; // ivar: _hapServiceMap
@property (retain, nonatomic) NSDictionary *hapServiceNameTypeMap; // ivar: _hapServiceNameTypeMap
@property (readonly, nonatomic) NSArray *hapServices;
@property (retain, nonatomic) NSSet *hapSupportsAuthDataSet; // ivar: _hapSupportsAuthDataSet
@property (readonly, nonatomic) NSArray *hapSupportsAuthDataTuples;
@property (retain, nonatomic) NSDictionary *hapUnitMap; // ivar: _hapUnitMap
@property (readonly, nonatomic) NSArray *hapValueUnits;
@property (retain, nonatomic) NSMutableArray *parsedUUIDs; // ivar: _parsedUUIDs
@property (readonly, nonatomic) NSDictionary *rawPlist; // ivar: _rawPlist
@property (retain, nonatomic) NSNumber *schemaVersion; // ivar: _schemaVersion
@property (retain, nonatomic) NSNumber *version; // ivar: _version


+(id)getSharedInstance;
+(id)shortenHAPType:(id)arg0 baseUUIDSuffix:(id)arg1 ;
+(void)setCurrentMetadataHook:(id)arg0 ;
-(BOOL)allowAssociatedService:(id)arg0 ;
-(BOOL)isMandatoryCharacteristic:(id)arg0 forService:(id)arg1 ;
-(BOOL)isStandardHAPCharacteristic:(id)arg0 ;
-(BOOL)isStandardHAPCharacteristicName:(id)arg0 ;
-(BOOL)isStandardHAPService:(id)arg0 ;
-(BOOL)isStandardHAPServiceName:(id)arg0 ;
-(BOOL)isStandardHAPUnitName:(id)arg0 ;
-(BOOL)parseMetadata:(id)arg0 ;
-(BOOL)parseVersion:(id)arg0 ;
-(BOOL)supportsAdditionalAuthorizationData:(id)arg0 forService:(id)arg1 ;
-(BOOL)updateRawPlist;
-(BOOL)validateMandatoryCharacteristics:(id)arg0 forService:(id)arg1 ;
-(id)btleToServiceType:(id)arg0 ;
-(id)characteristicTypeFromUTI:(id)arg0 ;
-(id)characteristicUTIFromType:(id)arg0 ;
-(id)characteristicValueUnitOfType:(id)arg0 ;
-(id)descriptionFromCharacteristicType:(id)arg0 ;
-(id)descriptionFromServiceType:(id)arg0 ;
-(id)generateDictionary;
-(id)generateHAPMetadataTuplesDictionary:(id)arg0 ;
-(id)getDefaultCharacteristicMetadata:(id)arg0 ;
-(id)getDefaultCharacteristicProperties:(id)arg0 ;
-(id)getDefaultServiceProperties:(id)arg0 ;
-(id)hapCharacteristicFromName:(id)arg0 ;
-(id)hapCharacteristicFromType:(id)arg0 ;
-(id)hapServiceFromName:(id)arg0 ;
-(id)hapServiceFromType:(id)arg0 ;
-(id)hapUnitFromName:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithServices:(id)arg0 characteristics:(id)arg1 units:(id)arg2 properties:(id)arg3 addAuthDataTuples:(id)arg4 hapBaseUUIDSuffix:(id)arg5 ;
-(id)parseCharacteristicServiceTuples:(id)arg0 ;
-(id)parseCharacteristicValue:(id)arg0 ;
-(id)parseCharacteristics:(id)arg0 ;
-(id)parseProperties:(id)arg0 ;
-(id)parseServiceCharacteristics:(id)arg0 ;
-(id)parseServices:(id)arg0 ;
-(id)parseUnits:(id)arg0 ;
-(id)serviceTypeFromUTI:(id)arg0 ;
-(id)serviceTypeToBTLE:(id)arg0 ;
-(id)serviceUTIFromType:(id)arg0 ;


@end


#endif