// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSWRMMETRICCONTAINER_H
#define IDSWRMMETRICCONTAINER_H


#import <Foundation/Foundation.h>


@interface IDSWRMMetricContainer : NSObject

@property (nonatomic) NSUInteger MessageDeliveredDeliveryError; // ivar: _MessageDeliveredDeliveryError
@property (nonatomic) NSUInteger MessageDeliveredRTT; // ivar: _MessageDeliveredRTT
@property (nonatomic) NSUInteger MessageDeliveredSize; // ivar: _MessageDeliveredSize
@property (nonatomic) NSUInteger MessageReceivedSize; // ivar: _MessageReceivedSize
@property (nonatomic) NSUInteger MessageSentSize; // ivar: _MessageSentSize
@property (nonatomic) NSUInteger StreamBytesReceived; // ivar: _StreamBytesReceived
@property (nonatomic) NSUInteger StreamBytesSent; // ivar: _StreamBytesSent
@property (nonatomic) NSUInteger StreamPacketsReceived; // ivar: _StreamPacketsReceived
@property (nonatomic) NSUInteger StreamPacketsSent; // ivar: _StreamPacketsSent
@property (readonly, nonatomic) NSUInteger numMessageDeliveredRTT; // ivar: _numMessageDeliveredRTT
@property (readonly, nonatomic) NSUInteger numMessageDeliveredSize; // ivar: _numMessageDeliveredSize
@property (readonly, nonatomic) NSUInteger numMessageReceivedSize; // ivar: _numMessageReceivedSize
@property (readonly, nonatomic) NSUInteger numMessageSentSize; // ivar: _numMessageSentSize


-(id)description;
-(id)init;
-(void)resetMetric;


@end


#endif