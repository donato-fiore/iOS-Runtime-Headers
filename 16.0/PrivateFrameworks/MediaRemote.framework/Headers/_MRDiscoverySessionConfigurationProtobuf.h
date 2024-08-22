// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRDISCOVERYSESSIONCONFIGURATIONPROTOBUF_H
#define _MRDISCOVERYSESSIONCONFIGURATIONPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRDiscoverySessionConfigurationProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL alwaysAllowUpdates; // ivar: _alwaysAllowUpdates
@property (nonatomic) BOOL enableThrottling; // ivar: _enableThrottling
@property (nonatomic) int features; // ivar: _features
@property (nonatomic) BOOL hasAlwaysAllowUpdates;
@property (nonatomic) BOOL hasEnableThrottling;
@property (nonatomic) BOOL hasFeatures;
@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (nonatomic) BOOL hasPopulatesExternalDevice;
@property (readonly, nonatomic) BOOL hasRoutingContextUID;
@property (nonatomic) BOOL hasTargetSessionID;
@property (retain, nonatomic) NSString *outputDeviceUID; // ivar: _outputDeviceUID
@property (nonatomic) BOOL populatesExternalDevice; // ivar: _populatesExternalDevice
@property (retain, nonatomic) NSString *routingContextUID; // ivar: _routingContextUID
@property (nonatomic) unsigned int targetSessionID; // ivar: _targetSessionID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)featuresAsString:(int)arg0 ;
-(int)StringAsFeatures:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif