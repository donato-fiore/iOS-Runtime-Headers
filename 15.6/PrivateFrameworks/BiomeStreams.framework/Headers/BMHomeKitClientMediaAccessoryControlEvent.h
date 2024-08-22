// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMHOMEKITCLIENTMEDIAACCESSORYCONTROLEVENT_H
#define BMHOMEKITCLIENTMEDIAACCESSORYCONTROLEVENT_H

@class NSString, NSDictionary, NSArray;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"
#import "BMHomeKitClientBase.h"

@interface BMHomeKitClientMediaAccessoryControlEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, copy, nonatomic) NSString *accessoryMediaRouteIdentifier; // ivar: _accessoryMediaRouteIdentifier
@property (readonly, copy, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (readonly, copy, nonatomic) NSDictionary *accessoryStateData; // ivar: _accessoryStateData
@property (readonly, copy, nonatomic) NSDictionary *accessoryStateNumber; // ivar: _accessoryStateNumber
@property (readonly, copy, nonatomic) NSDictionary *accessoryStateString; // ivar: _accessoryStateString
@property (readonly, copy, nonatomic) NSString *accessoryUniqueIdentifier; // ivar: _accessoryUniqueIdentifier
@property (readonly, copy, nonatomic) BMHomeKitClientBase *base; // ivar: _base
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *homeName; // ivar: _homeName
@property (readonly, copy, nonatomic) NSString *roomName; // ivar: _roomName
@property (readonly, copy, nonatomic) NSString *roomUniqueIdentifier; // ivar: _roomUniqueIdentifier
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *zoneNames; // ivar: _zoneNames
@property (readonly, copy, nonatomic) NSArray *zoneUniqueIdentifiers; // ivar: _zoneUniqueIdentifiers


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithBase:(id)arg0 accessoryUniqueIdentifier:(id)arg1 accessoryStateString:(id)arg2 accessoryStateNumber:(id)arg3 accessoryStateData:(id)arg4 accessoryMediaRouteIdentifier:(id)arg5 zoneUniqueIdentifiers:(id)arg6 roomUniqueIdentifier:(id)arg7 accessoryName:(id)arg8 roomName:(id)arg9 zoneNames:(id)arg10 homeName:(id)arg11 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif