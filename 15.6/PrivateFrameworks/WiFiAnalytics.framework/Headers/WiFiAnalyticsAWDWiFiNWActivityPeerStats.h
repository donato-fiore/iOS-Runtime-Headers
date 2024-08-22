// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYPEERSTATS_H
#define WIFIANALYTICSAWDWIFINWACTIVITYPEERSTATS_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWiFiNWActivityTxCompletions.h"

@interface WiFiAnalyticsAWDWiFiNWActivityPeerStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *acCompletions; // ivar: _acCompletions
@property (retain, nonatomic) NSMutableArray *bytes; // ivar: _bytes
@property (nonatomic) unsigned int ccaValue; // ivar: _ccaValue
@property (retain, nonatomic) NSMutableArray *ccas; // ivar: _ccas
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityTxCompletions *completions; // ivar: _completions
@property (nonatomic) BOOL hasCcaValue;
@property (readonly, nonatomic) BOOL hasCompletions;
@property (readonly, nonatomic) BOOL hasHashID;
@property (nonatomic) BOOL hasIbssCCA;
@property (nonatomic) BOOL hasInterferenceCCA;
@property (nonatomic) BOOL hasNfValue;
@property (nonatomic) BOOL hasObssCCA;
@property (nonatomic) BOOL hasOfdmDesense;
@property (nonatomic) BOOL hasQbssCCA;
@property (nonatomic) BOOL hasQbssSTACount;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) BOOL hasRssiValue;
@property (nonatomic) BOOL hasSnrValue;
@property (retain, nonatomic) NSString *hashID; // ivar: _hashID
@property (nonatomic) unsigned int ibssCCA; // ivar: _ibssCCA
@property (nonatomic) unsigned int interferenceCCA; // ivar: _interferenceCCA
@property (nonatomic) int nfValue; // ivar: _nfValue
@property (nonatomic) unsigned int obssCCA; // ivar: _obssCCA
@property (nonatomic) unsigned int ofdmDesense; // ivar: _ofdmDesense
@property (retain, nonatomic) NSMutableArray *packets; // ivar: _packets
@property (nonatomic) unsigned int qbssCCA; // ivar: _qbssCCA
@property (nonatomic) unsigned int qbssSTACount; // ivar: _qbssSTACount
@property (nonatomic) int role; // ivar: _role
@property (nonatomic) int rssiValue; // ivar: _rssiValue
@property (retain, nonatomic) NSMutableArray *rssis; // ivar: _rssis
@property (retain, nonatomic) NSMutableArray *rxLatencyTID0s; // ivar: _rxLatencyTID0s
@property (retain, nonatomic) NSMutableArray *rxLatencyTID1s; // ivar: _rxLatencyTID1s
@property (retain, nonatomic) NSMutableArray *rxLatencyTID2s; // ivar: _rxLatencyTID2s
@property (retain, nonatomic) NSMutableArray *rxLatencyTID3s; // ivar: _rxLatencyTID3s
@property (retain, nonatomic) NSMutableArray *rxLatencyTID4s; // ivar: _rxLatencyTID4s
@property (retain, nonatomic) NSMutableArray *rxLatencyTID5s; // ivar: _rxLatencyTID5s
@property (retain, nonatomic) NSMutableArray *rxLatencyTID6s; // ivar: _rxLatencyTID6s
@property (retain, nonatomic) NSMutableArray *rxLatencyTID7s; // ivar: _rxLatencyTID7s
@property (nonatomic) int snrValue; // ivar: _snrValue
@property (retain, nonatomic) NSMutableArray *snrs; // ivar: _snrs
@property (retain, nonatomic) NSMutableArray *txLatencyBEs; // ivar: _txLatencyBEs
@property (retain, nonatomic) NSMutableArray *txLatencyBKs; // ivar: _txLatencyBKs
@property (retain, nonatomic) NSMutableArray *txLatencyVIs; // ivar: _txLatencyVIs
@property (retain, nonatomic) NSMutableArray *txLatencyVOs; // ivar: _txLatencyVOs


+(Class)ccaType;
+(Class)rssiType;
+(Class)rxLatencyTID0Type;
+(Class)rxLatencyTID1Type;
+(Class)rxLatencyTID2Type;
+(Class)rxLatencyTID3Type;
+(Class)rxLatencyTID4Type;
+(Class)rxLatencyTID5Type;
+(Class)rxLatencyTID6Type;
+(Class)rxLatencyTID7Type;
+(Class)snrType;
+(Class)txLatencyBEType;
+(Class)txLatencyBKType;
+(Class)txLatencyVIType;
+(Class)txLatencyVOType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)acCompletionsAtIndex:(NSUInteger)arg0 ;
-(id)bytesAtIndex:(NSUInteger)arg0 ;
-(id)ccaAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)packetsAtIndex:(NSUInteger)arg0 ;
-(id)roleAsString:(int)arg0 ;
-(id)rssiAtIndex:(NSUInteger)arg0 ;
-(id)rxLatencyTID0AtIndex:(NSUInteger)arg0 ;
-(id)rxLatencyTID1AtIndex:(NSUInteger)arg0 ;
-(id)rxLatencyTID2AtIndex:(NSUInteger)arg0 ;
-(id)rxLatencyTID3AtIndex:(NSUInteger)arg0 ;
-(id)rxLatencyTID4AtIndex:(NSUInteger)arg0 ;
-(id)rxLatencyTID5AtIndex:(NSUInteger)arg0 ;
-(id)rxLatencyTID6AtIndex:(NSUInteger)arg0 ;
-(id)rxLatencyTID7AtIndex:(NSUInteger)arg0 ;
-(id)snrAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyBEAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyBKAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyVIAtIndex:(NSUInteger)arg0 ;
-(id)txLatencyVOAtIndex:(NSUInteger)arg0 ;
-(int)StringAsRole:(id)arg0 ;
-(void)addAcCompletions:(id)arg0 ;
-(void)addBytes:(id)arg0 ;
-(void)addCca:(id)arg0 ;
-(void)addPackets:(id)arg0 ;
-(void)addRssi:(id)arg0 ;
-(void)addRxLatencyTID0:(id)arg0 ;
-(void)addRxLatencyTID1:(id)arg0 ;
-(void)addRxLatencyTID2:(id)arg0 ;
-(void)addRxLatencyTID3:(id)arg0 ;
-(void)addRxLatencyTID4:(id)arg0 ;
-(void)addRxLatencyTID5:(id)arg0 ;
-(void)addRxLatencyTID6:(id)arg0 ;
-(void)addRxLatencyTID7:(id)arg0 ;
-(void)addSnr:(id)arg0 ;
-(void)addTxLatencyBE:(id)arg0 ;
-(void)addTxLatencyBK:(id)arg0 ;
-(void)addTxLatencyVI:(id)arg0 ;
-(void)addTxLatencyVO:(id)arg0 ;
-(void)clearAcCompletions;
-(void)clearBytes;
-(void)clearCcas;
-(void)clearPackets;
-(void)clearRssis;
-(void)clearRxLatencyTID0s;
-(void)clearRxLatencyTID1s;
-(void)clearRxLatencyTID2s;
-(void)clearRxLatencyTID3s;
-(void)clearRxLatencyTID4s;
-(void)clearRxLatencyTID5s;
-(void)clearRxLatencyTID6s;
-(void)clearRxLatencyTID7s;
-(void)clearSnrs;
-(void)clearTxLatencyBEs;
-(void)clearTxLatencyBKs;
-(void)clearTxLatencyVIs;
-(void)clearTxLatencyVOs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif