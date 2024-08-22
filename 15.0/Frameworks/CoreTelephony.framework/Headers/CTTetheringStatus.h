// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTTETHERINGSTATUS_H
#define CTTETHERINGSTATUS_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTDataConnectionAvailabilityStatus.h"
#import "CTDataConnectionStatus.h"
#import "CTXPCServiceSubscriptionContext.h"

@interface CTTetheringStatus : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *activationFailure; // ivar: _activationFailure
@property (retain, nonatomic) NSNumber *asserted; // ivar: _asserted
@property (retain, nonatomic) NSNumber *carrierEnabled; // ivar: _carrierEnabled
@property (retain, nonatomic) CTDataConnectionAvailabilityStatus *connectionAvailabilityStatus; // ivar: _connectionAvailabilityStatus
@property (retain, nonatomic) CTDataConnectionStatus *connectionStatus; // ivar: _connectionStatus
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context; // ivar: _context
@property (retain, nonatomic) NSNumber *misPdpMaxHosts; // ivar: _misPdpMaxHosts
@property (retain, nonatomic) NSNumber *userAuthenticated; // ivar: _userAuthenticated


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif