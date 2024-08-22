// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPTCPINFO_H
#define _CPTCPINFO_H

@class PBCodable, NSString, NSData;
@protocol _CPTCPInfo, NSSecureCoding;



@interface _CPTCPInfo : PBCodable <_CPTCPInfo, NSSecureCoding>



@property (nonatomic) unsigned int avgRTT; // ivar: _avgRTT
@property (nonatomic) NSUInteger cellRXPackets; // ivar: _cellRXPackets
@property (nonatomic) NSUInteger cellTXPackets; // ivar: _cellTXPackets
@property (nonatomic) unsigned int connectAttempts; // ivar: _connectAttempts
@property (nonatomic) unsigned int connectSuccesses; // ivar: _connectSuccesses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int minRTT; // ivar: _minRTT
@property (nonatomic) NSUInteger rxBytes; // ivar: _rxBytes
@property (nonatomic) NSUInteger rxDuplicateBytes; // ivar: _rxDuplicateBytes
@property (nonatomic) NSUInteger rxOutOfOrderBytes; // ivar: _rxOutOfOrderBytes
@property (nonatomic) NSUInteger rxPackets; // ivar: _rxPackets
@property (copy, nonatomic) NSString *statsType; // ivar: _statsType
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger txBytes; // ivar: _txBytes
@property (nonatomic) NSUInteger txPackets; // ivar: _txPackets
@property (nonatomic) NSUInteger txRetransmitBytes; // ivar: _txRetransmitBytes
@property (nonatomic) NSUInteger txRetransmitPackets; // ivar: _txRetransmitPackets
@property (nonatomic) unsigned int varRTT; // ivar: _varRTT
@property (nonatomic) NSUInteger wifiRXPackets; // ivar: _wifiRXPackets
@property (nonatomic) NSUInteger wifiTXPackets; // ivar: _wifiTXPackets
@property (nonatomic) NSUInteger wiredRXPackets; // ivar: _wiredRXPackets
@property (nonatomic) NSUInteger wiredTXPackets; // ivar: _wiredTXPackets


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithTelemetryDictionary:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif