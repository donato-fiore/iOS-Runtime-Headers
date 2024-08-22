// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSSPEECHREQUEST_H
#define SIRITTSSPEECHREQUEST_H

@class NSString;
@protocol SiriTTSAudibleRequestProtocol, SiriTTSSynthesizingRequestProtocol;


#import "SiriTTSBaseRequest.h"
#import "SiriTTSAudibleContext.h"
#import "SiriTTSSynthesisContext.h"

@interface SiriTTSSpeechRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol, SiriTTSSynthesizingRequestProtocol>



@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) SiriTTSAudibleContext *audibleContext; // ivar: audibleContext
@property (nonatomic, readonly) NSString *description;
@property (retain, nonatomic) SiriTTSSynthesisContext *synthesisContext;
@property (nonatomic, retain) SiriTTSSynthesisContext *synthesisContext; // ivar: synthesisContext


+(BOOL)supportsSecureCoding;
-(BOOL)disableCompactVoice;
-(BOOL)immediate;
-(BOOL)privacySensitive;
-(BOOL)whisper;
-(NSInteger)synthesisProfile;
-(float)pitch;
-(float)rate;
-(float)volume;
-(id)contextInfo;
-(id)customResourceURLs;
-(id)didGenerateAudio:(SEL)arg0 ;
-(id)didGenerateWordTimings:(SEL)arg0 ;
-(id)didStartSpeaking:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 voice:(id)arg1 ;
-(id)prosodyProperties;
-(id)siriRequestId;
-(id)text;
-(id)voice;
-(unsigned int)audioSessionId;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAudioSessionId:(unsigned int)arg0 ;
-(void)setContextInfo:(id)arg0 ;
-(void)setCustomResourceURLs:(id)arg0 ;
-(void)setDidGenerateAudio:(id)arg0 ;
-(void)setDidGenerateWordTimings:(id)arg0 ;
-(void)setDidStartSpeaking:(id)arg0 ;
-(void)setDisableCompactVoice:(BOOL)arg0 ;
-(void)setImmediate:(BOOL)arg0 ;
-(void)setPitch:(float)arg0 ;
-(void)setPrivacySensitive:(BOOL)arg0 ;
-(void)setProsodyProperties:(id)arg0 ;
-(void)setRate:(float)arg0 ;
-(void)setSiriRequestId:(id)arg0 ;
-(void)setSynthesisProfile:(NSInteger)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setVoice:(id)arg0 ;
-(void)setVolume:(float)arg0 ;
-(void)setWhisper:(BOOL)arg0 ;


@end


#endif