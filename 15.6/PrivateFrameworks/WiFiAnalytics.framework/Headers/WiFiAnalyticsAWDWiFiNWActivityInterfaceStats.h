// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIANALYTICSAWDWIFINWACTIVITYINTERFACESTATS_H
#define WIFIANALYTICSAWDWIFINWACTIVITYINTERFACESTATS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "WiFiAnalyticsAWDWiFiNWActivityAssoc.h"
#import "WiFiAnalyticsAWDWiFiNWActivityStateBin.h"

@interface WiFiAnalyticsAWDWiFiNWActivityInterfaceStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAssoc *assoc; // ivar: _assoc
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityStateBin *awdlMode; // ivar: _awdlMode
@property (retain, nonatomic) NSMutableArray *bytes; // ivar: _bytes
@property (nonatomic) unsigned int consecutivedps; // ivar: _consecutivedps
@property (nonatomic) unsigned int dps; // ivar: _dps
@property (readonly, nonatomic) BOOL hasAssoc;
@property (readonly, nonatomic) BOOL hasAwdlMode;
@property (nonatomic) BOOL hasConsecutivedps;
@property (nonatomic) BOOL hasDps;
@property (nonatomic) BOOL hasRole;
@property (retain, nonatomic) NSMutableArray *npeers; // ivar: _npeers
@property (retain, nonatomic) NSMutableArray *packets; // ivar: _packets
@property (retain, nonatomic) NSMutableArray *peers; // ivar: _peers
@property (nonatomic) int role; // ivar: _role


+(Class)peerType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bytesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)npeersAtIndex:(NSUInteger)arg0 ;
-(id)packetsAtIndex:(NSUInteger)arg0 ;
-(id)peerAtIndex:(NSUInteger)arg0 ;
-(id)roleAsString:(int)arg0 ;
-(int)StringAsRole:(id)arg0 ;
-(void)addBytes:(id)arg0 ;
-(void)addNpeers:(id)arg0 ;
-(void)addPackets:(id)arg0 ;
-(void)addPeer:(id)arg0 ;
-(void)clearBytes;
-(void)clearPackets;
-(void)clearPeers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif