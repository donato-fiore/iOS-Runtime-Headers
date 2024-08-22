// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSPROTOBATCHREGISTERRESP_H
#define PDSPROTOBATCHREGISTERRESP_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface PDSProtoBatchRegisterResp : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMessage;
@property (nonatomic) BOOL hasResponseTtl;
@property (nonatomic) BOOL hasRetryInterval;
@property (nonatomic) BOOL hasServerTimestamp;
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) NSInteger responseTtl; // ivar: _responseTtl
@property (nonatomic) NSInteger retryInterval; // ivar: _retryInterval
@property (nonatomic) NSInteger serverTimestamp; // ivar: _serverTimestamp
@property (nonatomic) int status; // ivar: _status
@property (retain, nonatomic) NSMutableArray *userPushTokenRegResponses; // ivar: _userPushTokenRegResponses


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)userPushTokenRegResponsesAtIndex:(NSUInteger)arg0 ;
-(void)addUserPushTokenRegResponses:(id)arg0 ;
-(void)clearUserPushTokenRegResponses;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif