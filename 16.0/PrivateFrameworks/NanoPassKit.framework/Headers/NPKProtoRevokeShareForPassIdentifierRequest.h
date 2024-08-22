// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOREVOKESHAREFORPASSIDENTIFIERREQUEST_H
#define NPKPROTOREVOKESHAREFORPASSIDENTIFIERREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoRevokeShareForPassIdentifierRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasShouldCascade;
@property (retain, nonatomic) NSString *passIdentifier; // ivar: _passIdentifier
@property (retain, nonatomic) NSData *shareData; // ivar: _shareData
@property (nonatomic) BOOL shouldCascade; // ivar: _shouldCascade


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