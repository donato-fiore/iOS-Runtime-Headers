// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTPBTRANSPORTDATA_H
#define BLTPBTRANSPORTDATA_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface BLTPBTransportData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsInitialSequenceNumber;
@property (readonly, nonatomic) BOOL hasMd5;
@property (nonatomic) BOOL hasSequenceNumber;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) BOOL hasSessionState;
@property (nonatomic) BOOL isInitialSequenceNumber; // ivar: _isInitialSequenceNumber
@property (retain, nonatomic) NSData *md5; // ivar: _md5
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (retain, nonatomic) NSData *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) unsigned int sessionState; // ivar: _sessionState


+(id)transportDataWithSequenceNumberManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)backwardsCompatibleSessionState;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sessionUUID;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif