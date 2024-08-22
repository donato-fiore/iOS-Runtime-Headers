// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSITAPPLETHISTORY_H
#define PKTRANSITAPPLETHISTORY_H

@class NSDecimalNumber, NSArray, NSString, NSSet, NSDate, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTransitAppletHistory : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDecimalNumber *balance; // ivar: _balance
@property (copy, nonatomic) NSArray *balances; // ivar: _balances
@property (nonatomic, getter=isBlacklisted) BOOL blacklisted; // ivar: _blacklisted
@property (readonly, copy, nonatomic) NSArray *commutePlans; // ivar: _commutePlans
@property (copy, nonatomic) NSString *currency; // ivar: _currency
@property (copy, nonatomic) NSSet *enrouteTransitTypes; // ivar: _enrouteTransitTypes
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSArray *historyRecords; // ivar: _historyRecords
@property (readonly, nonatomic, getter=isInStation) BOOL inStation;
@property (copy, nonatomic) NSArray *inStationDetails; // ivar: _inStationDetails
@property (copy, nonatomic) NSNumber *loyaltyBalance; // ivar: _loyaltyBalance
@property (copy, nonatomic) NSNumber *serverRefreshIdentifier; // ivar: _serverRefreshIdentifier
@property (copy, nonatomic) NSString *serviceProvider; // ivar: _serviceProvider
@property (nonatomic) NSInteger source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(id)felicaHistory;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 source:(NSInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sanitizeValuesWithState:(id)arg0 ;


@end


#endif