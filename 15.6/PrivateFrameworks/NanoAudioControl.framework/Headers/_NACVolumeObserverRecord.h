// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NACVOLUMEOBSERVERRECORD_H
#define _NACVOLUMEOBSERVERRECORD_H

@class MPAVRoutingController, MPVolumeController;
@protocol NACVolumeController;

#import <Foundation/Foundation.h>

#import "NACEventThrottler.h"

@interface _NACVolumeObserverRecord : NSObject

@property (nonatomic) float EUVolumeLimit; // ivar: _EUVolumeLimit
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (retain, nonatomic) NSObject<NACVolumeController> *nacVolumeController; // ivar: _nacVolumeController
@property (retain, nonatomic) MPAVRoutingController *routingController; // ivar: _routingController
@property (retain, nonatomic) NACEventThrottler *throttler; // ivar: _throttler
@property (nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable; // ivar: _volumeControlAvailable
@property (retain, nonatomic) MPVolumeController *volumeController; // ivar: _volumeController
@property (nonatomic, getter=isVolumeWarningEnabled) BOOL volumeWarningEnabled; // ivar: _volumeWarningEnabled
@property (nonatomic) NSInteger volumeWarningState; // ivar: _volumeWarningState




@end


#endif