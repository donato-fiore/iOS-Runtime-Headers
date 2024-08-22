// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSINSTRUMENTATIONMETRICS_H
#define SIRITTSINSTRUMENTATIONMETRICS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SiriTTSSynthesisResource.h"
#import "SiriTTSSynthesisVoice.h"

@interface SiriTTSInstrumentationMetrics : NSObject <NSSecureCoding>

 {
    ? utterance;
    ? audioOutputRoute;
    ? clientBundleIdentifier;
    ? experimentIdentifier;
}


@property (nonatomic) CGFloat audioDuration; // ivar: audioDuration
@property (nonatomic, copy) NSString *audioOutputRoute;
@property (nonatomic) CGFloat audioStartLatency; // ivar: audioStartLatency
@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic) CGFloat eagerRequestGapInterval; // ivar: eagerRequestGapInterval
@property (nonatomic) NSInteger errorCode; // ivar: errorCode
@property (nonatomic, copy) NSString *experimentIdentifier;
@property (nonatomic) BOOL isAudibleRequest; // ivar: isAudibleRequest
@property (nonatomic) BOOL isServerTTSRacing; // ivar: isServerTTSRacing
@property (nonatomic) BOOL isWarmStart; // ivar: isWarmStart
@property (nonatomic) BOOL neuralAlignmentStall; // ivar: neuralAlignmentStall
@property (nonatomic) BOOL neuralAudioClick; // ivar: neuralAudioClick
@property (nonatomic) BOOL neuralFallback; // ivar: neuralFallback
@property (nonatomic) BOOL privacySensitive; // ivar: privacySensitive
@property (nonatomic) NSInteger promptCount; // ivar: promptCount
@property (nonatomic) NSUInteger requestCreatedTime; // ivar: requestCreatedTime
@property (nonatomic, retain) SiriTTSSynthesisResource *resource; // ivar: resource
@property (nonatomic) NSUInteger serverFirstPacketTime; // ivar: serverFirstPacketTime
@property (nonatomic) NSUInteger serverLastPacketTime; // ivar: serverLastPacketTime
@property (nonatomic) CGFloat serverStreamedAudioDuration; // ivar: serverStreamedAudioDuration
@property (nonatomic) NSInteger sourceOfTTS; // ivar: sourceOfTTS
@property (nonatomic) NSUInteger speechBeginTime; // ivar: speechBeginTime
@property (nonatomic) NSUInteger speechEndTime; // ivar: speechEndTime
@property (nonatomic) NSUInteger speechEstimatedOutputBeginTime; // ivar: speechEstimatedOutputBeginTime
@property (nonatomic) NSUInteger synthesisBeginTime; // ivar: synthesisBeginTime
@property (nonatomic) NSUInteger synthesisEndTime; // ivar: synthesisEndTime
@property (nonatomic, copy) NSString *utterance;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice; // ivar: voice


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif