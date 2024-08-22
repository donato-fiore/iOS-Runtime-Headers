// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRPROTOCOLMAP_H
#define HMMTRPROTOCOLMAP_H

@class HMFObject, NSDictionary, NSNumber;



@interface HMMTRProtocolMap : HMFObject

@property (readonly, nonatomic) NSDictionary *hapToCHIPClusterMappingArray; // ivar: _hapToCHIPClusterMappingArray
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
-(BOOL)optionalServiceLabelIndexIncludedInService:(id)arg0 ;
-(id)_buildEventMapper:(SEL)arg0 characteristicsDict:(id)arg1 ;
-(id)_buildExpectedValueMapper:(SEL)arg0 characteristicsDict:(id)arg1 operation:(id)arg2 valueMapper:(NSUInteger)arg3 ;
-(id)_buildValueMapper:(SEL)arg0 characteristicsDict:(id)arg1 operation:(id)arg2 forMTRCluster:(NSUInteger)arg3 ;
-(id)_characteristicDescriptionForCharacteristicWithUUID:(id)arg0 characteristicsDict:(id)arg1 chipClusterName:(id)arg2 operationType:(NSUInteger)arg3 value:(id)arg4 forMTRCluster:(BOOL)arg5 ;
-(id)_characteristicsDictionaryForCharacteristic:(id)arg0 endpointID:(NSUInteger)arg1 clusterIDCharacteristicMap:(id)arg2 ;
-(id)_characteristicsDictionaryForCharacteristicUUID:(id)arg0 endpointID:(NSUInteger)arg1 clusterIDCharacteristicMap:(id)arg2 ;
-(id)_chipClusterFunctionNameForOperationType:(NSUInteger)arg0 operationDictionary:(id)arg1 value:(id)arg2 forMTRCluster:(BOOL)arg3 ;
-(id)_chipParamsDictionaryForOperationType:(NSUInteger)arg0 operationDictionary:(id)arg1 value:(id)arg2 ;
-(id)_descriptionForCharacteristicUUID:(id)arg0 operation:(NSUInteger)arg1 value:(id)arg2 forMTRCluster:(BOOL)arg3 endpointID:(NSUInteger)arg4 clusterIDCharacteristicMap:(id)arg5 ;
-(id)_mtrClusterReadFunctionNameFromBaseClusterFunctionName:(id)arg0 ;
-(id)_mtrClusterWriteFunctionNameFromBaseClusterFunctionName:(id)arg0 ;
-(id)_protocolMapCharacteristicsKeyForOperationType:(NSUInteger)arg0 ;
-(id)categoriesForDeviceTypes:(id)arg0 ;
-(id)descriptionForCharacteristicUUID:(id)arg0 operation:(NSUInteger)arg1 endpointID:(NSUInteger)arg2 clusterIDCharacteristicMap:(id)arg3 ;
-(id)descriptionForCharacteristicUUID:(id)arg0 operation:(NSUInteger)arg1 value:(id)arg2 endpointID:(NSUInteger)arg3 clusterIDCharacteristicMap:(id)arg4 ;
-(id)descriptionOfMTRClusterForCharacteristicUUID:(id)arg0 operation:(NSUInteger)arg1 value:(id)arg2 endpointID:(NSUInteger)arg3 clusterIDCharacteristicMap:(id)arg4 ;
-(id)getClusterClassForCharacteristic:(id)arg0 endpointID:(id)arg1 clusterIDCharacteristicMap:(id)arg2 ;
-(id)getIDForCharacteristic:(id)arg0 ;
-(id)getRequiredFeaturesBitmapForCharacteristic:(id)arg0 ;
-(id)getUpdatedLinkedCharacteristics:(id)arg0 endpointID:(id)arg1 clusterIDCharacteristicMap:(id)arg2 ;
-(id)init;
-(id)optionalCharacteristicsForService:(id)arg0 ;
-(id)reportDescriptionForCharacteristic:(id)arg0 endpointID:(id)arg1 clusterIDCharacteristicMap:(id)arg2 ;
-(id)requiredCharacteristicsForService:(id)arg0 ;
-(id)retrieveHAPToCHIPClusterMapping;
-(id)servicesForDeviceTypes:(id)arg0 ;
-(void)updateMetadataForCharacteristic:(id)arg0 metadata:(id)arg1 endpointID:(id)arg2 topology:(id)arg3 clusterIDCharacteristicMap:(id)arg4 ;


@end


#endif