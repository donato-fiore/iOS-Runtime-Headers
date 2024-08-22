// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQRPROTOINFORESPONSE_H
#define IDSQRPROTOINFORESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface IDSQRProtoInfoResponse : PBCodable <NSCopying>

 {
    ? _activeLightweightParticipants;
    ? _activeParticipants;
    ? _activeVirtualParticipants;
}


@property (readonly, nonatomic) *NSUInteger activeLightweightParticipants;
@property (readonly, nonatomic) NSUInteger activeLightweightParticipantsCount;
@property (readonly, nonatomic) *NSUInteger activeParticipants;
@property (readonly, nonatomic) NSUInteger activeParticipantsCount;
@property (readonly, nonatomic) *NSUInteger activeVirtualParticipants;
@property (readonly, nonatomic) NSUInteger activeVirtualParticipantsCount;
@property (retain, nonatomic) NSString *clientAddress; // ivar: _clientAddress
@property (readonly, nonatomic) BOOL hasClientAddress;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)activeLightweightParticipantsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)activeParticipantsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)activeVirtualParticipantsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addActiveLightweightParticipants:(NSUInteger)arg0 ;
-(void)addActiveParticipants:(NSUInteger)arg0 ;
-(void)addActiveVirtualParticipants:(NSUInteger)arg0 ;
-(void)clearActiveLightweightParticipants;
-(void)clearActiveParticipants;
-(void)clearActiveVirtualParticipants;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif