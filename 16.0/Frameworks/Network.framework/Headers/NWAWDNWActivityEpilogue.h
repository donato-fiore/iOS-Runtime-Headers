// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWAWDNWACTIVITYEPILOGUE_H
#define NWAWDNWACTIVITYEPILOGUE_H

@class PBCodable;
@protocol NSCopying;


#import "NWAWDNWActivity.h"
#import "NWAWDNWDeviceReport.h"
#import "NWAWDNWL2Report.h"

@interface NWAWDNWActivityEpilogue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NWAWDNWActivity *activity; // ivar: _activity
@property (nonatomic) int completionReason; // ivar: _completionReason
@property (retain, nonatomic) NWAWDNWDeviceReport *deviceReport; // ivar: _deviceReport
@property (nonatomic) NSUInteger durationMsecs; // ivar: _durationMsecs
@property (nonatomic) NSUInteger fragmentsQuenched; // ivar: _fragmentsQuenched
@property (readonly, nonatomic) BOOL hasActivity;
@property (nonatomic) BOOL hasCompletionReason;
@property (readonly, nonatomic) BOOL hasDeviceReport;
@property (nonatomic) BOOL hasDurationMsecs;
@property (nonatomic) BOOL hasFragmentsQuenched;
@property (readonly, nonatomic) BOOL hasL2Report;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (nonatomic) BOOL hasUnderlyingErrorDomain;
@property (retain, nonatomic) NWAWDNWL2Report *l2Report; // ivar: _l2Report
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int underlyingErrorCode; // ivar: _underlyingErrorCode
@property (nonatomic) int underlyingErrorDomain; // ivar: _underlyingErrorDomain


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)completionReasonAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsCompletionReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif