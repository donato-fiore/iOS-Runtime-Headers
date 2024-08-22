// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSITAPPLETSTATE_H
#define PKTRANSITAPPLETSTATE_H

@class NSDecimalNumber, NSArray, NSString, NSDate, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKFelicaTransitAppletState.h"

@interface PKTransitAppletState : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL appletStateDirty; // ivar: _appletStateDirty
@property (copy, nonatomic) NSDecimalNumber *balance; // ivar: _balance
@property (copy, nonatomic) NSArray *balances; // ivar: _balances
@property (nonatomic, getter=isBlacklisted) BOOL blacklisted; // ivar: _blacklisted
@property (copy, nonatomic) NSString *currency; // ivar: _currency
@property (copy, nonatomic) NSArray *enrouteTransitTypes; // ivar: _enrouteTransitTypes
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) PKFelicaTransitAppletState *felicaState;
@property (copy, nonatomic) NSNumber *historySequenceNumber; // ivar: _historySequenceNumber
@property (readonly, nonatomic, getter=isInStation) BOOL inStation;
@property (copy, nonatomic) NSNumber *loyaltyBalance; // ivar: _loyaltyBalance
@property (nonatomic) BOOL needsStationProcessing; // ivar: _needsStationProcessing
@property (copy, nonatomic) NSNumber *serverRefreshIdentifier; // ivar: _serverRefreshIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)processUpdateWithAppletHistory:(id)arg0 concreteTransactions:(*id)arg1 ephemeralTransaction:(*id)arg2 ;
-(id)processUpdateWithAppletHistory:(id)arg0 concreteTransactions:(*id)arg1 ephemeralTransaction:(*id)arg2 mutatedBalances:(*id)arg3 ;
-(id)processUpdateWithAppletHistory:(id)arg0 concreteTransactions:(*id)arg1 ephemeralTransaction:(*id)arg2 mutatedBalances:(*id)arg3 balanceLabelDictionary:(id)arg4 ;
-(id)processUpdateWithAppletHistory:(id)arg0 concreteTransactions:(*id)arg1 ephemeralTransaction:(*id)arg2 mutatedBalances:(*id)arg3 balanceLabelDictionary:(id)arg4 unitDictionary:(id)arg5 ;
-(id)processUpdateWithAppletHistory:(id)arg0 concreteTransactions:(*id)arg1 ephemeralTransaction:(*id)arg2 mutatedBalances:(*id)arg3 balanceLabelDictionary:(id)arg4 unitDictionary:(id)arg5 planLabelDictionary:(id)arg6 ;
-(id)transitPassPropertiesWithPaymentApplication:(id)arg0 ;
-(id)transitPassPropertiesWithPaymentApplication:(id)arg0 fieldCollection:(id)arg1 ;
-(id)transitPassPropertiesWithPaymentApplication:(id)arg0 pass:(id)arg1 ;
-(id)updatedEnrouteTransitTypesFromExistingTypes:(id)arg0 newTypes:(id)arg1 ;
-(void)_resolveTransactionsFromState:(id)arg0 toState:(id)arg1 withHistoryRecords:(id)arg2 concreteTransactions:(*id)arg3 ephemeralTransaction:(*id)arg4 balanceLabels:(id)arg5 unitDictionary:(id)arg6 planLabels:(id)arg7 ;
-(void)addEnrouteTransitType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif