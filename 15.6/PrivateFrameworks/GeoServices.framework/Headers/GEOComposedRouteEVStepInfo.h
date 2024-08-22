// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDROUTEEVSTEPINFO_H
#define GEOCOMPOSEDROUTEEVSTEPINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOComposedRouteEVStepInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned int remainingBatteryCharge; // ivar: _remainingBatteryCharge
@property (readonly, nonatomic) unsigned int remainingBatteryPercentage; // ivar: _remainingBatteryPercentage


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEVStateInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif