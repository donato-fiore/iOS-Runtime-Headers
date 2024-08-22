// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROUTEHYPOTHESISINCIDENT_H
#define GEOROUTEHYPOTHESISINCIDENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEORouteHypothesisIncident : NSObject <NSSecureCoding>



@property (readonly, nonatomic) int routeIncidentSignificance; // ivar: _routeIncidentSignificance
@property (readonly, nonatomic) int routeIncidentType; // ivar: _routeIncidentType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIncidentType:(int)arg0 incidentSignificance:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif