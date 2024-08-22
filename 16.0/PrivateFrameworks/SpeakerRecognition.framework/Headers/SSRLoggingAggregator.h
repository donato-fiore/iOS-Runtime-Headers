// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRLOGGINGAGGREGATOR_H
#define SSRLOGGINGAGGREGATOR_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SSRLoggingAggregator : NSObject {
    NSString *_eventString;
    NSMutableDictionary *_eventContext;
    NSUInteger explicitUtteranceIndex;
    NSUInteger explicitFailedUtteranceIndex;
    NSUInteger implicitUtteranceIndex;
    NSUInteger implicitDiscardedUtteranceIndex;
}


@property (nonatomic) CGFloat retrainingWaitTime; // ivar: _retrainingWaitTime
@property (nonatomic) NSUInteger speakerRecognitionPSRProcessingStatus; // ivar: _speakerRecognitionPSRProcessingStatus
@property (nonatomic) NSUInteger speakerRecognitionProcessingStatus; // ivar: _speakerRecognitionProcessingStatus
@property (nonatomic) NSUInteger speakerRecognitionSATProcessingStatus; // ivar: _speakerRecognitionSATProcessingStatus
@property (nonatomic) CGFloat speakerRecognitionWaitTime; // ivar: _speakerRecognitionWaitTime
@property (nonatomic) NSUInteger voiceProfileDiscardedUtteranceCount; // ivar: _voiceProfileDiscardedUtteranceCount
@property (nonatomic) NSUInteger voiceProfilePrunedUtteranceCount; // ivar: _voiceProfilePrunedUtteranceCount
@property (nonatomic) NSUInteger voiceProfilePruningFailureReasonCode; // ivar: _voiceProfilePruningFailureReasonCode
@property (nonatomic) NSUInteger voiceProfileRetainedUtteranceCount; // ivar: _voiceProfileRetainedUtteranceCount
@property (nonatomic) NSUInteger voiceProfileRetrainingFailureReasonCode; // ivar: _voiceProfileRetrainingFailureReasonCode
@property (nonatomic) float voiceProfileUpdateScoreMSE; // ivar: _voiceProfileUpdateScoreMSE


-(id)initWithEvent:(id)arg0 locale:(id)arg1 configVersion:(id)arg2 ;
-(void)appendVoiceProfileDiscardedImplicitUtteranceScoreWith:(float)arg0 ;
-(void)appendVoiceProfileExplicitUtteranceScoreWith:(float)arg0 ;
-(void)appendVoiceProfileFailedExplicitUtteranceScoreWith:(float)arg0 ;
-(void)appendVoiceProfileImplicitUtteranceScoreWith:(float)arg0 ;
-(void)pushAnalytics;
-(void)pushAnalyticsWithLazyBlock:(id)arg0 ;
-(void)setvoiceProfilePrunedUtteranceCount:(NSUInteger)arg0 ;


@end


#endif