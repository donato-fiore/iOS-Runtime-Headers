// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPROTOBUFPAYMENTCLIENTUPDATE_H
#define PKPROTOBUFPAYMENTCLIENTUPDATE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "PKProtobufAutomaticReloadPaymentRequest.h"
#import "PKProtobufShippingMethods.h"
#import "PKProtobufDeferredPaymentRequest.h"
#import "PKProtobufRecurringPaymentRequest.h"

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) PKProtobufAutomaticReloadPaymentRequest *automaticReloadPaymentRequest; // ivar: _automaticReloadPaymentRequest
@property (retain, nonatomic) PKProtobufShippingMethods *availableShippingMethods; // ivar: _availableShippingMethods
@property (retain, nonatomic) PKProtobufDeferredPaymentRequest *deferredPaymentRequest; // ivar: _deferredPaymentRequest
@property (readonly, nonatomic) BOOL hasAutomaticReloadPaymentRequest;
@property (readonly, nonatomic) BOOL hasAvailableShippingMethods;
@property (readonly, nonatomic) BOOL hasDeferredPaymentRequest;
@property (readonly, nonatomic) BOOL hasRecurringPaymentRequest;
@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (readonly, nonatomic) BOOL hasSelectedAID;
@property (nonatomic) BOOL hasSelectedPaymentType;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) NSMutableArray *multiTokenContexts; // ivar: _multiTokenContexts
@property (retain, nonatomic) NSMutableArray *paymentSummaryItems; // ivar: _paymentSummaryItems
@property (retain, nonatomic) PKProtobufRecurringPaymentRequest *recurringPaymentRequest; // ivar: _recurringPaymentRequest
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier; // ivar: _remotePaymentRequestIdentifier
@property (retain, nonatomic) NSString *selectedAID; // ivar: _selectedAID
@property (nonatomic) unsigned int selectedPaymentType; // ivar: _selectedPaymentType
@property (retain, nonatomic) NSMutableArray *shippingMethods; // ivar: _shippingMethods
@property (nonatomic) unsigned int status; // ivar: _status


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)multiTokenContextsAtIndex:(NSUInteger)arg0 ;
-(id)paymentSummaryItemsAtIndex:(NSUInteger)arg0 ;
-(id)shippingMethodsAtIndex:(NSUInteger)arg0 ;
-(void)addMultiTokenContexts:(id)arg0 ;
-(void)addPaymentSummaryItems:(id)arg0 ;
-(void)addShippingMethods:(id)arg0 ;
-(void)clearMultiTokenContexts;
-(void)clearPaymentSummaryItems;
-(void)clearShippingMethods;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif