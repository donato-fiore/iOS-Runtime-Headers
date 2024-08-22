// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALREQUESTID_H
#define SIRINLUEXTERNALREQUESTID_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUEXTERNALRequestID : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *connectionId; // ivar: _connectionId
@property (readonly, nonatomic) BOOL hasConnectionId;
@property (readonly, nonatomic) BOOL hasIdA;
@property (readonly, nonatomic) BOOL hasLoggableUserId;
@property (readonly, nonatomic) BOOL hasNluRequestId;
@property (nonatomic) BOOL hasRequester;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *idA; // ivar: _idA
@property (retain, nonatomic) NSString *loggableUserId; // ivar: _loggableUserId
@property (retain, nonatomic) SIRINLUEXTERNALUUID *nluRequestId; // ivar: _nluRequestId
@property (nonatomic) int requester; // ivar: _requester
@property (retain, nonatomic) NSString *userId; // ivar: _userId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)requesterAsString:(int)arg0 ;
-(int)StringAsRequester:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif