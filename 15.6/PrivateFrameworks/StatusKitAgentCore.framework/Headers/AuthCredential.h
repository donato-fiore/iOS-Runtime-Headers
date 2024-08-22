// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUTHCREDENTIAL_H
#define AUTHCREDENTIAL_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AuthCredential : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int authCredentialOneof; // ivar: _authCredentialOneof
@property (nonatomic) BOOL hasAuthCredentialOneof;
@property (readonly, nonatomic) BOOL hasSimpleJwt;
@property (retain, nonatomic) NSString *simpleJwt; // ivar: _simpleJwt


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)authCredentialOneofAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAuthCredentialOneof:(id)arg0 ;
-(void)clearOneofValuesForAuthCredentialOneof;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif