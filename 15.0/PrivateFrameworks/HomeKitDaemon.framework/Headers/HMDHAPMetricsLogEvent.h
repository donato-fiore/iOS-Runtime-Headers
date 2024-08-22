// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHAPMETRICSLOGEVENT_H
#define HMDHAPMETRICSLOGEVENT_H

@class HMMLogEvent, HMFUnfairLock;



@interface HMDHAPMetricsLogEvent : HMMLogEvent {
    HMFUnfairLock *_lock;
}


@property (readonly, nonatomic) NSUInteger accessoryServerInvalidations; // ivar: _accessoryServerInvalidations
@property (readonly, nonatomic) NSUInteger btleConnectionPerReasons; // ivar: _btleConnectionPerReasons
@property (readonly, nonatomic) NSUInteger btleConnections; // ivar: _btleConnections
@property (readonly, nonatomic) NSUInteger btleDiscoveries; // ivar: _btleDiscoveries
@property (readonly, nonatomic) NSUInteger receivedHTTPEvents; // ivar: _receivedHTTPEvents
@property (readonly, nonatomic) NSUInteger receivedHTTPResponses; // ivar: _receivedHTTPResponses
@property (readonly, nonatomic) NSUInteger sentHTTPRequests; // ivar: _sentHTTPRequests


-(id)init;
-(void)updateWithHAPAccessoryServer:(id)arg0 ;


@end


#endif