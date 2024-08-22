// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPRIVACYPROXYTOKENACTIVATIONQUERY_H
#define NSPPRIVACYPROXYTOKENACTIVATIONQUERY_H

@class PBCodable;
@protocol NSCopying;


#import "NSPPrivacyProxyBAAValidation.h"
#import "NSPPrivacyProxyTokenInfo.h"

@interface NSPPrivacyProxyTokenActivationQuery : PBCodable <NSCopying>



@property (nonatomic) int authType; // ivar: _authType
@property (retain, nonatomic) NSPPrivacyProxyBAAValidation *baaParameters; // ivar: _baaParameters
@property (readonly, nonatomic) BOOL hasBaaParameters;
@property (retain, nonatomic) NSPPrivacyProxyTokenInfo *tokenInfo; // ivar: _tokenInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)authTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsAuthType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif