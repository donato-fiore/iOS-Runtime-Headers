// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIANALYTICSAWDWIFIDPSREPORT_H
#define WIFIANALYTICSAWDWIFIDPSREPORT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWiFiDPSEpilogue.h"
#import "WiFiAnalyticsAWDWiFiDPSSnapshot.h"

@interface WiFiAnalyticsAWDWiFiDPSReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *dpsCounterSamples; // ivar: _dpsCounterSamples
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSEpilogue *dpsEpiloge; // ivar: _dpsEpiloge
@property (readonly, nonatomic) BOOL hasDpsEpiloge;
@property (readonly, nonatomic) BOOL hasSnapshot;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSMutableArray *probeResults; // ivar: _probeResults
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSSnapshot *snapshot; // ivar: _snapshot
@property (retain, nonatomic) NSMutableArray *stallNotifications; // ivar: _stallNotifications
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSMutableArray *usbEvents; // ivar: _usbEvents


+(Class)dpsCounterSampleType;
+(Class)probeResultType;
+(Class)stallNotificationType;
+(Class)usbEventType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dpsCounterSampleAtIndex:(NSUInteger)arg0 ;
-(id)probeResultAtIndex:(NSUInteger)arg0 ;
-(id)stallNotificationAtIndex:(NSUInteger)arg0 ;
-(id)usbEventAtIndex:(NSUInteger)arg0 ;
-(void)addDpsCounterSample:(id)arg0 ;
-(void)addProbeResult:(id)arg0 ;
-(void)addStallNotification:(id)arg0 ;
-(void)addUsbEvent:(id)arg0 ;
-(void)clearDpsCounterSamples;
-(void)clearProbeResults;
-(void)clearStallNotifications;
-(void)clearUsbEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif