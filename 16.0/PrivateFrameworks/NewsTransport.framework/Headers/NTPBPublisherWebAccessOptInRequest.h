// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPUBLISHERWEBACCESSOPTINREQUEST_H
#define NTPBPUBLISHERWEBACCESSOPTINREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NTPBPublisherWebAccessOptInRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *channelId; // ivar: _channelId
@property (retain, nonatomic) NSString *country; // ivar: _country
@property (retain, nonatomic) NSString *email; // ivar: _email
@property (readonly, nonatomic) BOOL hasChannelId;
@property (readonly, nonatomic) BOOL hasCountry;
@property (readonly, nonatomic) BOOL hasEmail;
@property (readonly, nonatomic) BOOL hasIapId;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasPurchaseReceipt;
@property (retain, nonatomic) NSString *iapId; // ivar: _iapId
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *purchaseReceipt; // ivar: _purchaseReceipt


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