// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWAWDLIBNETCORESTATSREPORT_H
#define NWAWDLIBNETCORESTATSREPORT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "NWAWDLibnetcoreMbufStatsReport.h"
#import "NWAWDLibnetcoreMPTCPStatsReport.h"
#import "NWAWDLibnetcoreNetworkdStatsReport.h"
#import "NWAWDNWAPIUsage.h"
#import "NWAWDLibnetcoreTCPECNStatsReport.h"
#import "NWAWDLibnetcoreTCPStatsReport.h"
#import "NWAWDLibnetcoreTCPTFOStatsReport.h"

@interface NWAWDLibnetcoreStatsReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasMbufStatisticsReport;
@property (readonly, nonatomic) BOOL hasMptcpStatisticsReport;
@property (readonly, nonatomic) BOOL hasNetworkdStatisticsReport;
@property (readonly, nonatomic) BOOL hasNwAPIUsageReport;
@property (nonatomic) BOOL hasReportReason;
@property (readonly, nonatomic) BOOL hasTcpECNStatisticsReport;
@property (readonly, nonatomic) BOOL hasTcpStatisticsReport;
@property (readonly, nonatomic) BOOL hasTcpTFOStatisticsReport;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NWAWDLibnetcoreMbufStatsReport *mbufStatisticsReport; // ivar: _mbufStatisticsReport
@property (retain, nonatomic) NWAWDLibnetcoreMPTCPStatsReport *mptcpStatisticsReport; // ivar: _mptcpStatisticsReport
@property (retain, nonatomic) NWAWDLibnetcoreNetworkdStatsReport *networkdStatisticsReport; // ivar: _networkdStatisticsReport
@property (retain, nonatomic) NWAWDNWAPIUsage *nwAPIUsageReport; // ivar: _nwAPIUsageReport
@property (nonatomic) unsigned int reportReason; // ivar: _reportReason
@property (retain, nonatomic) NSMutableArray *tcpECNInterfaceReports; // ivar: _tcpECNInterfaceReports
@property (retain, nonatomic) NWAWDLibnetcoreTCPECNStatsReport *tcpECNStatisticsReport; // ivar: _tcpECNStatisticsReport
@property (retain, nonatomic) NWAWDLibnetcoreTCPStatsReport *tcpStatisticsReport; // ivar: _tcpStatisticsReport
@property (retain, nonatomic) NWAWDLibnetcoreTCPTFOStatsReport *tcpTFOStatisticsReport; // ivar: _tcpTFOStatisticsReport
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(Class)tcpECNInterfaceReportType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tcpECNInterfaceReportAtIndex:(NSUInteger)arg0 ;
-(void)addTcpECNInterfaceReport:(id)arg0 ;
-(void)clearTcpECNInterfaceReports;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif