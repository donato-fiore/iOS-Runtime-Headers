// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDSPROTOUSERAUTH_H
#define PDSPROTOUSERAUTH_H

@class PBCodable;
@protocol NSCopying;


#import "PDSProtoGSTokenAuth.h"

@interface PDSProtoUserAuth : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) PDSProtoGSTokenAuth *gsAuthToken; // ivar: _gsAuthToken
@property (readonly, nonatomic) BOOL hasGsAuthToken;
@property (nonatomic) BOOL hasUserauthOneof;
@property (nonatomic) int userauthOneof; // ivar: _userauthOneof


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)userauthOneofAsString:(int)arg0 ;
-(int)StringAsUserauthOneof:(id)arg0 ;
-(void)clearOneofValuesForUserauthOneof;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif