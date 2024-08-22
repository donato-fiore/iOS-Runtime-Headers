// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDROUTEEVCHARGINGSTATIONINFO_H
#define GEOCOMPOSEDROUTEEVCHARGINGSTATIONINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOComposedRouteEVChargingStationInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat batteryChargeAfterCharging; // ivar: _batteryChargeAfterCharging
@property (readonly, nonatomic) CGFloat batteryPercentageAfterCharging; // ivar: _batteryPercentageAfterCharging
@property (readonly, nonatomic) CGFloat chargingTime; // ivar: _chargingTime
@property (readonly, nonatomic) NSUInteger muid; // ivar: _muid
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoEVChargingInfo:(id)arg0 muid:(NSUInteger)arg1 name:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif