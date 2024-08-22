// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSIRIINSTRUMENTATION_H
#define VSSIRIINSTRUMENTATION_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface VSSiriInstrumentation : NSObject

@property (retain, nonatomic) NSUUID *contextId; // ivar: _contextId
@property (retain, nonatomic) NSUUID *siriRequestId; // ivar: _siriRequestId
@property (retain, nonatomic) NSUUID *ttsId; // ivar: _ttsId


+(id)sharedPowerLogger;
+(int)outputRouteFromRouteInfo:(id)arg0 ;
+(int)schemaFootprintFromFootprint:(NSInteger)arg0 ;
+(int)schemaVoiceGenderFromGender:(NSInteger)arg0 ;
+(int)schemaVoiceTypeFromType:(NSInteger)arg0 ;
+(int)synthesisSourceFromSource:(NSInteger)arg0 ;
+(void)instrumentPowerEvent:(id)arg0 ttsId:(id)arg1 ;
+(void)instrumentVoicedProcessStartedPowerEvent;
-(id)initWithSiriRequestId:(id)arg0 ;
-(void)instrumentRequestReceivedWithText:(id)arg0 requestedVoiceType:(NSInteger)arg1 requestedVoiceFootprint:(NSInteger)arg2 isPrivate:(BOOL)arg3 ;
-(void)instrumentSpeechCancelled;
-(void)instrumentSpeechEndedWithAudioDuration:(CGFloat)arg0 synthesisLatency:(CGFloat)arg1 realTimeFactor:(CGFloat)arg2 promptCount:(NSUInteger)arg3 errorCode:(NSInteger)arg4 ;
-(void)instrumentSpeechFailedWithErrorCodes:(id)arg0 ;
-(void)instrumentSpeechStartedWithSource:(NSInteger)arg0 customerPerceivedLatency:(CGFloat)arg1 audioOutputRoute:(id)arg2 voiceType:(NSInteger)arg3 voiceFootprint:(NSInteger)arg4 voiceVersion:(NSUInteger)arg5 resourceVersion:(NSUInteger)arg6 isWhisper:(BOOL)arg7 ;
-(void)instrumentVoiceFallbackOccurredWithVoice:(id)arg0 resource:(id)arg1 ;
-(void)makeRequestLinkEvent;


@end


#endif