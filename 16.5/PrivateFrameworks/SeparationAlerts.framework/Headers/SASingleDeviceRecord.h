// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASINGLEDEVICERECORD_H
#define SASINGLEDEVICERECORD_H

@class NSDate, TALocationLite, TASPAdvertisement, NSUUID, NSMutableArray;
@protocol NSSecureCoding, SAAnalyticsServiceProtocol, SATimeServiceProtocol;

#import <Foundation/Foundation.h>

#import "SADevice.h"

@interface SASingleDeviceRecord : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<SAAnalyticsServiceProtocol> *analytics; // ivar: _analytics
@property (retain, nonatomic) NSObject<SATimeServiceProtocol> *clock; // ivar: _clock
@property (nonatomic) NSInteger connectionState; // ivar: _connectionState
@property (nonatomic) NSUInteger currentMonitoringSessionState; // ivar: _currentMonitoringSessionState
@property (readonly, nonatomic) NSUInteger currentScenarioClass; // ivar: _currentScenarioClass
@property (readonly, nonatomic) NSDate *currentScenarioTime; // ivar: _currentScenarioTime
@property (retain, nonatomic) SADevice *device; // ivar: _device
@property (readonly, nonatomic) NSDate *firstAdvertisementAfterScenarioTransition; // ivar: _firstAdvertisementAfterScenarioTransition
@property (nonatomic) BOOL hasSurfacedNotification; // ivar: _hasSurfacedNotification
@property (readonly) BOOL isConnected;
@property (readonly, nonatomic) NSDate *lastCompanionDisconnectionDate; // ivar: _lastCompanionDisconnectionDate
@property (readonly, nonatomic) NSDate *lastWithYouDate; // ivar: _lastWithYouDate
@property (copy, nonatomic) TALocationLite *lastWithYouLocation; // ivar: _lastWithYouLocation
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement; // ivar: _latestAdvertisement
@property (readonly, nonatomic) TASPAdvertisement *latestNOAdvertisement; // ivar: _latestNOAdvertisement
@property (readonly, nonatomic) TASPAdvertisement *latestWildAdvertisement; // ivar: _latestWildAdvertisement
@property (readonly, nonatomic) NSUInteger monitoringSessionStateAtTimeOfFirstAdv; // ivar: _monitoringSessionStateAtTimeOfFirstAdv
@property (nonatomic) NSUInteger notificationState; // ivar: _notificationState
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (retain, nonatomic) NSMutableArray *uuidsOfRelatedDevices; // ivar: _uuidsOfRelatedDevices
@property (nonatomic) NSUInteger withYouStatus; // ivar: _withYouStatus


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConnectionEvent:(id)arg0 clock:(id)arg1 analytics:(id)arg2 ;
-(id)initWithDevice:(id)arg0 clock:(id)arg1 analytics:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertRelatedDevice:(id)arg0 ;
-(void)publishAnalyticsForFirstAdv:(id)arg0 scenario:(NSUInteger)arg1 ;
-(void)resetRelatedDevices;
-(void)updateCurrentScenarioClass:(NSUInteger)arg0 ;
-(void)updateFirstAdvertisementAfterScenarioTransition:(id)arg0 ;
-(void)updateLastCompanionDisconnectionDate:(id)arg0 ;
-(void)updateLastWithYouDate:(id)arg0 ;
-(void)updateLatestAdvertisement:(id)arg0 ;
-(void)updateWithYouStatus:(NSUInteger)arg0 ;


@end


#endif