// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWAWDLIBNETCORETCPCONNECTIONREPORT_H
#define NWAWDLIBNETCORETCPCONNECTIONREPORT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "NWAWDLibnetcoreCellularFallbackReport.h"
#import "NWAWDLibnetcoreConnectionStatisticsReport.h"

@interface NWAWDLibnetcoreTCPConnectionReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NWAWDLibnetcoreCellularFallbackReport *cellularFallbackReport; // ivar: _cellularFallbackReport
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSMutableArray *connectionAttemptStatisticsReports; // ivar: _connectionAttemptStatisticsReports
@property (retain, nonatomic) NWAWDLibnetcoreConnectionStatisticsReport *connectionStatisticsReport; // ivar: _connectionStatisticsReport
@property (nonatomic) BOOL delegated; // ivar: _delegated
@property (readonly, nonatomic) BOOL hasCellularFallbackReport;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (readonly, nonatomic) BOOL hasConnectionStatisticsReport;
@property (nonatomic) BOOL hasDelegated;
@property (nonatomic) BOOL hasIPAddressAttemptCount;
@property (nonatomic) BOOL hasReportReason;
@property (readonly, nonatomic) BOOL hasSourceAppIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger iPAddressAttemptCount; // ivar: _iPAddressAttemptCount
@property (nonatomic) int reportReason; // ivar: _reportReason
@property (retain, nonatomic) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)connectionAttemptStatisticsReportsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reportReasonAsString:(int)arg0 ;
-(int)StringAsReportReason:(id)arg0 ;
-(void)addConnectionAttemptStatisticsReports:(id)arg0 ;
-(void)clearConnectionAttemptStatisticsReports;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif