// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSSYNTHESISREQUEST_H
#define SIRITTSSYNTHESISREQUEST_H

@class NSString;
@protocol SiriTTSSynthesizingRequestProtocol;


#import "SiriTTSBaseRequest.h"
#import "SiriTTSSynthesisContext.h"

@interface SiriTTSSynthesisRequest : SiriTTSBaseRequest <SiriTTSSynthesizingRequestProtocol>



@property (nonatomic, readonly) NSString *description;
@property (retain, nonatomic) SiriTTSSynthesisContext *synthesisContext;
@property (nonatomic, retain) SiriTTSSynthesisContext *synthesisContext; // ivar: synthesisContext


+(BOOL)supportsSecureCoding;
-(BOOL)disableCompactVoice;
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
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 voice:(id)arg1 ;
-(id)prosodyProperties;
-(id)text;
-(id)voice;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setContextInfo:(id)arg0 ;
-(void)setCustomResourceURLs:(id)arg0 ;
-(void)setDidGenerateAudio:(id)arg0 ;
-(void)setDidGenerateWordTimings:(id)arg0 ;
-(void)setDisableCompactVoice:(BOOL)arg0 ;
-(void)setPitch:(float)arg0 ;
-(void)setPrivacySensitive:(BOOL)arg0 ;
-(void)setProsodyProperties:(id)arg0 ;
-(void)setRate:(float)arg0 ;
-(void)setSynthesisProfile:(NSInteger)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setVoice:(id)arg0 ;
-(void)setVolume:(float)arg0 ;
-(void)setWhisper:(BOOL)arg0 ;


@end


#endif