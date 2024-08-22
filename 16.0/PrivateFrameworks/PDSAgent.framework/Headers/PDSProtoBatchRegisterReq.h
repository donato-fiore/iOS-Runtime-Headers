// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSPROTOBATCHREGISTERREQ_H
#define PDSPROTOBATCHREGISTERREQ_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface PDSProtoBatchRegisterReq : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasRequestTtl;
@property (nonatomic) NSInteger requestTtl; // ivar: _requestTtl
@property (retain, nonatomic) NSMutableArray *userPushTokenRegRequests; // ivar: _userPushTokenRegRequests


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)userPushTokenRegRequestsAtIndex:(NSUInteger)arg0 ;
-(void)addUserPushTokenRegRequests:(id)arg0 ;
-(void)clearUserPushTokenRegRequests;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif