// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTUNNELLOCATIONPROJECTOR_H
#define MNTUNNELLOCATIONPROJECTOR_H

@class NSTimer, NSDate;
@protocol MNTunnelLocationProjectorDelegate;

#import <Foundation/Foundation.h>

#import "MNLocation.h"

@interface MNTunnelLocationProjector : NSObject {
    NSTimer *_locationUpdateOverdueTimer;
    MNLocation *_lastLocation;
    NSDate *_lastLocationDate;
    CGFloat _locationOverdueTimeoutForTunnel;
    CGFloat _locationOverdueTimeoutForNotTunnel;
    CGFloat _locationOverdueTimeoutForUnknown;
}


@property (weak, nonatomic) NSObject<MNTunnelLocationProjectorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isProjecting; // ivar: _isProjecting


-(BOOL)_locationIsGoodEnoughToEndProjection:(id)arg0 ;
-(CGFloat)_approximateMaxSpeedForRoad:(id)arg0 ;
-(CGFloat)_locationOverdueTimeoutForLocation:(id)arg0 ;
-(id)_projectFromLocation:(id)arg0 timeInterval:(CGFloat)arg1 ;
-(id)init;
-(void)_locationUpdateOverdueTimerFired:(id)arg0 ;
-(void)_resetLocationUpdateOverdueWithTimeout:(CGFloat)arg0 ;
-(void)dealloc;
-(void)stop;
-(void)updateLocation:(id)arg0 ;


@end


#endif