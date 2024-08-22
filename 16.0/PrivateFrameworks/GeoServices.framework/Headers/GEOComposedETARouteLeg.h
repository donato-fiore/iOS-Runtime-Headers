// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDETAROUTELEG_H
#define GEOCOMPOSEDETAROUTELEG_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOComposedRouteEVChargingStationInfo.h"

@interface GEOComposedETARouteLeg : NSObject <NSSecureCoding>



@property (retain, nonatomic) GEOComposedRouteEVChargingStationInfo *chargingStationInfo; // ivar: _chargingStationInfo
@property (nonatomic) CGFloat length; // ivar: _length
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