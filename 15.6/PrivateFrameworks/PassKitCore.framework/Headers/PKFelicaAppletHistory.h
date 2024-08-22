// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKFELICAAPPLETHISTORY_H
#define PKFELICAAPPLETHISTORY_H

@class NSSet, NSNumber, NSString;


#import "PKTransitAppletHistory.h"
#import "PKFelicaGreenCarTicket.h"
#import "PKFelicaShinkansenTicket.h"

@interface PKFelicaAppletHistory : PKTransitAppletHistory {
    NSSet *_existingKeys;
}


@property (readonly, copy, nonatomic) NSNumber *SPID; // ivar: _SPID
@property (readonly, nonatomic, getter=isBalanceAllowedForCommute) BOOL balanceAllowedForCommute; // ivar: _balanceAllowedForCommute
@property (readonly, nonatomic) PKFelicaGreenCarTicket *greenCarTicket; // ivar: _greenCarTicket
@property (readonly, nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed; // ivar: _greenCarTicketUsed
@property (readonly, nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation;
@property (readonly, nonatomic, getter=isLowBalanceNotificationEnabled) BOOL lowBalanceNotificationEnabled; // ivar: _lowBalanceNotificationEnabled
@property (readonly, copy, nonatomic) PKFelicaShinkansenTicket *shinkansenTicket; // ivar: _shinkansenTicket
@property (readonly, nonatomic, getter=isShinkansenTicketActive) BOOL shinkansenTicketActive; // ivar: _shinkansenTicketActive
@property (readonly, copy, nonatomic) NSString *transactionID; // ivar: _transactionID
@property (readonly, nonatomic) NSInteger transactionType; // ivar: _transactionType
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSInteger)appletTypeForDictionary:(id)arg0 ;
-(BOOL)isInStation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 source:(NSInteger)arg1 ;
-(void)_addEnrouteTransitType:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sanitizeValuesWithState:(id)arg0 ;


@end


#endif