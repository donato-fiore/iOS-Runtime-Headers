// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWAWDNWACTIVITY_H
#define NWAWDNWACTIVITY_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NWAWDNWDeviceReport.h"
#import "NWAWDNWL2Report.h"

@interface NWAWDNWActivity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger activityDomain; // ivar: _activityDomain
@property (nonatomic) NSUInteger activityLabel; // ivar: _activityLabel
@property (retain, nonatomic) NSString *activityUUID; // ivar: _activityUUID
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NWAWDNWDeviceReport *deviceReport; // ivar: _deviceReport
@property (nonatomic) BOOL hasActivityDomain;
@property (nonatomic) BOOL hasActivityLabel;
@property (readonly, nonatomic) BOOL hasActivityUUID;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (readonly, nonatomic) BOOL hasDeviceReport;
@property (nonatomic) BOOL hasInvestigationID;
@property (nonatomic) BOOL hasIsRetry;
@property (readonly, nonatomic) BOOL hasL2Report;
@property (readonly, nonatomic) BOOL hasParentActivityUUID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger investigationID; // ivar: _investigationID
@property (nonatomic) BOOL isRetry; // ivar: _isRetry
@property (retain, nonatomic) NWAWDNWL2Report *l2Report; // ivar: _l2Report
@property (retain, nonatomic) NSString *parentActivityUUID; // ivar: _parentActivityUUID
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif