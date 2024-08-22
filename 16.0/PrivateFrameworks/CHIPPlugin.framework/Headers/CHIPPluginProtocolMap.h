// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHIPPLUGINPROTOCOLMAP_H
#define CHIPPLUGINPROTOCOLMAP_H

@class HMFObject, NSDictionary, NSNumber;



@interface CHIPPluginProtocolMap : HMFObject

@property (readonly, nonatomic) NSDictionary *hapToCHIPClusterMapping; // ivar: _hapToCHIPClusterMapping
@property (readonly, nonatomic) NSDictionary *rawPlist; // ivar: _rawPlist
@property (readonly, nonatomic) NSNumber *schemaVersion; // ivar: _schemaVersion
@property (readonly, nonatomic) NSNumber *version; // ivar: _version


+(BOOL)checkIfCharacteristicsIsOfTypeTemp:(id)arg0 ;
+(id)customMapEventForCharacteristic:(id)arg0 event:(id)arg1 value:(id)arg2 ;
+(id)customMapReadForCharacteristic:(id)arg0 value:(id)arg1 ;
+(id)customMapWriteForCharacteristic:(id)arg0 value:(id)arg1 ;
+(id)linearMapForCharacteristic:(id)arg0 value:(id)arg1 fromRange:(id)arg2 toRange:(id)arg3 ;
+(id)logCategory;
+(id)mapActiveState:(id)arg0 ;
+(id)mapCurrentHeatingCoolingState:(id)arg0 ;
+(id)mapCurrentSystemMode:(id)arg0 ;
+(id)mapFanMode:(id)arg0 ;
+(id)mapPositionState:(id)arg0 ;
+(id)mapTargetHeatingCoolingState:(id)arg0 ;
+(id)mapTargetSystemMode:(id)arg0 ;
+(id)protocolMap;
-(BOOL)_isValidCharacteristicValue:(id)arg0 value:(id)arg1 ;
-(id)_buildEventMapper:(SEL)arg0 characteristicsDict:(id)arg1 ;
-(id)_buildValueMapper:(SEL)arg0 characteristicsDict:(id)arg1 operation:(id)arg2 ;
-(id)_characteristicDescriptionForCharacteristicWithUUID:(id)arg0 characteristicsDict:(id)arg1 chipClusterName:(id)arg2 operationType:(NSUInteger)arg3 value:(id)arg4 ;
-(id)_characteristicsDictionaryForCharacteristicUUID:(id)arg0 ;
-(id)_chipClusterFunctionNameForOperationType:(NSUInteger)arg0 operationDictionary:(id)arg1 value:(id)arg2 ;
-(id)_chipParamsDictionaryForOperationType:(NSUInteger)arg0 operationDictionary:(id)arg1 value:(id)arg2 ;
-(id)_protocolMapCharacteristicsKeyForOperationType:(NSUInteger)arg0 ;
-(id)categoriesForDeviceTypes:(id)arg0 ;
-(id)descriptionForCharacteristicUUID:(id)arg0 operation:(NSUInteger)arg1 ;
-(id)descriptionForCharacteristicUUID:(id)arg0 operation:(NSUInteger)arg1 value:(id)arg2 ;
-(id)getClusterClassForCharacteristic:(id)arg0 ;
-(id)getIDForCharacteristic:(id)arg0 ;
-(id)getRequiredFeaturesBitmapForCharacteristic:(id)arg0 ;
-(id)getUpdatedLinkedCharacteristics:(id)arg0 ;
-(id)init;
-(id)logIdentifier;
-(id)optionalCharacterisiticsForService:(id)arg0 ;
-(id)reportDescriptionForCharacteristic:(id)arg0 ;
-(id)requiredCharacterisiticsForService:(id)arg0 ;
-(id)retrieveHAPToCHIPClusterMapping;
-(id)servicesForDeviceTypes:(id)arg0 ;
-(void)updateMetadataForCharacteristic:(id)arg0 metadata:(id)arg1 endpointID:(id)arg2 topology:(id)arg3 ;


@end


#endif