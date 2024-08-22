// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIAVAILABILITYMATCH_H
#define WIFIAVAILABILITYMATCH_H

@class NSString, NSDate;
@protocol WiFiRecommendation, WiFiCandidateNetwork, WiFiScannedNetwork;

#import <Foundation/Foundation.h>


@interface WiFiAvailabilityMatch : NSObject <WiFiRecommendation>



@property (readonly, copy, nonatomic) NSString *SSID; // ivar: _SSID
@property (retain, nonatomic) NSDate *matchedAt; // ivar: _matchedAt
@property (readonly, nonatomic) NSObject<WiFiCandidateNetwork> *network; // ivar: _network
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (retain, nonatomic) NSObject<WiFiScannedNetwork> *scannedNetwork; // ivar: _scannedNetwork
@property (nonatomic) BOOL unwantedNetworkName; // ivar: _unwantedNetworkName


+(id)matchWithNetwork:(id)arg0 scannedNetwork:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAvailabilityMatch:(id)arg0 ;
-(BOOL)isEqualToScannedNetwork:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithNetwork:(id)arg0 scannedNetwork:(id)arg1 ;


@end


#endif