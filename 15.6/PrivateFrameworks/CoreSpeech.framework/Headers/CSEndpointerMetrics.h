// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSENDPOINTERMETRICS_H
#define CSENDPOINTERMETRICS_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface CSEndpointerMetrics : NSObject

@property (retain, nonatomic) NSDictionary *additionalMetrics; // ivar: _additionalMetrics
@property (nonatomic) NSUInteger endpointBufferHostTime; // ivar: _endpointBufferHostTime
@property (nonatomic) NSInteger endpointerType; // ivar: _endpointerType
@property (retain, nonatomic) NSArray *featuresAtEndpoint; // ivar: _featuresAtEndpoint
@property (retain, nonatomic) NSDictionary *serverFeatureLatencyDistribution; // ivar: _serverFeatureLatencyDistribution
@property (nonatomic) CGFloat totalAudioRecorded; // ivar: _totalAudioRecorded


-(id)initWithTotalAudioRecorded:(CGFloat)arg0 endpointBufferHostTime:(NSUInteger)arg1 featuresAtEndpoint:(id)arg2 endpointerType:(NSInteger)arg3 serverFeatureLatencyDistribution:(id)arg4 additionalMetrics:(id)arg5 ;


@end


#endif