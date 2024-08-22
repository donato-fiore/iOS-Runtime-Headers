// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSPROTORAPIDPAYLOADREPLY_H
#define DRSPROTORAPIDPAYLOADREPLY_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface DRSProtoRapidPayloadReply : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *failureReason; // ivar: _failureReason
@property (readonly, nonatomic) BOOL hasFailureReason;
@property (readonly, nonatomic) BOOL hasReplyPayload;
@property (nonatomic) BOOL hasSuccess;
@property (retain, nonatomic) NSData *replyPayload; // ivar: _replyPayload
@property (nonatomic) BOOL success; // ivar: _success


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