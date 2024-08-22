// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROUTETRAFFICBUILDER_H
#define GEOROUTETRAFFICBUILDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface GEORouteTrafficBuilder : NSObject {
    NSMutableArray *_trafficColors;
    NSMutableArray *_trafficOffsets;
    CGFloat _trafficDistance;
}




-(id)init;
-(id)trafficColors;
-(id)trafficOffsets;
-(void)_buildTrafficForOldRoute:(id)arg0 etaRoute:(id)arg1 ;
-(void)_buildTrafficForRoute:(id)arg0 etaRoute:(id)arg1 ;
-(void)_buildTrafficForRoute:(id)arg0 toDistance:(CGFloat)arg1 ;
-(void)_buildTrafficForRouteWithGeoRoute:(id)arg0 toDistance:(CGFloat)arg1 ;
-(void)_removeDuplicateTraffic;
-(void)addTrafficFromETARoute:(id)arg0 ;
-(void)addTrafficFromRoute:(id)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2 ;
-(void)addTrafficFromRoute:(id)arg0 withStepRange:(struct _NSRange )arg1 ;
-(void)buildTrafficForRoute:(id)arg0 ;
-(void)buildTrafficForRoute:(id)arg0 etaRoute:(id)arg1 ;
-(void)copyTrafficToRoute:(id)arg0 ;


@end


#endif