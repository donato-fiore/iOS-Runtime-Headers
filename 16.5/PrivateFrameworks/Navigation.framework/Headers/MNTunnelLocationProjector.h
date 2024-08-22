// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNTUNNELLOCATIONPROJECTOR_H
#define MNTUNNELLOCATIONPROJECTOR_H

@class NSArray, NSDate, NSTimer;
@protocol MNTunnelLocationProjectorDelegate;

#import <Foundation/Foundation.h>

#import "MNActiveRouteInfo.h"
#import "MNLocation.h"

@interface MNTunnelLocationProjector : NSObject {
    MNActiveRouteInfo *_currentRouteInfo;
    NSArray *_tunnelRanges;
    MNLocation *_lastUnprojectedLocation;
    NSDate *_lastUnprojectedLocationDate;
    NSTimer *_locationUpdateOverdueTimer;
    CGFloat _locationOverdueTimeoutForTunnel;
}


@property (weak, nonatomic) NSObject<MNTunnelLocationProjectorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isProjecting; // ivar: _isProjecting


-(id)_projectedLocationFrom:(id)arg0 timeInterval:(CGFloat)arg1 tunnelRange:(struct GEOPolylineCoordinateRange )arg2 ;
-(id)_tunnelRanges;
-(id)init;
-(struct ? )_projectedRouteCoordinateFrom:(struct ? )arg0 timeInterval:(CGFloat)arg1 tunnelRange:(struct GEOPolylineCoordinateRange )arg2 ;
-(struct GEOPolylineCoordinateRange )_tunnelRangeForRouteCoordinate:(struct ? )arg0 ;
-(void)_locationUpdateOverdueTimerFired:(id)arg0 ;
-(void)_resetTimerWithTimeout:(CGFloat)arg0 ;
-(void)dealloc;
-(void)stop;
-(void)updateForRouteInfo:(id)arg0 ;
-(void)updateLocation:(id)arg0 ;


@end


#endif