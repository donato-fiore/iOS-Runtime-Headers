// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROTOBUFPAYMENTSUMMARYITEM_H
#define PKPROTOBUFPAYMENTSUMMARYITEM_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "PKProtobufAutomaticReloadPaymentSummaryItem.h"
#import "PKProtobufCustomPrecisionAmount.h"
#import "PKProtobufDeferredPaymentSummaryItem.h"
#import "PKProtobufRecurringPaymentSummaryItem.h"
#import "PKProtobufShippingMethod.h"

@interface PKProtobufPaymentSummaryItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger amount; // ivar: _amount
@property (retain, nonatomic) PKProtobufAutomaticReloadPaymentSummaryItem *automaticReloadPaymentSummaryItem; // ivar: _automaticReloadPaymentSummaryItem
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionAmount; // ivar: _customPrecisionAmount
@property (retain, nonatomic) PKProtobufDeferredPaymentSummaryItem *deferredPaymentSummaryItem; // ivar: _deferredPaymentSummaryItem
@property (nonatomic) BOOL hasAmount;
@property (readonly, nonatomic) BOOL hasAutomaticReloadPaymentSummaryItem;
@property (readonly, nonatomic) BOOL hasCustomPrecisionAmount;
@property (readonly, nonatomic) BOOL hasDeferredPaymentSummaryItem;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasRecurringPaymentSummaryItem;
@property (readonly, nonatomic) BOOL hasShippingMethodSummaryItem;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) PKProtobufRecurringPaymentSummaryItem *recurringPaymentSummaryItem; // ivar: _recurringPaymentSummaryItem
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethodSummaryItem; // ivar: _shippingMethodSummaryItem
@property (nonatomic) unsigned int type; // ivar: _type


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