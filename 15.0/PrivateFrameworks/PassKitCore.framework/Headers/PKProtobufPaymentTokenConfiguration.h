// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPROTOBUFPAYMENTTOKENCONFIGURATION_H
#define PKPROTOBUFPAYMENTTOKENCONFIGURATION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface PKProtobufPaymentTokenConfiguration : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMerchantTokenManagementURL;
@property (readonly, nonatomic) BOOL hasMerchantTokenNotificationURL;
@property (nonatomic) BOOL hasRequestMerchantToken;
@property (retain, nonatomic) NSString *merchantTokenManagementURL; // ivar: _merchantTokenManagementURL
@property (retain, nonatomic) NSString *merchantTokenNotificationURL; // ivar: _merchantTokenNotificationURL
@property (retain, nonatomic) NSMutableArray *multiTokenContexts; // ivar: _multiTokenContexts
@property (nonatomic) BOOL requestMerchantToken; // ivar: _requestMerchantToken


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)multiTokenContextsAtIndex:(NSUInteger)arg0 ;
-(void)addMultiTokenContexts:(id)arg0 ;
-(void)clearMultiTokenContexts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif