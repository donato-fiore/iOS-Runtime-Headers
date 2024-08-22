// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPRECORDRESOLVETOKENREQUEST_H
#define CKDPRECORDRESOLVETOKENREQUEST_H

@class PBRequest, NSString, NSMutableArray, NSData;
@protocol NSCopying;



@interface CKDPRecordResolveTokenRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL forceFetch; // ivar: _forceFetch
@property (nonatomic) BOOL hasForceFetch;
@property (readonly, nonatomic) BOOL hasParticipantId;
@property (readonly, nonatomic) BOOL hasRoutingKey;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (nonatomic) BOOL hasShouldFetchRootRecord;
@property (retain, nonatomic) NSString *participantId; // ivar: _participantId
@property (retain, nonatomic) NSMutableArray *rootRecordDesiredKeys; // ivar: _rootRecordDesiredKeys
@property (retain, nonatomic) NSString *routingKey; // ivar: _routingKey
@property (retain, nonatomic) NSData *shortTokenHash; // ivar: _shortTokenHash
@property (nonatomic) BOOL shouldFetchRootRecord; // ivar: _shouldFetchRootRecord


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rootRecordDesiredKeysAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addRootRecordDesiredKeys:(id)arg0 ;
-(void)clearRootRecordDesiredKeys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif