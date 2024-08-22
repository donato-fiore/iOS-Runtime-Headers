// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAWITHYOUDETECTOR_H
#define SAWITHYOUDETECTOR_H

@class NSHashTable, NSMutableDictionary, NSDate, NSUUID, NSMutableSet;
@protocol SAWithYouDetectorServiceProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol, SAAnalyticsServiceProtocol, SABluetoothScanRequestProtocol, SATimeServiceProtocol, SALocationRequestProtocol;

#import <Foundation/Foundation.h>

#import "SADeviceRecord.h"

@interface SAWithYouDetector : NSObject <SAWithYouDetectorServiceProtocol, SATimeClientProtocol, SATravelTypeClassifierClientProtocol>



@property (retain, nonatomic) NSObject<SAAnalyticsServiceProtocol> *analytics; // ivar: _analytics
@property (weak, nonatomic) NSObject<SABluetoothScanRequestProtocol> *bluetoothScanner; // ivar: _bluetoothScanner
@property (retain, nonatomic) NSHashTable *clients; // ivar: _clients
@property (retain, nonatomic) NSObject<SATimeServiceProtocol> *clock; // ivar: _clock
@property (retain, nonatomic) SADeviceRecord *deviceRecord; // ivar: _deviceRecord
@property (nonatomic) NSUInteger extraFoundHELECount; // ivar: _extraFoundHELECount
@property (nonatomic) NSUInteger extraFoundNonHELECount; // ivar: _extraFoundNonHELECount
@property (retain, nonatomic) NSMutableDictionary *foundDevicesDuringCurrentScan; // ivar: _foundDevicesDuringCurrentScan
@property (retain, nonatomic) NSDate *initializationTime; // ivar: _initializationTime
@property (nonatomic) BOOL isFindingRelevantDevices; // ivar: _isFindingRelevantDevices
@property (nonatomic) BOOL isInVehicularTravel; // ivar: _isInVehicularTravel
@property (nonatomic) BOOL isNotifyWhileTravelingEnabled; // ivar: _isNotifyWhileTravelingEnabled
@property (nonatomic) BOOL isPeriodicScansNeeded; // ivar: _isPeriodicScansNeeded
@property (retain, nonatomic) NSDate *lastEndOfScan; // ivar: _lastEndOfScan
@property (retain, nonatomic) NSDate *lastExtraHELEFoundTime; // ivar: _lastExtraHELEFoundTime
@property (retain, nonatomic) NSDate *lastExtraNonHELEFoundTime; // ivar: _lastExtraNonHELEFoundTime
@property (nonatomic) NSUInteger lastLongScanContext; // ivar: _lastLongScanContext
@property (retain, nonatomic) NSDate *lastLongScanRequest; // ivar: _lastLongScanRequest
@property (retain, nonatomic) NSDate *lastRelevantDeviceFoundTime; // ivar: _lastRelevantDeviceFoundTime
@property (retain, nonatomic) NSDate *lastStartOfScan; // ivar: _lastStartOfScan
@property (weak, nonatomic) NSObject<SALocationRequestProtocol> *locationRequester; // ivar: _locationRequester
@property (nonatomic) BOOL longScanIsOngoing; // ivar: _longScanIsOngoing
@property (retain, nonatomic) NSDate *nextOpportunisticScanDate; // ivar: _nextOpportunisticScanDate
@property (retain, nonatomic) NSUUID *nextScheduledAlarm; // ivar: _nextScheduledAlarm
@property (retain, nonatomic) NSDate *previousBufferEmptyTime; // ivar: _previousBufferEmptyTime
@property (retain, nonatomic) NSMutableSet *relevantDevicesToFindDuringLongScan; // ivar: _relevantDevicesToFindDuringLongScan
@property (nonatomic) BOOL requestedShortScan; // ivar: _requestedShortScan


+(id)convertSAWithYouLongScanContextToString:(NSUInteger)arg0 ;
+(id)convertSAWithYouStatusToString:(NSUInteger)arg0 ;
-(BOOL)_deviceIsWatch:(id)arg0 ;
-(BOOL)_enoughTimeHasPassedSinceInitializationToMarkNotWithYouForDeviceType:(id)arg0 ;
-(BOOL)_isOnlyMonitoringLeashOnlyDevices;
-(BOOL)_isRecentEnoughAdvertisement:(id)arg0 forCurrentDate:(id)arg1 ;
-(BOOL)_isStatusBitSetForRelatedDeviceWithShiftIndex:(NSUInteger)arg0 fromAdvertisement:(id)arg1 ;
-(BOOL)_isValidPartID:(NSInteger)arg0 ;
-(BOOL)allRelevantDevicesToFindAreFound;
-(BOOL)allSAEnabledDevicesAreFound;
-(BOOL)isExtraDeviceFound:(id)arg0 onDate:(id)arg1 ;
-(BOOL)isPeriodicScansAllowed;
-(CGFloat)_maxAgeOfWithYouAdvertisementForDeviceType:(NSUInteger)arg0 forMonitoringState:(NSUInteger)arg1 ;
-(NSUInteger)_finalizeToBeVerifiedStatus:(NSUInteger)arg0 ;
-(NSUInteger)statusForDeviceWithUUID:(id)arg0 ;
-(id)initWithBluetoothScanner:(id)arg0 locationRequester:(id)arg1 deviceRecord:(id)arg2 clock:(id)arg3 analytics:(id)arg4 ;
-(void)_deviceWithUUID:(id)arg0 isWithYouDuringLongScanOnAdvertisement:(id)arg1 ;
-(void)_notifyAllClientsOfWithYouStatusUpdate:(NSUInteger)arg0 forDeviceWithUUID:(id)arg1 ;
-(void)_scheduleNextAlarmForScanAfterDate:(id)arg0 ;
-(void)_updateAllWithYouStatusOnScanEndedEvent:(id)arg0 ;
-(void)_updateWithYouStatusIfNecessaryOnAdvertisement:(id)arg0 ;
-(void)_updateWithYouStatusIfNecessaryOnConnectionEvent:(id)arg0 ;
-(void)_updateWithYouStatusOfRelatedDevices:(id)arg0 ;
-(void)_updateWithYouStatusOnAdvBufferEmptyEvent:(id)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)alarmFiredForUUID:(id)arg0 ;
-(void)didChangeTravelTypeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 hints:(NSUInteger)arg2 ;
-(void)forceUpdateWithYouStatus;
-(void)forceUpdateWithYouStatusToFindDevices:(id)arg0 withContext:(NSUInteger)arg1 ;
-(void)forceUpdateWithYouStatusWithShortScan:(BOOL)arg0 ;
-(void)ingestTAEvent:(id)arg0 ;
-(void)pausePeriodicScan;
-(void)removeClient:(id)arg0 ;
-(void)requestScanIfNeeded;
-(void)resetAllWithYouStatusAndScanStates;
-(void)resumePeriodicScan;
-(void)sendScanContextToCoreAnalytics:(NSUInteger)arg0 isPartOfLongScan:(BOOL)arg1 scanDuration:(CGFloat)arg2 relevantOnlyScanDuration:(CGFloat)arg3 foundExtraHELECount:(NSUInteger)arg4 extraHELEScanDuration:(CGFloat)arg5 foundExtraNonHELECount:(NSUInteger)arg6 extraNonHELEScanDuration:(CGFloat)arg7 longScanContext:(NSUInteger)arg8 ;
-(void)updateExtraDeviceInformation:(id)arg0 ;


@end


#endif