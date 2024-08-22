// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHANNELACTIVITYACTIVATIONRESPONSE_H
#define CHANNELACTIVITYACTIVATIONRESPONSE_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface ChannelActivityActivationResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int activationExpirySeconds; // ivar: _activationExpirySeconds
@property (nonatomic) BOOL hasActivationExpirySeconds;
@property (nonatomic) BOOL hasResponseMessageIndex;
@property (nonatomic) BOOL hasServerTimestampSeconds;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTotalResponseMessages;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *participantPayloads; // ivar: _participantPayloads
@property (nonatomic) unsigned int responseMessageIndex; // ivar: _responseMessageIndex
@property (nonatomic) NSUInteger serverTimestampSeconds; // ivar: _serverTimestampSeconds
@property (nonatomic) int status; // ivar: _status
@property (nonatomic) unsigned int totalResponseMessages; // ivar: _totalResponseMessages
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid
@property (nonatomic) NSUInteger version; // ivar: _version


+(Class)participantPayloadType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)participantPayloadAtIndex:(NSUInteger)arg0 ;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)addParticipantPayload:(id)arg0 ;
-(void)clearParticipantPayloads;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif