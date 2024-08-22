// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWITHYOUDETECTOR_H
#define SAWITHYOUDETECTOR_H

@class NSHashTable, NSDate, NSUUID;
@protocol SAWithYouDetectorServiceProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol, SABluetoothScanRequestProtocol, SATimeServiceProtocol, SALocationRequestProtocol;

#import <Foundation/Foundation.h>

#import "SADeviceRecord.h"

@interface SAWithYouDetector : NSObject <SAWithYouDetectorServiceProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol>



@property (weak, nonatomic) NSObject<SABluetoothScanRequestProtocol> *bluetoothScanner; // ivar: _bluetoothScanner
@property (retain, nonatomic) NSHashTable *clients; // ivar: _clients
@property (retain, nonatomic) NSObject<SATimeServiceProtocol> *clock; // ivar: _clock
@property (retain, nonatomic) SADeviceRecord *deviceRecord; // ivar: _deviceRecord
@property (retain, nonatomic) NSDate *initializationTime; // ivar: _initializationTime
@property (nonatomic) BOOL isInVehicularTravel; // ivar: _isInVehicularTravel
@property (nonatomic) BOOL isNotifyWhileTravelingEnabled; // ivar: _isNotifyWhileTravelingEnabled
@property (nonatomic) BOOL isPeriodicScansNeeded; // ivar: _isPeriodicScansNeeded
@property (retain, nonatomic) NSDate *lastEndOfScan; // ivar: _lastEndOfScan
@property (retain, nonatomic) NSDate *lastStartOfScan; // ivar: _lastStartOfScan
@property (weak, nonatomic) NSObject<SALocationRequestProtocol> *locationRequester; // ivar: _locationRequester
@property (retain, nonatomic) NSDate *nextOpportunisticScanDate; // ivar: _nextOpportunisticScanDate
@property (retain, nonatomic) NSUUID *nextScheduledAlarm; // ivar: _nextScheduledAlarm
@property (retain, nonatomic) NSDate *previousBufferEmptyTime; // ivar: _previousBufferEmptyTime
@property (nonatomic) BOOL requestedScan; // ivar: _requestedScan
@property (nonatomic) BOOL requestedShortScan; // ivar: _requestedShortScan


+(id)convertSAWithYouStatusToString:(NSUInteger)arg0 ;
-(BOOL)_deviceIsWatch:(id)arg0 ;
-(BOOL)_enoughTimeHasPassedSinceInitializationToMarkNotWithYouForDeviceType:(NSUInteger)arg0 ;
-(BOOL)_isOnlyMonitoringLeashOnlyDevices;
-(BOOL)_isRecentEnoughAdvertisement:(id)arg0 forCurrentDate:(id)arg1 ;
-(BOOL)_isStatusBitSetForRelatedDeviceWithShiftIndex:(NSUInteger)arg0 fromAdvertisement:(id)arg1 ;
-(BOOL)_isValidPartID:(NSInteger)arg0 ;
-(BOOL)isPeriodicScansAllowed;
-(CGFloat)_maxAgeOfWithYouAdvertisementForDeviceType:(NSUInteger)arg0 ;
-(NSUInteger)_finalizeToBeVerifiedStatus:(NSUInteger)arg0 ;
-(NSUInteger)statusForDeviceWithUUID:(id)arg0 ;
-(id)initWithBluetoothScanner:(id)arg0 locationRequester:(id)arg1 deviceRecord:(id)arg2 clock:(id)arg3 ;
-(void)_notifyAllClientsOfWithYouStatusUpdate:(NSUInteger)arg0 forDeviceWithUUID:(id)arg1 ;
-(void)_scheduleNextAlarmForScanAfterDate:(id)arg0 ;
-(void)_updateAllWithYouStatusOnScanEndedEvent:(id)arg0 ;
-(void)_updateWithYouStatusIfNecessaryOnAdvertisement:(id)arg0 ;
-(void)_updateWithYouStatusIfNecessaryOnConnectionEvent:(id)arg0 ;
-(void)_updateWithYouStatusOfRelatedDevices:(id)arg0 ;
-(void)_updateWithYouStatusOnAdvBufferEmptyEvent:(id)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)alarmFiredForUUID:(id)arg0 ;
-(void)didChangeTravelTypeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)forceUpdateWithYouStatus;
-(void)forceUpdateWithYouStatusWithShortScan;
-(void)ingestTAEvent:(id)arg0 ;
-(void)pausePeriodicScan;
-(void)removeClient:(id)arg0 ;
-(void)requestScanIfNeeded;
-(void)resetAllWithYouStatusAndScanStates;
-(void)resumePeriodicScan;


@end


#endif