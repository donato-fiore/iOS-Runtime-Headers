// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETSCHEMANETPEERCONNECTIONFAILED_H
#define NETSCHEMANETPEERCONNECTIONFAILED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETPeerConnectionFailed : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *connectedBtDevices; // ivar: _connectedBtDevices
@property (nonatomic) BOOL hasDevice; // ivar: _hasDevice
@property (nonatomic) BOOL hasHasDevice;
@property (nonatomic) BOOL hasIsCloudConnected;
@property (nonatomic) BOOL hasIsConnected;
@property (nonatomic) BOOL hasIsNearby;
@property (nonatomic) BOOL hasIsPreferringBtClassic;
@property (nonatomic) BOOL hasTimeSinceLastNearbyChangeInSeconds;
@property (nonatomic) BOOL isCloudConnected; // ivar: _isCloudConnected
@property (nonatomic) BOOL isConnected; // ivar: _isConnected
@property (nonatomic) BOOL isNearby; // ivar: _isNearby
@property (nonatomic) BOOL isPreferringBtClassic; // ivar: _isPreferringBtClassic
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat timeSinceLastNearbyChangeInSeconds; // ivar: _timeSinceLastNearbyChangeInSeconds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)connectedBtDevicesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addConnectedBtDevices:(id)arg0 ;
-(void)clearConnectedBtDevices;
-(void)deleteConnectedBtDevices;
-(void)deleteHasDevice;
-(void)deleteIsCloudConnected;
-(void)deleteIsConnected;
-(void)deleteIsNearby;
-(void)deleteIsPreferringBtClassic;
-(void)deleteTimeSinceLastNearbyChangeInSeconds;
-(void)writeTo:(id)arg0 ;


@end


#endif