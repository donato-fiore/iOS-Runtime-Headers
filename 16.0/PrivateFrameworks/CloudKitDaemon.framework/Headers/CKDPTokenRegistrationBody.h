// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPTOKENREGISTRATIONBODY_H
#define CKDPTOKENREGISTRATIONBODY_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface CKDPTokenRegistrationBody : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int apnsEnv; // ivar: _apnsEnv
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL hasApnsEnv;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (nonatomic) BOOL hasSkipBundleIDCheck;
@property (readonly, nonatomic) BOOL hasToken;
@property (nonatomic) BOOL skipBundleIDCheck; // ivar: _skipBundleIDCheck
@property (retain, nonatomic) NSData *token; // ivar: _token


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)apnsEnvAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsApnsEnv:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif