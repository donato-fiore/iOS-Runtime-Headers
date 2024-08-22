// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKFELICATRANSITAPPLETSTATE_H
#define PKFELICATRANSITAPPLETSTATE_H

@class NSData, NSString, NSNumber;
@protocol NSCopying;


#import "PKTransitAppletState.h"

@interface PKFelicaTransitAppletState : PKTransitAppletState <NSCopying>



@property (nonatomic, getter=isBalanceAllowedForCommute) BOOL balanceAllowedForCommute; // ivar: _balanceAllowedForCommute
@property (copy, nonatomic) NSData *greenCarDestinationStationCode; // ivar: _greenCarDestinationStationCode
@property (copy, nonatomic) NSString *greenCarDestinationStationString; // ivar: _greenCarDestinationStationString
@property (copy, nonatomic) NSData *greenCarOriginStationCode; // ivar: _greenCarOriginStationCode
@property (copy, nonatomic) NSString *greenCarOriginStationString; // ivar: _greenCarOriginStationString
@property (nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed; // ivar: _greenCarTicketUsed
@property (copy, nonatomic) NSNumber *greenCarValidityStartDate; // ivar: _greenCarValidityStartDate
@property (nonatomic) BOOL hasGreenCarTicket; // ivar: _hasGreenCarTicket
@property (nonatomic) BOOL hasShinkansenTicket; // ivar: _hasShinkansenTicket
@property (readonly, nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation;
@property (nonatomic, getter=isLowBalanceNotificationEnabled) BOOL lowBalanceNotificationEnabled; // ivar: _lowBalanceNotificationEnabled
@property (copy, nonatomic) NSNumber *shinkansenArrivalTime; // ivar: _shinkansenArrivalTime
@property (copy, nonatomic) NSNumber *shinkansenCarNumber; // ivar: _shinkansenCarNumber
@property (copy, nonatomic) NSNumber *shinkansenDepartureTime; // ivar: _shinkansenDepartureTime
@property (copy, nonatomic) NSData *shinkansenDestinationStationCode; // ivar: _shinkansenDestinationStationCode
@property (copy, nonatomic) NSString *shinkansenDestinationStationString; // ivar: _shinkansenDestinationStationString
@property (copy, nonatomic) NSData *shinkansenOriginStationCode; // ivar: _shinkansenOriginStationCode
@property (copy, nonatomic) NSString *shinkansenOriginStationString; // ivar: _shinkansenOriginStationString
@property (copy, nonatomic) NSNumber *shinkansenSeatNumber; // ivar: _shinkansenSeatNumber
@property (copy, nonatomic) NSNumber *shinkansenSeatRow; // ivar: _shinkansenSeatRow
@property (copy, nonatomic) NSNumber *shinkansenSecondaryArrivalTime; // ivar: _shinkansenSecondaryArrivalTime
@property (copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber; // ivar: _shinkansenSecondaryCarNumber
@property (copy, nonatomic) NSNumber *shinkansenSecondaryDepartureTime; // ivar: _shinkansenSecondaryDepartureTime
@property (copy, nonatomic) NSData *shinkansenSecondaryDestinationStationCode; // ivar: _shinkansenSecondaryDestinationStationCode
@property (copy, nonatomic) NSString *shinkansenSecondaryDestinationStationString; // ivar: _shinkansenSecondaryDestinationStationString
@property (copy, nonatomic) NSData *shinkansenSecondaryOriginStationCode; // ivar: _shinkansenSecondaryOriginStationCode
@property (copy, nonatomic) NSString *shinkansenSecondaryOriginStationString; // ivar: _shinkansenSecondaryOriginStationString
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber; // ivar: _shinkansenSecondarySeatNumber
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatRow; // ivar: _shinkansenSecondarySeatRow
@property (copy, nonatomic) NSString *shinkansenSecondaryTrainName; // ivar: _shinkansenSecondaryTrainName
@property (nonatomic, getter=isShinkansenTicketActive) BOOL shinkansenTicketActive; // ivar: _shinkansenTicketActive
@property (copy, nonatomic) NSString *shinkansenTrainName; // ivar: _shinkansenTrainName
@property (copy, nonatomic) NSNumber *shinkansenValidityStartDate; // ivar: _shinkansenValidityStartDate
@property (copy, nonatomic) NSNumber *shinkansenValidityTerm; // ivar: _shinkansenValidityTerm


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInStation;
-(NSUInteger)hash;
-(id)_concreteTransactionForRecordAtIndex:(NSUInteger)arg0 withBalance:(*unsigned int)arg1 historyRecords:(id)arg2 terminalState:(id)arg3 numberProcessed:(*NSUInteger)arg4 exitedShinkansen:(*BOOL)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)processUpdateWithAppletHistory:(id)arg0 concreteTransactions:(*id)arg1 ephemeralTransaction:(*id)arg2 ;
-(id)processUpdateWithAppletHistory:(id)arg0 concreteTransactions:(*id)arg1 ephemeralTransaction:(*id)arg2 mutatedBalances:(*id)arg3 balanceLabelDictionary:(id)arg4 unitDictionary:(id)arg5 ;
-(id)transitPassPropertiesWithPaymentApplication:(id)arg0 ;
-(id)transitPassPropertiesWithPaymentApplication:(id)arg0 fieldCollection:(id)arg1 ;
-(id)transitPassPropertiesWithPaymentApplication:(id)arg0 pass:(id)arg1 ;
-(void)_resolveTransactionsFromState:(id)arg0 toState:(id)arg1 withHistoryRecords:(id)arg2 concreteTransactions:(*id)arg3 ephemeralTransaction:(*id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif