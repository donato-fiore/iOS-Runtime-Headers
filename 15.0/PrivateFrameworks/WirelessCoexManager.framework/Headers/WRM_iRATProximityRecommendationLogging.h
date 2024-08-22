// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WRM_IRATPROXIMITYRECOMMENDATIONLOGGING_H
#define WRM_IRATPROXIMITYRECOMMENDATIONLOGGING_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface WRM_iRATProximityRecommendationLogging : NSObject

@property (retain, nonatomic) NSUUID *Uuid; // ivar: _Uuid
@property (nonatomic) int beaconPER; // ivar: _beaconPER
@property (nonatomic) NSUInteger btRSSI; // ivar: _btRSSI
@property (nonatomic) NSInteger btRetransmissionRateRx; // ivar: _btRetransmissionRateRx
@property (nonatomic) NSInteger btRetransmissionRateTx; // ivar: _btRetransmissionRateTx
@property (nonatomic) NSInteger btTech; // ivar: _btTech
@property (nonatomic) NSInteger expectedThroughputVIBE; // ivar: _expectedThroughputVIBE
@property (nonatomic) NSInteger lsmRecommendationBe; // ivar: _lsmRecommendationBe
@property (nonatomic) char nwType; // ivar: _nwType
@property (nonatomic) NSInteger packetLifetimeVIBE; // ivar: _packetLifetimeVIBE
@property (nonatomic) NSInteger packetLossRateVIBE; // ivar: _packetLossRateVIBE
@property (nonatomic) NSInteger wifiCCA; // ivar: _wifiCCA
@property (nonatomic) NSInteger wifiRSSI; // ivar: _wifiRSSI
@property (nonatomic) NSInteger wifiSNR; // ivar: _wifiSNR


-(id)init;
-(void)dealloc;


@end


#endif