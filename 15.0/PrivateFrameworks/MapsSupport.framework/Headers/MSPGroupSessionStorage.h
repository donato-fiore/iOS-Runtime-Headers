// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPGROUPSESSIONSTORAGE_H
#define MSPGROUPSESSIONSTORAGE_H

@class PBCodable, PBUnknownFields, NSString, NSMutableArray, GEOSharedNavState;
@protocol NSCopying;



@interface MSPGroupSessionStorage : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (retain, nonatomic) NSString *fromID; // ivar: _fromID
@property (retain, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly, nonatomic) BOOL hasFromID;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (nonatomic) BOOL hasLastUpdateTimestamp;
@property (readonly, nonatomic) BOOL hasOriginatorIdentifier;
@property (readonly, nonatomic) BOOL hasReceivingAccountIdentifier;
@property (readonly, nonatomic) BOOL hasReceivingHandle;
@property (readonly, nonatomic) BOOL hasState;
@property (nonatomic) CGFloat lastUpdateTimestamp; // ivar: _lastUpdateTimestamp
@property (retain, nonatomic) NSMutableArray *liveStrategyIdentifiers; // ivar: _liveStrategyIdentifiers
@property (retain, nonatomic) NSMutableArray *messageStrategyIdentifiers; // ivar: _messageStrategyIdentifiers
@property (retain, nonatomic) NSMutableArray *minimalStrategyIdentifiers; // ivar: _minimalStrategyIdentifiers
@property (retain, nonatomic) NSString *originatorIdentifier; // ivar: _originatorIdentifier
@property (retain, nonatomic) NSString *receivingAccountIdentifier; // ivar: _receivingAccountIdentifier
@property (retain, nonatomic) NSString *receivingHandle; // ivar: _receivingHandle
@property (retain, nonatomic) GEOSharedNavState *state; // ivar: _state
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(Class)liveStrategyIdentifierType;
+(Class)messageStrategyIdentifierType;
+(Class)minimalStrategyIdentifierType;
+(id)groupStorageWithIdentifier:(id)arg0 originator:(id)arg1 receivingHandle:(id)arg2 receivingAccountIdentifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)liveStrategyIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)messageStrategyIdentifierAtIndex:(NSUInteger)arg0 ;
-(id)minimalStrategyIdentifierAtIndex:(NSUInteger)arg0 ;
-(void)addLiveStrategyIdentifier:(id)arg0 ;
-(void)addMessageStrategyIdentifier:(id)arg0 ;
-(void)addMinimalStrategyIdentifier:(id)arg0 ;
-(void)clearLiveStrategyIdentifiers;
-(void)clearMessageStrategyIdentifiers;
-(void)clearMinimalStrategyIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)updateWithState:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif