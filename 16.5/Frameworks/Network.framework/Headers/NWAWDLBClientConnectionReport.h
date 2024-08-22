// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWAWDLBCLIENTCONNECTIONREPORT_H
#define NWAWDLBCLIENTCONNECTIONREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLBClientConnectionReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger bytesReceived; // ivar: _bytesReceived
@property (nonatomic) NSInteger bytesSent; // ivar: _bytesSent
@property (nonatomic) NSInteger connectionDuration; // ivar: _connectionDuration
@property (nonatomic) int connectionJoiningFailure; // ivar: _connectionJoiningFailure
@property (nonatomic) int connectionJoiningLbConnectionMigration; // ivar: _connectionJoiningLbConnectionMigration
@property (nonatomic) int connectionJoiningLbConnectionState; // ivar: _connectionJoiningLbConnectionState
@property (nonatomic) NSUInteger connectionServiceId; // ivar: _connectionServiceId
@property (nonatomic) int dataPathResult; // ivar: _dataPathResult
@property (nonatomic) BOOL hasBytesReceived;
@property (nonatomic) BOOL hasBytesSent;
@property (nonatomic) BOOL hasConnectionDuration;
@property (nonatomic) BOOL hasConnectionJoiningFailure;
@property (nonatomic) BOOL hasConnectionJoiningLbConnectionMigration;
@property (nonatomic) BOOL hasConnectionJoiningLbConnectionState;
@property (nonatomic) BOOL hasConnectionServiceId;
@property (nonatomic) BOOL hasDataPathResult;
@property (nonatomic) BOOL hasTimeToConnectionFailure;
@property (nonatomic) BOOL hasTimeToFirstResponse;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSInteger timeToConnectionFailure; // ivar: _timeToConnectionFailure
@property (nonatomic) NSInteger timeToFirstResponse; // ivar: _timeToFirstResponse
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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