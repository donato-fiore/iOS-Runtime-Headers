// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIAWAREDATASESSIONSTATISTICSREPORT_H
#define WIFIAWAREDATASESSIONSTATISTICSREPORT_H

@class NSNumber, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WiFiMACAddress.h"

@interface WiFiAwareDataSessionStatisticsReport : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *csaCount; // ivar: _csaCount
@property (readonly, nonatomic) NSNumber *dfsChannelsCount; // ivar: _dfsChannelsCount
@property (nonatomic) BOOL infraRelayOperationStatus; // ivar: _infraRelayOperationStatus
@property (copy, nonatomic) NSNumber *infraRelayRequestersCount; // ivar: _infraRelayRequestersCount
@property (readonly, nonatomic) NSNumber *infrastructureChannel; // ivar: _infrastructureChannel
@property (readonly, nonatomic) NSNumber *packetsHOFOn2GCount; // ivar: _packetsHOFOn2GCount
@property (readonly, nonatomic) NSNumber *packetsNAVOn2GCount; // ivar: _packetsNAVOn2GCount
@property (readonly, nonatomic) NSNumber *packetsOn2GCount; // ivar: _packetsOn2GCount
@property (readonly, nonatomic) NSNumber *packetsOn5GCount; // ivar: _packetsOn5GCount
@property (readonly, nonatomic) NSNumber *packetsOverridenOn5GCount; // ivar: _packetsOverridenOn5GCount
@property (readonly, nonatomic) WiFiMACAddress *peerAddress; // ivar: _peerAddress
@property (readonly, nonatomic) NSNumber *preferred2GChannelsCount; // ivar: _preferred2GChannelsCount
@property (readonly, nonatomic) NSNumber *preferred5GChannelsCount; // ivar: _preferred5GChannelsCount
@property (readonly, nonatomic) NSNumber *quietIECount; // ivar: _quietIECount
@property (readonly, nonatomic) NSArray *rxRSSIHistogram; // ivar: _rxRSSIHistogram
@property (readonly, nonatomic) NSArray *txCCAHistogram; // ivar: _txCCAHistogram
@property (readonly, nonatomic) NSNumber *txErrorCount; // ivar: _txErrorCount


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPeerAddress:(id)arg0 infrastructureChannel:(id)arg1 txCCAHistogram:(id)arg2 rxRSSIHistogram:(id)arg3 preferred2GChannelsCount:(id)arg4 preferred5GChannelsCount:(id)arg5 dfsChannelsCount:(id)arg6 csaCount:(id)arg7 quietIECount:(id)arg8 txErrorCount:(id)arg9 packetsOn2GCount:(id)arg10 packetsNAVOn2GCount:(id)arg11 packetsHOFOn2GCount:(id)arg12 packetsOn5GCount:(id)arg13 packetsOverridenOn5GCount:(id)arg14 infraRelayOperationStatus:(BOOL)arg15 infraRelayRequestersCount:(id)arg16 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif