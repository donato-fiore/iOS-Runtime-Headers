// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef C2MPMETRIC_H
#define C2MPMETRIC_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "C2MPCloudKitInfo.h"
#import "C2MPDeviceInfo.h"
#import "C2MPGenericEvent.h"
#import "C2MPNetworkEvent.h"
#import "C2MPServerInfo.h"

@interface C2MPMetric : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) C2MPCloudKitInfo *cloudkitInfo; // ivar: _cloudkitInfo
@property (retain, nonatomic) C2MPDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (retain, nonatomic) C2MPGenericEvent *genericEvent; // ivar: _genericEvent
@property (readonly, nonatomic) BOOL hasCloudkitInfo;
@property (readonly, nonatomic) BOOL hasDeviceInfo;
@property (readonly, nonatomic) BOOL hasGenericEvent;
@property (nonatomic) BOOL hasMetricType;
@property (readonly, nonatomic) BOOL hasNetworkEvent;
@property (nonatomic) BOOL hasReportFrequency;
@property (nonatomic) BOOL hasReportFrequencyBase;
@property (nonatomic) BOOL hasReportTransportAllowExpensiveAccess;
@property (nonatomic) BOOL hasReportTransportAllowPowerNapScheduling;
@property (readonly, nonatomic) BOOL hasReportTransportSourceApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL hasReportTransportSourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) BOOL hasServerInfo;
@property (nonatomic) BOOL hasTriggers;
@property (nonatomic) int metricType; // ivar: _metricType
@property (retain, nonatomic) C2MPNetworkEvent *networkEvent; // ivar: _networkEvent
@property (nonatomic) NSUInteger reportFrequency; // ivar: _reportFrequency
@property (nonatomic) NSUInteger reportFrequencyBase; // ivar: _reportFrequencyBase
@property (nonatomic) BOOL reportTransportAllowExpensiveAccess; // ivar: _reportTransportAllowExpensiveAccess
@property (nonatomic) BOOL reportTransportAllowPowerNapScheduling; // ivar: _reportTransportAllowPowerNapScheduling
@property (retain, nonatomic) NSString *reportTransportSourceApplicationBundleIdentifier; // ivar: _reportTransportSourceApplicationBundleIdentifier
@property (retain, nonatomic) NSString *reportTransportSourceApplicationSecondaryIdentifier; // ivar: _reportTransportSourceApplicationSecondaryIdentifier
@property (retain, nonatomic) C2MPServerInfo *serverInfo; // ivar: _serverInfo
@property (nonatomic) NSUInteger triggers; // ivar: _triggers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)metricTypeAsString:(int)arg0 ;
-(int)StringAsMetricType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif