// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGERANGINGSESSION_H
#define WIFIUSAGERANGINGSESSION_H

@class NSDate, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface WiFiUsageRangingSession : NSObject {
    NSDate *_sessionStartTimestamp;
    NSDate *_sessionLinkUpTimestamp;
    NSDate *_peerDiscoveryTimestamp;
    NSDate *_rangingStartedTimestamp;
    NSDate *_rangingCompletionTimestamp;
    NSUInteger _selfPreferredChannel;
    NSUInteger _selfMainChannel;
    NSUInteger _selfChannelFlags;
    NSUInteger _peerPreferredChannel;
    NSUInteger _peerMainChannel;
    NSUInteger _peerChannelFlags;
    NSUInteger _numRequestedMeasurements;
    NSUInteger _numValidMeasurements;
    NSInteger _measurementStatus;
    NSUInteger _measurementFlags;
    CGFloat _linkUpLatency;
    CGFloat _rangingLatency;
    NSMutableArray *_rttSamples;
    NSString *_requester;
}




-(id)init;
-(id)metricName;
-(id)sessionSummary:(BOOL)arg0 ;
-(void)addRangingRttSampleWithRssi:(NSInteger)arg0 rtt:(NSInteger)arg1 snr:(NSUInteger)arg2 flags:(NSUInteger)arg3 channel:(NSUInteger)arg4 coreId:(NSUInteger)arg5 bitErrorRate:(NSUInteger)arg6 phyError:(NSUInteger)arg7 andPeerSnr:(NSUInteger)arg8 andPeerCoreId:(NSUInteger)arg9 andPeerBitErrorRate:(NSUInteger)arg10 andPeerPhyError:(NSUInteger)arg11 ;
-(void)rangingCompletedWithValidCount:(NSUInteger)arg0 resultStatus:(NSInteger)arg1 resultFlags:(NSUInteger)arg2 ;
-(void)rangingLinkUp;
-(void)rangingSessionRequestedWithSelfPreferredChannel:(NSUInteger)arg0 selfMainChannel:(NSUInteger)arg1 selfChannelFlags:(NSUInteger)arg2 peerPreferredChannel:(NSUInteger)arg3 peerMainChannel:(NSUInteger)arg4 peerChannelFlags:(NSUInteger)arg5 requester:(id)arg6 ;
-(void)rangingStartedWithNumMeasurements:(NSUInteger)arg0 ;


@end


#endif