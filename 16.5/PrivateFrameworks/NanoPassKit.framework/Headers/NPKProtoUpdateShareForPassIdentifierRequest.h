// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOUPDATESHAREFORPASSIDENTIFIERREQUEST_H
#define NPKPROTOUPDATESHAREFORPASSIDENTIFIERREQUEST_H

@class PBRequest, NSData, NSString;
@protocol NSCopying;



@interface NPKProtoUpdateShareForPassIdentifierRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *authorization; // ivar: _authorization
@property (readonly, nonatomic) BOOL hasAuthorization;
@property (retain, nonatomic) NSString *passIdentifier; // ivar: _passIdentifier
@property (retain, nonatomic) NSData *shareData; // ivar: _shareData


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