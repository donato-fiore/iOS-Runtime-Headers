// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NMRSENDCOMMANDRESULTMESSAGEPROTOBUF_H
#define _NMRSENDCOMMANDRESULTMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _NMRSendCommandResultMessageProtobuf : PBCodable <NSCopying>

 {
    ? _handlerReturnStatus;
    ? _has;
}


@property (nonatomic) unsigned int errorCode; // ivar: _errorCode
@property (readonly, nonatomic) *unsigned int handlerReturnStatus;
@property (readonly, nonatomic) NSUInteger handlerReturnStatusCount;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)handlerReturnStatusAtIndex:(NSUInteger)arg0 ;
-(void)addHandlerReturnStatus:(unsigned int)arg0 ;
-(void)clearHandlerReturnStatus;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif