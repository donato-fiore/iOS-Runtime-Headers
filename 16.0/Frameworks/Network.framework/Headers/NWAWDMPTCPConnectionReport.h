// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWAWDMPTCPCONNECTIONREPORT_H
#define NWAWDMPTCPCONNECTIONREPORT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NWAWDMPTCPConnectionReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientId; // ivar: _clientId
@property (nonatomic) BOOL establishmentCellularFallback; // ivar: _establishmentCellularFallback
@property (nonatomic) int establishmentFailureError; // ivar: _establishmentFailureError
@property (nonatomic) BOOL establishmentForcedTcpFallback; // ivar: _establishmentForcedTcpFallback
@property (retain, nonatomic) NSString *establishmentInterfaceName; // ivar: _establishmentInterfaceName
@property (nonatomic) BOOL establishmentSuccess; // ivar: _establishmentSuccess
@property (nonatomic) int establishmentSynRetransmits; // ivar: _establishmentSynRetransmits
@property (nonatomic) BOOL establishmentTcpFallback; // ivar: _establishmentTcpFallback
@property (nonatomic) CGFloat establishmentTime; // ivar: _establishmentTime
@property (readonly, nonatomic) BOOL hasClientId;
@property (nonatomic) BOOL hasEstablishmentCellularFallback;
@property (nonatomic) BOOL hasEstablishmentFailureError;
@property (nonatomic) BOOL hasEstablishmentForcedTcpFallback;
@property (readonly, nonatomic) BOOL hasEstablishmentInterfaceName;
@property (nonatomic) BOOL hasEstablishmentSuccess;
@property (nonatomic) BOOL hasEstablishmentSynRetransmits;
@property (nonatomic) BOOL hasEstablishmentTcpFallback;
@property (nonatomic) BOOL hasEstablishmentTime;
@property (nonatomic) BOOL hasPostConnectMultiHomed;
@property (nonatomic) BOOL hasPostConnectSessionLifetime;
@property (nonatomic) BOOL hasPostConnectSingleHomed;
@property (nonatomic) BOOL hasPostConnectSubflowAttemptCount;
@property (nonatomic) BOOL hasPostConnectSubflowMaxSubflowCount;
@property (nonatomic) BOOL hasSubflowSwitchingCount;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSMutableArray *interfaceReports; // ivar: _interfaceReports
@property (nonatomic) BOOL postConnectMultiHomed; // ivar: _postConnectMultiHomed
@property (nonatomic) CGFloat postConnectSessionLifetime; // ivar: _postConnectSessionLifetime
@property (nonatomic) BOOL postConnectSingleHomed; // ivar: _postConnectSingleHomed
@property (nonatomic) int postConnectSubflowAttemptCount; // ivar: _postConnectSubflowAttemptCount
@property (nonatomic) int postConnectSubflowMaxSubflowCount; // ivar: _postConnectSubflowMaxSubflowCount
@property (nonatomic) int subflowSwitchingCount; // ivar: _subflowSwitchingCount
@property (retain, nonatomic) NSMutableArray *subflowSwitchingReports; // ivar: _subflowSwitchingReports
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)interfaceReportsAtIndex:(NSUInteger)arg0 ;
-(id)subflowSwitchingReportsAtIndex:(NSUInteger)arg0 ;
-(void)addInterfaceReports:(id)arg0 ;
-(void)addSubflowSwitchingReports:(id)arg0 ;
-(void)clearInterfaceReports;
-(void)clearSubflowSwitchingReports;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif