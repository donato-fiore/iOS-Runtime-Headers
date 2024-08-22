// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOMPOSEDROUTEMUTABLEDATA_H
#define GEOCOMPOSEDROUTEMUTABLEDATA_H

@class NSMutableDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOComposedRouteTraffic.h"

@interface GEOComposedRouteMutableData : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_stepsIDToEVInfos;
    NSMutableDictionary *_legIndexToChargingStationInfos;
}


@property (retain, nonatomic) GEOComposedRouteTraffic *traffic; // ivar: _traffic
@property (retain, nonatomic) NSArray *trafficDelayInfos; // ivar: _trafficDelayInfos
@property (retain, nonatomic) NSArray *updateableCameraInfos; // ivar: _updateableCameraInfos


+(BOOL)supportsSecureCoding;
-(id)chargingStationInfoForLegIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)evInfoForStepID:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateForRoute:(id)arg0 ;
-(void)updateForRoute:(id)arg0 etaRoute:(id)arg1 ;


@end


#endif