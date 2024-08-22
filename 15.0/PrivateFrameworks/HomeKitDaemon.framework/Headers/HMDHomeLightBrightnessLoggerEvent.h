// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMELIGHTBRIGHTNESSLOGGEREVENT_H
#define HMDHOMELIGHTBRIGHTNESSLOGGEREVENT_H

@class BMEventBase, NSString;
@protocol BMStoreData, BMProtoBufWrapper;



@interface HMDHomeLightBrightnessLoggerEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) NSString *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, nonatomic) NSString *brightness; // ivar: _brightness
@property (readonly, nonatomic) NSString *characteristicUUID; // ivar: _characteristicUUID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *homeUUID; // ivar: _homeUUID
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)encodeAsProto;
-(id)initWithHomeUUID:(id)arg0 accessoryUUID:(id)arg1 characteristicUUID:(id)arg2 brightness:(id)arg3 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif