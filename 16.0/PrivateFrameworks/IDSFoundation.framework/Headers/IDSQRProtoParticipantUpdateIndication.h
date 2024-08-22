// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOPARTICIPANTUPDATEINDICATION_H
#define IDSQRPROTOPARTICIPANTUPDATEINDICATION_H

@class PBCodable;
@protocol NSCopying;



@interface IDSQRProtoParticipantUpdateIndication : PBCodable <NSCopying>

 {
    ? _participantIdLists;
    ? _has;
}


@property (nonatomic) BOOL hasOperationFlags;
@property (nonatomic) BOOL hasSessionStateCounter;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned int operationFlags; // ivar: _operationFlags
@property (readonly, nonatomic) *NSUInteger participantIdLists;
@property (readonly, nonatomic) NSUInteger participantIdListsCount;
@property (nonatomic) unsigned int sessionStateCounter; // ivar: _sessionStateCounter
@property (nonatomic) NSUInteger txnId; // ivar: _txnId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)participantIdListAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addParticipantIdList:(NSUInteger)arg0 ;
-(void)clearParticipantIdLists;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif