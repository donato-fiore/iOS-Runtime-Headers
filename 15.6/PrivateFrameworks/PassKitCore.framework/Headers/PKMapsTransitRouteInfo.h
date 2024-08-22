// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKMAPSTRANSITROUTEINFO_H
#define PKMAPSTRANSITROUTEINFO_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKMapsTransitRouteInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) PKCurrencyAmount *cost; // ivar: _cost
@property (readonly, nonatomic) NSSet *transitNetworkIdentifiers; // ivar: _transitNetworkIdentifiers


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransitNetworkIdentifiers:(id)arg0 cost:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif