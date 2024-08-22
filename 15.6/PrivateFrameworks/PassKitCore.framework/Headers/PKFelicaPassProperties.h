// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKFELICAPASSPROPERTIES_H
#define PKFELICAPASSPROPERTIES_H

@class NSString, NSDateComponents, NSNumber;
@protocol NSCopying, NSSecureCoding;


#import "PKTransitPassProperties.h"

@interface PKFelicaPassProperties : PKTransitPassProperties <NSCopying, NSSecureCoding>



@property (nonatomic, getter=isBalanceAllowedForCommute) BOOL balanceAllowedForCommute; // ivar: _balanceAllowedForCommute
@property (copy, nonatomic) NSString *greenCarDestinationStation; // ivar: _greenCarDestinationStation
@property (copy, nonatomic) NSString *greenCarOriginStation; // ivar: _greenCarOriginStation
@property (nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed; // ivar: _greenCarTicketUsed
@property (copy, nonatomic) NSDateComponents *greenCarValidityStartDate; // ivar: _greenCarValidityStartDate
@property (nonatomic) BOOL hasGreenCarTicket; // ivar: _hasGreenCarTicket
@property (nonatomic) BOOL hasShinkansenTicket; // ivar: _hasShinkansenTicket
@property (nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation; // ivar: _inShinkansenStation
@property (nonatomic, getter=isLowBalanceGateNotificationEnabled) BOOL lowBalanceGateNotificationEnabled; // ivar: _lowBalanceGateNotificationEnabled
@property (copy, nonatomic) NSDateComponents *shinkansenArrivalTime; // ivar: _shinkansenArrivalTime
@property (copy, nonatomic) NSNumber *shinkansenCarNumber; // ivar: _shinkansenCarNumber
@property (copy, nonatomic) NSDateComponents *shinkansenDepartureTime; // ivar: _shinkansenDepartureTime
@property (copy, nonatomic) NSString *shinkansenDestinationStation; // ivar: _shinkansenDestinationStation
@property (copy, nonatomic) NSString *shinkansenOriginStation; // ivar: _shinkansenOriginStation
@property (copy, nonatomic) NSNumber *shinkansenSeatNumber; // ivar: _shinkansenSeatNumber
@property (copy, nonatomic) NSNumber *shinkansenSeatRow; // ivar: _shinkansenSeatRow
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryArrivalTime; // ivar: _shinkansenSecondaryArrivalTime
@property (copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber; // ivar: _shinkansenSecondaryCarNumber
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryDepartureTime; // ivar: _shinkansenSecondaryDepartureTime
@property (copy, nonatomic) NSString *shinkansenSecondaryDestinationStation; // ivar: _shinkansenSecondaryDestinationStation
@property (copy, nonatomic) NSString *shinkansenSecondaryOriginStation; // ivar: _shinkansenSecondaryOriginStation
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber; // ivar: _shinkansenSecondarySeatNumber
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatRow; // ivar: _shinkansenSecondarySeatRow
@property (copy, nonatomic) NSString *shinkansenSecondaryTrainName; // ivar: _shinkansenSecondaryTrainName
@property (nonatomic, getter=isShinkansenTicketActive) BOOL shinkansenTicketActive; // ivar: _shinkansenTicketActive
@property (copy, nonatomic) NSString *shinkansenTrainName; // ivar: _shinkansenTrainName
@property (copy, nonatomic) NSDateComponents *shinkansenValidityStartDate; // ivar: _shinkansenValidityStartDate
@property (copy, nonatomic) NSNumber *shinkansenValidityTerm; // ivar: _shinkansenValidityTerm


+(BOOL)supportsSecureCoding;
+(Class)equalityClass;
+(id)passPropertiesForPass:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInStation;
-(NSUInteger)hash;
-(id)_stringForRow:(id)arg0 seat:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayableShinkansenSeat;
-(id)displayableShinkansenSecondarySeat;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFelicaAppletState:(id)arg0 paymentApplication:(id)arg1 ;
-(id)initWithTransitAppletState:(id)arg0 paymentApplication:(id)arg1 fieldCollection:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif