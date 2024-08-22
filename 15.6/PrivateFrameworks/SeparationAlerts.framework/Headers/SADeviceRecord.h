// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADEVICERECORD_H
#define SADEVICERECORD_H

@class NSMutableDictionary;
@protocol NSSecureCoding, SAWithYouDetectorClientProtocol;

#import <Foundation/Foundation.h>


@interface SADeviceRecord : NSObject <NSSecureCoding, SAWithYouDetectorClientProtocol>



@property (retain, nonatomic) NSMutableDictionary *deviceRecord; // ivar: _deviceRecord


+(BOOL)supportsSecureCoding;
-(BOOL)hasDisconnectedDevices;
-(BOOL)hasSurfacedNotificationFor:(id)arg0 ;
-(NSInteger)getConnectionState:(id)arg0 ;
-(NSUInteger)getDeviceNotificationState:(id)arg0 ;
-(NSUInteger)getMonitoringSessionState:(id)arg0 ;
-(NSUInteger)getScenarioClass:(id)arg0 ;
-(NSUInteger)getWithYouStatus:(id)arg0 ;
-(id)getAllUUIDs;
-(id)getLastWithYouDate:(id)arg0 ;
-(id)getLatestAdvertisement:(id)arg0 ;
-(id)getLatestNOAdvertisement:(id)arg0 ;
-(id)getLatestWildAdvertisement:(id)arg0 ;
-(id)getRelatedDevices:(id)arg0 ;
-(id)getSADevice:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_updateAllRelatedDevices;
-(void)_updateConnectionStateOnConnectionEvent:(id)arg0 ;
-(void)_updateDeviceRecordOnDeviceUpdateEvent:(id)arg0 ;
-(void)_updateLatestAdvertisement:(id)arg0 ;
-(void)_updateSingleDeviceRecordForDevice:(id)arg0 ;
-(void)didForceUpdateWithYouStatus;
-(void)encodeWithCoder:(id)arg0 ;
-(void)ingestTAEvent:(id)arg0 ;
-(void)resetAllWithYouStatus;
-(void)updateLastWithYouDate:(id)arg0 forDeviceWithUUID:(id)arg1 ;
-(void)updateLatestAdvertisement:(id)arg0 forDeviceWithUUID:(id)arg1 ;
-(void)updateMonitoringSessionState:(NSUInteger)arg0 forDeviceWithUUID:(id)arg1 ;
-(void)updateScenario:(NSUInteger)arg0 forDeviceWithUUID:(id)arg1 ;
-(void)updatedWithYouStatusFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 forDeviceWithUUID:(id)arg2 ;


@end


#endif