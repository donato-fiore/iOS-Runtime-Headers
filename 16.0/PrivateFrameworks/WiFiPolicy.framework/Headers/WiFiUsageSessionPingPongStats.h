// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGESESSIONPINGPONGSTATS_H
#define WIFIUSAGESESSIONPINGPONGSTATS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WiFiUsageSessionPingPongStats : NSObject

@property (nonatomic) NSUInteger pingPongNth; // ivar: _pingPongNth
@property (nonatomic) BOOL pingPongSequenceIsLowRssiOnly; // ivar: _pingPongSequenceIsLowRssiOnly
@property (nonatomic) BOOL pingPongSequenceIsReassocOnly; // ivar: _pingPongSequenceIsReassocOnly
@property (nonatomic) BOOL pingPongSequenceIsReassocOrLowRSSIOnly; // ivar: _pingPongSequenceIsReassocOrLowRSSIOnly
@property (retain, nonatomic) NSArray *sequence; // ivar: _sequence


-(id)initWithPingPongSequence:(id)arg0 ;


@end


#endif