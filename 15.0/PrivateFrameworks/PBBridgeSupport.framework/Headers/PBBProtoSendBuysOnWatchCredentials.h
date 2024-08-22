// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBBPROTOSENDBUYSONWATCHCREDENTIALS_H
#define PBBPROTOSENDBUYSONWATCHCREDENTIALS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PBBProtoSendBuysOnWatchCredentials : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPassword;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSString *username; // ivar: _username


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