// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQRPROTOINFOREQUEST_H
#define IDSQRPROTOINFOREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;



@interface IDSQRProtoInfoRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSData *accessToken; // ivar: _accessToken
@property (readonly, nonatomic) BOOL hasAccessToken;
@property (nonatomic) unsigned int infoFlags; // ivar: _infoFlags


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