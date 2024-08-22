// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMHOMEKITCLIENTACCESSORYCONTROLEVENT_H
#define BMHOMEKITCLIENTACCESSORYCONTROLEVENT_H

@class NSString, NSData, NSNumber, NSArray;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"
#import "BMHomeKitClientBase.h"

@interface BMHomeKitClientAccessoryControlEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, copy, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (readonly, copy, nonatomic) NSData *accessoryStateData; // ivar: _accessoryStateData
@property (readonly, copy, nonatomic) NSNumber *accessoryStateNumber; // ivar: _accessoryStateNumber
@property (readonly, copy, nonatomic) NSString *accessoryStateString; // ivar: _accessoryStateString
@property (readonly, copy, nonatomic) NSString *accessoryUniqueIdentifier; // ivar: _accessoryUniqueIdentifier
@property (readonly, copy, nonatomic) BMHomeKitClientBase *base; // ivar: _base
@property (readonly, copy, nonatomic) NSString *characteristicType; // ivar: _characteristicType
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *homeName; // ivar: _homeName
@property (readonly, copy, nonatomic) NSString *roomName; // ivar: _roomName
@property (readonly, copy, nonatomic) NSString *roomUniqueIdentifier; // ivar: _roomUniqueIdentifier
@property (readonly, copy, nonatomic) NSString *serviceGroupName; // ivar: _serviceGroupName
@property (readonly, copy, nonatomic) NSString *serviceGroupUniqueIdentifier; // ivar: _serviceGroupUniqueIdentifier
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly, copy, nonatomic) NSString *serviceUniqueIdentifier; // ivar: _serviceUniqueIdentifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *zoneNames; // ivar: _zoneNames
@property (readonly, copy, nonatomic) NSArray *zoneUniqueIdentifiers; // ivar: _zoneUniqueIdentifiers


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithBase:(id)arg0 dataAccessoryState:(id)arg1 accessoryUniqueIdentifier:(id)arg2 serviceUniqueIdentifier:(id)arg3 serviceType:(id)arg4 characteristicType:(id)arg5 serviceGroupUniqueIdentifier:(id)arg6 zoneUniqueIdentifiers:(id)arg7 roomUniqueIdentifier:(id)arg8 accessoryName:(id)arg9 serviceName:(id)arg10 roomName:(id)arg11 serviceGroupName:(id)arg12 zoneNames:(id)arg13 homeName:(id)arg14 ;
-(id)initWithBase:(id)arg0 numberAccessoryState:(id)arg1 accessoryUniqueIdentifier:(id)arg2 serviceUniqueIdentifier:(id)arg3 serviceType:(id)arg4 characteristicType:(id)arg5 serviceGroupUniqueIdentifier:(id)arg6 zoneUniqueIdentifiers:(id)arg7 roomUniqueIdentifier:(id)arg8 accessoryName:(id)arg9 serviceName:(id)arg10 roomName:(id)arg11 serviceGroupName:(id)arg12 zoneNames:(id)arg13 homeName:(id)arg14 ;
-(id)initWithBase:(id)arg0 stringAccessoryState:(id)arg1 accessoryUniqueIdentifier:(id)arg2 serviceUniqueIdentifier:(id)arg3 serviceType:(id)arg4 characteristicType:(id)arg5 serviceGroupUniqueIdentifier:(id)arg6 zoneUniqueIdentifiers:(id)arg7 roomUniqueIdentifier:(id)arg8 accessoryName:(id)arg9 serviceName:(id)arg10 roomName:(id)arg11 serviceGroupName:(id)arg12 zoneNames:(id)arg13 homeName:(id)arg14 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif