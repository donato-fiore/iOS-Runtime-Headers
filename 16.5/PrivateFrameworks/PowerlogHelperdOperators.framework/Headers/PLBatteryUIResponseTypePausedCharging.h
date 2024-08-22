// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBATTERYUIRESPONSETYPEPAUSEDCHARGING_H
#define PLBATTERYUIRESPONSETYPEPAUSEDCHARGING_H

@class NSString, PowerUISmartChargeClient, NSDate, NSNumber, PLEntry, NSMutableDictionary, PLCoreStorage;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypePausedCharging : NSObject <PLBatteryUIResponseProtocol>



@property (retain) NSString *chargingStateIntervalsEntryKey; // ivar: _chargingStateIntervalsEntryKey
@property (retain) PowerUISmartChargeClient *cleanEnergyChargingClient; // ivar: _cleanEnergyChargingClient
@property (retain) NSDate *cleanEnergyChargingDeadline; // ivar: _cleanEnergyChargingDeadline
@property (retain) NSNumber *currentChargeLevel; // ivar: _currentChargeLevel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *end; // ivar: _end
@property BOOL externalConnected; // ivar: _externalConnected
@property (readonly) NSUInteger hash;
@property int intervalStateCEC; // ivar: _intervalStateCEC
@property int intervalStateSmartCharging; // ivar: _intervalStateSmartCharging
@property int intervalStateTLC; // ivar: _intervalStateTLC
@property BOOL isCharging; // ivar: _isCharging
@property (retain) PLEntry *lastCameraStreamingEntry; // ivar: _lastCameraStreamingEntry
@property (retain) PLEntry *lastConnectedEntry; // ivar: _lastConnectedEntry
@property (retain) PLEntry *lastEntry; // ivar: _lastEntry
@property (retain) PLEntry *lastSmartChargingEntry; // ivar: _lastSmartChargingEntry
@property (retain) PLEntry *lastTLCWithCameraStreamingEntry; // ivar: _lastTLCWithCameraStreamingEntry
@property int pausedChargingState; // ivar: _pausedChargingState
@property _PLTimeIntervalRange range; // ivar: _range
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSMutableDictionary *resultDictionary; // ivar: _resultDictionary
@property (retain) PowerUISmartChargeClient *smartChargingClient; // ivar: _smartChargingClient
@property (retain) NSDate *smartChargingDeadline; // ivar: _smartChargingDeadline
@property (retain) NSDate *start; // ivar: _start
@property (retain) PLCoreStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property BOOL wasCameraStreaming; // ivar: _wasCameraStreaming
@property BOOL wasTLCWithCameraStreaming; // ivar: _wasTLCWithCameraStreaming


-(id)result;
-(int)configureState:(id)arg0 ;
-(int)getState:(short)arg0 ;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)configureCameraStreaming;
-(void)configureTLCWithCameraStreaming;
-(void)getCameraStreamingState;
-(void)getChargingData;
-(void)getTLCWithCameraStreamingState;
-(void)run;
-(void)setChargingPausedStates;
-(void)setCurrentlyChargingStates;
-(void)setTerminatedChargingStates;


@end


#endif