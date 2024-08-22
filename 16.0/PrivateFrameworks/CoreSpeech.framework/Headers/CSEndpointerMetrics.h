// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSENDPOINTERMETRICS_H
#define CSENDPOINTERMETRICS_H

@class NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CSEndpointerMetrics : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDictionary *additionalMetrics; // ivar: _additionalMetrics
@property (nonatomic) NSUInteger endpointBufferHostTime; // ivar: _endpointBufferHostTime
@property (nonatomic) NSInteger endpointerType; // ivar: _endpointerType
@property (retain, nonatomic) NSArray *featuresAtEndpoint; // ivar: _featuresAtEndpoint
@property (retain, nonatomic) NSDictionary *serverFeatureLatencyDistribution; // ivar: _serverFeatureLatencyDistribution
@property (nonatomic) CGFloat totalAudioRecorded; // ivar: _totalAudioRecorded
@property (nonatomic) CGFloat trailingSilenceDurationAtEndpoint; // ivar: _trailingSilenceDurationAtEndpoint


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTotalAudioRecorded:(CGFloat)arg0 endpointBufferHostTime:(NSUInteger)arg1 featuresAtEndpoint:(id)arg2 endpointerType:(NSInteger)arg3 serverFeatureLatencyDistribution:(id)arg4 additionalMetrics:(id)arg5 trailingSilenceDurationAtEndpoint:(CGFloat)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif