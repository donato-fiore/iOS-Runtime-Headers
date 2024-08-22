// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDROUTETRAFFICINCIDENTINFO_H
#define GEOCOMPOSEDROUTETRAFFICINCIDENTINFO_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEORouteIncident.h"

@interface GEOComposedRouteTrafficIncidentInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) GEORouteIncident *incident; // ivar: _incident
@property (nonatomic) CGFloat offsetMeters; // ivar: _offsetMeters
@property (nonatomic) ? routeCoordinate; // ivar: _routeCoordinate


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif