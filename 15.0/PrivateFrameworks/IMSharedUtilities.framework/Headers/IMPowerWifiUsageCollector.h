// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMPOWERWIFIUSAGECOLLECTOR_H
#define IMPOWERWIFIUSAGECOLLECTOR_H

@class NSString;
@protocol CUTPowerMonitorDelegate, CUTWiFiManagerDelegate;

#import <Foundation/Foundation.h>


@interface IMPowerWifiUsageCollector : NSObject <CUTPowerMonitorDelegate, CUTWiFiManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldCollectInternalStats; // ivar: _shouldCollectInternalStats
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_isOnPower;
-(BOOL)_isWifiUsable;
-(BOOL)_shouldWriteDownPowerWifiChanges;
-(BOOL)connectedToPowerAndWifiForOver20Hours;
-(CGFloat)_getExternalTotalDuration;
-(id)_getExternalLastConnectedDate;
-(id)_getPowerAndWifiDictionaryForKey:(id)arg0 ;
-(id)createTodaysStatisticDictionaryIfNeeded;
-(id)init;
-(id)todaysKey;
-(void)_notePowerDidChangeForInternalCollection:(BOOL)arg0 isOnWifi:(BOOL)arg1 ;
-(void)_noteWifiLinkDidChangeForInternalCollection:(BOOL)arg0 isOnPower:(BOOL)arg1 ;
-(void)_setExternalLastConnectedDate:(id)arg0 ;
-(void)_setExternalTotalDuration:(id)arg0 ;
-(void)clearConnectedToPowerWifiOver20Hours;
-(void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg0 ;
-(void)cutWiFiManagerLinkDidChange:(id)arg0 context:(id)arg1 ;
-(void)dealloc;
-(void)disconnectFromResourceForTotalDurationKey:(id)arg0 dateKey:(id)arg1 powerWifiDict:(id)arg2 ;
-(void)disconnectedFromAResource_ExternalCollection;
-(void)reconnectToResourceForTotalDurationKey:(id)arg0 dateKey:(id)arg1 powerWifiDict:(id)arg2 ;
-(void)reconnectedToBothResources_ExternalCollection;
-(void)updateConnectedToPowerWifiIntervalIfConnected;


@end


#endif