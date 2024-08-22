// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPROTOBUFPAYMENTCLIENTUPDATE_H
#define PKPROTOBUFPAYMENTCLIENTUPDATE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "PKProtobufPaymentTokenConfiguration.h"

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (readonly, nonatomic) BOOL hasSelectedAID;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasTokenConfiguration;
@property (retain, nonatomic) NSMutableArray *paymentSummaryItems; // ivar: _paymentSummaryItems
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier; // ivar: _remotePaymentRequestIdentifier
@property (retain, nonatomic) NSString *selectedAID; // ivar: _selectedAID
@property (retain, nonatomic) NSMutableArray *shippingMethods; // ivar: _shippingMethods
@property (nonatomic) unsigned int status; // ivar: _status
@property (retain, nonatomic) PKProtobufPaymentTokenConfiguration *tokenConfiguration; // ivar: _tokenConfiguration


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)paymentSummaryItemsAtIndex:(NSUInteger)arg0 ;
-(id)shippingMethodsAtIndex:(NSUInteger)arg0 ;
-(void)addPaymentSummaryItems:(id)arg0 ;
-(void)addShippingMethods:(id)arg0 ;
-(void)clearPaymentSummaryItems;
-(void)clearShippingMethods;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif