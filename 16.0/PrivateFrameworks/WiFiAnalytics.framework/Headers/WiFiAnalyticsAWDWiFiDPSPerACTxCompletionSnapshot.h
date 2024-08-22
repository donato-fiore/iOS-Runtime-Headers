// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIANALYTICSAWDWIFIDPSPERACTXCOMPLETIONSNAPSHOT_H
#define WIFIANALYTICSAWDWIFIDPSPERACTXCOMPLETIONSNAPSHOT_H

@class PBCodable;
@protocol NSCopying;



@interface WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int chipModeError; // ivar: _chipModeError
@property (nonatomic) unsigned int dropped; // ivar: _dropped
@property (nonatomic) unsigned int expired; // ivar: _expired
@property (nonatomic) unsigned int firmwareFreePacket; // ivar: _firmwareFreePacket
@property (nonatomic) unsigned int forceLifetimeExp; // ivar: _forceLifetimeExp
@property (nonatomic) BOOL hasChipModeError;
@property (nonatomic) BOOL hasDropped;
@property (nonatomic) BOOL hasExpired;
@property (nonatomic) BOOL hasFirmwareFreePacket;
@property (nonatomic) BOOL hasForceLifetimeExp;
@property (nonatomic) BOOL hasMaxRetries;
@property (nonatomic) BOOL hasNoAck;
@property (nonatomic) BOOL hasNoBuf;
@property (nonatomic) BOOL hasNoResources;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL hasTxFailure;
@property (nonatomic) unsigned int maxRetries; // ivar: _maxRetries
@property (nonatomic) unsigned int noAck; // ivar: _noAck
@property (nonatomic) unsigned int noBuf; // ivar: _noBuf
@property (nonatomic) unsigned int noResources; // ivar: _noResources
@property (nonatomic) unsigned int success; // ivar: _success
@property (nonatomic) unsigned int txFailure; // ivar: _txFailure


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif