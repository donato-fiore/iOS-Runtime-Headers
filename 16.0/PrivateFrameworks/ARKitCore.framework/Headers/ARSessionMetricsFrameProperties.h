// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARSESSIONMETRICSFRAMEPROPERTIES_H
#define ARSESSIONMETRICSFRAMEPROPERTIES_H

@class NSArray, CLLocation;

#import <Foundation/Foundation.h>

#import "ARCamera.h"
#import "ARGeoTrackingStatus.h"
#import "ARVLStateData.h"
#import "ARWorldTrackingState.h"

@interface ARSessionMetricsFrameProperties : NSObject

@property (readonly, nonatomic) NSArray *anchors; // ivar: _anchors
@property (readonly, nonatomic) ARCamera *camera; // ivar: _camera
@property (readonly, nonatomic) ARGeoTrackingStatus *geoTrackingStatus; // ivar: _geoTrackingStatus
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) ARVLStateData *vlState; // ivar: _vlState
@property (readonly, nonatomic) ARWorldTrackingState *worldTrackingState; // ivar: _worldTrackingState


-(id)initWithFrame:(id)arg0 ;


@end


#endif