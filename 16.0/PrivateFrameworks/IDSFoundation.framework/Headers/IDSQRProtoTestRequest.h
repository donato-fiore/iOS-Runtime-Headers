// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQRPROTOTESTREQUEST_H
#define IDSQRPROTOTESTREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface IDSQRProtoTestRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasRequestedErrorCode;
@property (nonatomic) BOOL hasRequestedMessageType;
@property (readonly, nonatomic) BOOL hasSubOperation;
@property (nonatomic) unsigned int requestedErrorCode; // ivar: _requestedErrorCode
@property (nonatomic) unsigned int requestedMessageType; // ivar: _requestedMessageType
@property (retain, nonatomic) NSString *subOperation; // ivar: _subOperation
@property (nonatomic) unsigned int testOptionFlags; // ivar: _testOptionFlags


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