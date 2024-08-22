// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOCOMPOSEDETAROUTELEG_H
#define _GEOCOMPOSEDETAROUTELEG_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOComposedRouteEVChargingStationInfo.h"

@interface _GEOComposedETARouteLeg : NSObject <NSSecureCoding>



@property (retain, nonatomic) GEOComposedRouteEVChargingStationInfo *chargingStationInfo; // ivar: _chargingStationInfo
@property (nonatomic) NSUInteger originalLegIndex; // ivar: _originalLegIndex
@property (retain, nonatomic) NSArray *steps; // ivar: _steps
@property (readonly, nonatomic) CGFloat travelDuration;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)descriptionWithPrecision:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif