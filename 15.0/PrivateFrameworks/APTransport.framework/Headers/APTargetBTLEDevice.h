// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APTARGETBTLEDEVICE_H
#define APTARGETBTLEDEVICE_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface APTargetBTLEDevice : NSObject

@property (retain, nonatomic) NSUUID *deviceID; // ivar: _deviceID
@property (nonatomic) BOOL isFirmwareTracked; // ivar: _isFirmwareTracked
@property (nonatomic) BOOL isSoloCapable; // ivar: _isSoloCapable
@property (nonatomic) NSUInteger lastBeaconTicks; // ivar: _lastBeaconTicks
@property (nonatomic) ? lastData; // ivar: _lastData
@property (nonatomic) int lastRSSI; // ivar: _lastRSSI
@property (nonatomic) BOOL requestedTracking; // ivar: _requestedTracking
@property (nonatomic) BOOL supportsMediaControlPort; // ivar: _supportsMediaControlPort


-(void)dealloc;


@end


#endif