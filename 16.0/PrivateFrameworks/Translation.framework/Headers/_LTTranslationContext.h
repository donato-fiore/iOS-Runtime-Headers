// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTTRANSLATIONCONTEXT_H
#define _LTTRANSLATIONCONTEXT_H

@class NSString, NSArray, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_LTLocalePair.h"

@interface _LTTranslationContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (nonatomic) NSInteger asrConfidenceThreshold; // ivar: _asrConfidenceThreshold
@property (copy, nonatomic) NSArray *asrModelURLs; // ivar: _asrModelURLs
@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (nonatomic) BOOL autoEndpoint; // ivar: _autoEndpoint
@property (nonatomic) BOOL autodetectLanguage; // ivar: _autodetectLanguage
@property (nonatomic) BOOL censorSpeech; // ivar: _censorSpeech
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (nonatomic) NSInteger dataSharingOptInStatus; // ivar: _dataSharingOptInStatus
@property (nonatomic) BOOL enableVAD; // ivar: _enableVAD
@property (nonatomic) NSInteger lidThreshold; // ivar: _lidThreshold
@property (copy, nonatomic) _LTLocalePair *localePair; // ivar: _localePair
@property (copy, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (copy, nonatomic) NSURL *mtModelURL; // ivar: _mtModelURL
@property (copy, nonatomic) NSURL *outputFileURL; // ivar: _outputFileURL
@property (nonatomic) NSInteger route; // ivar: _route
@property (copy, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) NSInteger sourceOrigin; // ivar: _sourceOrigin
@property (copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (nonatomic) NSInteger taskHint; // ivar: _taskHint
@property (copy, nonatomic) NSString *trustedClientIdentifier; // ivar: _trustedClientIdentifier
@property (nonatomic) CGFloat ttsPlaybackRate; // ivar: _ttsPlaybackRate
@property (copy, nonatomic) NSString *uniqueID; // ivar: _uniqueID
@property (copy, nonatomic) NSString *untrustedClientIdentifier; // ivar: _untrustedClientIdentifier


+(BOOL)supportsSecureCoding;
-(NSInteger)_ospreyDataSharingStatus;
-(id)_ospreySpeechTranslationRequestWithHybridEndpointer:(BOOL)arg0 ;
-(id)_ospreyTTSRequestWithText:(id)arg0 ;
-(id)_ospreyTextToSpeechTranslationRequestWithText:(id)arg0 ;
-(id)_ttsVoiceStringWithLocale:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)redactIfNeeded:(id)arg0 ;
-(id)sanitizedCopyForUntrustedTextTranslation;
-(id)sequoiaClientHeaderValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif