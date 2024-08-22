// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAPOWERLOG_H
#define SAPOWERLOG_H

@class NSHashTable, NSMutableSet, NSDate;
@protocol SAPowerLogServiceProtocol;

#import <Foundation/Foundation.h>


@interface SAPowerLog : NSObject <SAPowerLogServiceProtocol>



@property (nonatomic) NSUInteger btScanCount; // ivar: _btScanCount
@property (retain, nonatomic) NSHashTable *clients; // ivar: _clients
@property (nonatomic) NSUInteger geofenceCount; // ivar: _geofenceCount
@property (nonatomic) NSUInteger gpsLocationRequestCount; // ivar: _gpsLocationRequestCount
@property (retain, nonatomic) NSMutableSet *monitoredDevices; // ivar: _monitoredDevices
@property (nonatomic) NSUInteger separationAlertsCount; // ivar: _separationAlertsCount
@property (retain, nonatomic) NSDate *startTimestamp; // ivar: _startTimestamp
@property (nonatomic) CGFloat totalVisitDuration; // ivar: _totalVisitDuration
@property (nonatomic) NSUInteger visitCount; // ivar: _visitCount
@property (nonatomic) NSUInteger wifiLocationRequestCount; // ivar: _wifiLocationRequestCount


-(id)init;
-(void)addClient:(id)arg0 ;
-(void)addMonitoredDevice:(id)arg0 ;
-(void)increaseBTScanCount;
-(void)increaseGeofenceCount;
-(void)increaseGpsLocationRequestCount;
-(void)increaseSeparationAlertsCount:(NSUInteger)arg0 ;
-(void)increaseWifiLocationRequestCount;
-(void)ingestTAEvent:(id)arg0 ;
-(void)removeClient:(id)arg0 ;
-(void)resetStatistics;
-(void)sendPowerLog;


@end


#endif