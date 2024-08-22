// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRITTSSYNTHESISCONTEXT_H
#define SIRITTSSYNTHESISCONTEXT_H

@class NSDictionary, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SiriTTSProsodyProperties.h"
#import "SiriTTSSynthesisVoice.h"

@interface SiriTTSSynthesisContext : NSObject <NSSecureCoding>

 {
    ? text;
    ? contextInfo;
    ? customResourceURLs;
    ? didGenerateAudio;
    ? didGenerateWordTimings;
}


@property (nonatomic, copy) NSDictionary *contextInfo;
@property (nonatomic, copy) NSArray *customResourceURLs;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) id *didGenerateAudio;
@property (nonatomic, copy) id *didGenerateWordTimings;
@property (nonatomic) BOOL disableCompactVoice; // ivar: disableCompactVoice
@property (nonatomic) BOOL forceOspreyTTS; // ivar: forceOspreyTTS
@property (nonatomic) float pitch; // ivar: pitch
@property (nonatomic) BOOL privacySensitive; // ivar: privacySensitive
@property (nonatomic, retain) SiriTTSProsodyProperties *prosodyProperties; // ivar: prosodyProperties
@property (nonatomic) float rate; // ivar: rate
@property (nonatomic) NSInteger synthesisProfile; // ivar: synthesisProfile
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice; // ivar: voice
@property (nonatomic) float volume; // ivar: volume
@property (nonatomic) BOOL whisper; // ivar: whisper


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif