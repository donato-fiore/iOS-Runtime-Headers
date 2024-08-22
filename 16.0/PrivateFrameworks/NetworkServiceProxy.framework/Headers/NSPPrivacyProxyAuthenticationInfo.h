// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPPRIVACYPROXYAUTHENTICATIONINFO_H
#define NSPPRIVACYPROXYAUTHENTICATIONINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NSPPrivacyProxyAuthenticationInfo : PBCodable <NSCopying>

 {
    ? _accessTokenTypes;
    ? _has;
}


@property (readonly, nonatomic) *unsigned int accessTokenTypes;
@property (readonly, nonatomic) NSUInteger accessTokenTypesCount;
@property (retain, nonatomic) NSString *accessTokenURL; // ivar: _accessTokenURL
@property (nonatomic) int authType; // ivar: _authType
@property (retain, nonatomic) NSString *authURL; // ivar: _authURL
@property (readonly, nonatomic) BOOL hasAccessTokenURL;
@property (nonatomic) BOOL hasAuthType;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)authTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAuthType:(id)arg0 ;
-(unsigned int)accessTokenTypesAtIndex:(NSUInteger)arg0 ;
-(void)addAccessTokenTypes:(unsigned int)arg0 ;
-(void)clearAccessTokenTypes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif