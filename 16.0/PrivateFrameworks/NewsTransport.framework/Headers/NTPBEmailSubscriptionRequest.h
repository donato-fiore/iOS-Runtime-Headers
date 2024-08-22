// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBEMAILSUBSCRIPTIONREQUEST_H
#define NTPBEMAILSUBSCRIPTIONREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger dsId; // ivar: _dsId
@property (nonatomic) BOOL hasDsId;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) NSString *userStorefrontId; // ivar: _userStorefrontId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif