// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINPROTOCOLMAP_H
#define CHIPPLUGINPROTOCOLMAP_H

@class HMFObject, NSDictionary, NSNumber;



@interface CHIPPluginProtocolMap : HMFObject

@property (readonly, nonatomic) NSDictionary *rawPlist; // ivar: _rawPlist
@property (readonly, nonatomic) NSNumber *schemaVersion; // ivar: _schemaVersion
@property (readonly, nonatomic) NSNumber *version; // ivar: _version


+(id)customMapReadForCharacteristic:(id)arg0 value:(id)arg1 ;
+(id)linearMapForCharacteristic:(id)arg0 value:(id)arg1 fromRange:(id)arg2 toRange:(id)arg3 ;
+(id)logCategory;
+(id)protocolMap;
-(id)_buildValueMapper:(SEL)arg0 characteristicsDict:(id)arg1 operation:(id)arg2 ;
-(id)_categoryDetails:(id)arg0 ;
-(id)_characteristicDescriptionForCharacteristicWithUUID:(id)arg0 characteristicsDict:(id)arg1 chipClusterName:(id)arg2 operationType:(NSUInteger)arg3 value:(id)arg4 ;
-(id)_characteristicsDictionaryForCharacteristicUUID:(id)arg0 ;
-(id)_chipClusterFunctionNameForOperationType:(NSUInteger)arg0 operationDictionary:(id)arg1 value:(id)arg2 ;
-(id)_protocolMapCharacteristicsKeyForOperationType:(NSUInteger)arg0 ;
-(id)accessoryNameForCategory:(id)arg0 ;
-(id)descriptionForCharacteristicUUID:(id)arg0 operation:(NSUInteger)arg1 ;
-(id)descriptionForCharacteristicUUID:(id)arg0 operation:(NSUInteger)arg1 value:(id)arg2 ;
-(id)getUpdatedLinkedCharacteristics:(id)arg0 ;
-(id)init;
-(id)logIdentifier;
-(id)servicesForCategory:(id)arg0 ;


@end


#endif