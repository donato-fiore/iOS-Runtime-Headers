// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASINGLEDEVICERECORD_H
#define SASINGLEDEVICERECORD_H

@class NSDate, TASPAdvertisement, NSUUID, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SADevice.h"

@interface SASingleDeviceRecord : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger connectionState; // ivar: _connectionState
@property (nonatomic) NSUInteger currentMonitoringSessionState; // ivar: _currentMonitoringSessionState
@property (readonly, nonatomic) NSUInteger currentScenarioClass; // ivar: _currentScenarioClass
@property (readonly, nonatomic) NSDate *currentScenarioTime; // ivar: _currentScenarioTime
@property (retain, nonatomic) SADevice *device; // ivar: _device
@property (readonly, nonatomic) NSDate *firstAdvertisementAfterScenarioTransition; // ivar: _firstAdvertisementAfterScenarioTransition
@property (nonatomic) BOOL hasSurfacedNotification; // ivar: _hasSurfacedNotification
@property (readonly) BOOL isConnected;
@property (readonly, nonatomic) NSDate *lastWithYouDate; // ivar: _lastWithYouDate
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
-(id)initWithConnectionEvent:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertRelatedDevice:(id)arg0 ;
-(void)publishAnalyticsForFirstAdv:(id)arg0 scenario:(NSUInteger)arg1 ;
-(void)resetRelatedDevices;
-(void)updateCurrentScenarioClass:(NSUInteger)arg0 ;
-(void)updateFirstAdvertisementAfterScenarioTransition:(id)arg0 ;
-(void)updateLastWithYouDate:(id)arg0 ;
-(void)updateLatestAdvertisement:(id)arg0 ;
-(void)updateWithYouStatus:(NSUInteger)arg0 ;


@end


#endif