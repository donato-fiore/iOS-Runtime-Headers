// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSITAPPLETHISTORYRECORD_H
#define PKTRANSITAPPLETHISTORYRECORD_H

@class NSDecimalNumber, NSArray, NSNumber, NSData, NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTransitAppletHistoryRecord : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _transitModifiers;
}


@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (copy, nonatomic) NSArray *amounts; // ivar: _amounts
@property (copy, nonatomic) NSDecimalNumber *balance; // ivar: _balance
@property (copy, nonatomic) NSNumber *cityCode; // ivar: _cityCode
@property (nonatomic) NSUInteger detail; // ivar: _detail
@property (copy, nonatomic) NSData *endStation; // ivar: _endStation
@property (copy, nonatomic) NSNumber *historySequenceNumber; // ivar: _historySequenceNumber
@property (copy, nonatomic) NSNumber *loyaltyAmount; // ivar: _loyaltyAmount
@property (copy, nonatomic) NSNumber *loyaltyBalance; // ivar: _loyaltyBalance
@property (readonly, nonatomic) NSInteger paymentTransactionType;
@property (readonly, nonatomic) NSInteger paymentTransactionType;
@property (copy, nonatomic) NSArray *plans; // ivar: _plans
@property (nonatomic) NSInteger recordType; // ivar: _recordType
@property (copy, nonatomic) NSData *startStation; // ivar: _startStation
@property (nonatomic) NSUInteger subtype; // ivar: _subtype
@property (copy, nonatomic) NSDate *time; // ivar: _time
@property (copy, nonatomic) NSString *transitDetail; // ivar: _transitDetail
@property (readonly, nonatomic) NSUInteger transitTransactionModifier;
@property (readonly, nonatomic) NSUInteger transitTransactionModifier;
@property (readonly, nonatomic) NSInteger transitTransactionSubtype;
@property (readonly, nonatomic) NSInteger transitTransactionSubtype;
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransitAppletHistoryRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)_transactionAmountsWithBalanceLabels:(id)arg0 unitDictionary:(id)arg1 ;
-(id)_transactionCommutePlanUnitsWithPlanLabels:(id)arg0 ;
-(id)concreteTransactionWithCurrency:(id)arg0 balanceLabels:(id)arg1 unitDictionary:(id)arg2 planLabels:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)felicaHistoryRecord;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)_setTransactionHistoryDetailsFromString:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif