// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HALOGENWRAPPER_H
#define HALOGENWRAPPER_H

@class NSCondition, NSData;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "HalogenMeasurement.h"

@interface HalogenWrapper : NSObject

@property (nonatomic) BOOL accessoryConnectedWhileWet; // ivar: _accessoryConnectedWhileWet
@property (nonatomic) BOOL attachDelayTimerRunning; // ivar: _attachDelayTimerRunning
@property (nonatomic) NSCondition *cond; // ivar: _cond
@property (nonatomic) NSUInteger connectedAccessoryDigitalID; // ivar: _connectedAccessoryDigitalID
@property (nonatomic) int connectedAccessoryOrientation; // ivar: _connectedAccessoryOrientation
@property (nonatomic) NSData *connectedAccessoryPDigitalID; // ivar: _connectedAccessoryPDigitalID
@property (nonatomic) BOOL didConfidentNotify; // ivar: _didConfidentNotify
@property (nonatomic) BOOL didHighConfidentNotify; // ivar: _didHighConfidentNotify
@property (nonatomic) BOOL didNotify; // ivar: _didNotify
@property (nonatomic) BOOL didWetDuration; // ivar: _didWetDuration
@property (nonatomic) BOOL didWetTooLong; // ivar: _didWetTooLong
@property (nonatomic) NSUInteger dryCnt; // ivar: _dryCnt
@property (nonatomic) NSUInteger dryPollingIntervalNs; // ivar: _dryPollingIntervalNs
@property (nonatomic) NSUInteger eventBasedDigitalID; // ivar: _eventBasedDigitalID
@property (nonatomic) int eventBasedOrientation; // ivar: _eventBasedOrientation
@property (nonatomic) NSData *eventBasedPDigitalID; // ivar: _eventBasedPDigitalID
@property (nonatomic) NSUInteger firstDryTimestamp; // ivar: _firstDryTimestamp
@property (nonatomic) HalogenMeasurement *halogenMeasurement; // ivar: _halogenMeasurement
@property (nonatomic) NSObject<OS_dispatch_queue> *halogenMeasurementDispatchQueue; // ivar: _halogenMeasurementDispatchQueue
@property (nonatomic) NSObject<OS_dispatch_queue> *halogenTtrDispatchQueue; // ivar: _halogenTtrDispatchQueue
@property (nonatomic) BOOL isBlacklistedAccessoryConnected; // ivar: _isBlacklistedAccessoryConnected
@property (nonatomic) BOOL isDebugAccessoryConnected; // ivar: _isDebugAccessoryConnected
@property (nonatomic) BOOL isHeadsetConnected; // ivar: _isHeadsetConnected
@property (nonatomic) BOOL isMeasurementActive; // ivar: _isMeasurementActive
@property (nonatomic) BOOL isMeasurementEnabled; // ivar: _isMeasurementEnabled
@property (nonatomic) BOOL isPowerAssertionHeld; // ivar: _isPowerAssertionHeld
@property (nonatomic) BOOL isReceptacleEmpty; // ivar: _isReceptacleEmpty
@property (nonatomic) BOOL isTapToRadarPending; // ivar: _isTapToRadarPending
@property (nonatomic) BOOL isTimestampValid; // ivar: _isTimestampValid
@property (nonatomic) BOOL isWet; // ivar: _isWet
@property (nonatomic) BOOL justAttachedCase; // ivar: _justAttachedCase
@property (nonatomic) BOOL justDetached; // ivar: _justDetached
@property (nonatomic) NSUInteger ldcmArbiterRetryNs; // ivar: _ldcmArbiterRetryNs
@property (nonatomic) NSUInteger ldcmStartMeasurementsDelayNs; // ivar: _ldcmStartMeasurementsDelayNs
@property (nonatomic) NSUInteger ldcmStartMeasurementsRetryNs; // ivar: _ldcmStartMeasurementsRetryNs
@property (nonatomic) NSUInteger minDryReadings; // ivar: _minDryReadings
@property (nonatomic) int pinID; // ivar: _pinID
@property (nonatomic) int portID; // ivar: _portID
@property (nonatomic) unsigned int service; // ivar: _service
@property (nonatomic) unsigned int sleepAssertionID; // ivar: _sleepAssertionID
@property (nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (nonatomic) BOOL wasTapToRadarShown; // ivar: _wasTapToRadarShown
@property (nonatomic) NSUInteger wetAccessoryAttachTimestamp; // ivar: _wetAccessoryAttachTimestamp
@property (nonatomic) NSUInteger wetDryTransitionTimestamp; // ivar: _wetDryTransitionTimestamp
@property (nonatomic) NSUInteger wetPollingIntervalNs; // ivar: _wetPollingIntervalNs


-(id)init;
-(void)dealloc;


@end


#endif