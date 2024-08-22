// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CESRSPEECHPARAMETERS_H
#define CESRSPEECHPARAMETERS_H

@class NSString, NSArray, CLLocation, NSURL, NSDictionary, AFPowerContextPolicy, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CESRSpeechParameters : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (readonly, nonatomic) BOOL censorSpeech; // ivar: _censorSpeech
@property (readonly, copy, nonatomic) NSString *codec; // ivar: _codec
@property (readonly, nonatomic) BOOL continuousListening; // ivar: _continuousListening
@property (readonly, nonatomic) BOOL deliverEagerPackage; // ivar: _deliverEagerPackage
@property (readonly, nonatomic) BOOL detectUtterances; // ivar: _detectUtterances
@property (readonly, copy, nonatomic) NSString *dictationUIInteractionIdentifier; // ivar: _dictationUIInteractionIdentifier
@property (readonly, nonatomic) BOOL disableDeliveringAsrFeatures; // ivar: _disableDeliveringAsrFeatures
@property (readonly, nonatomic) BOOL enableAutoPunctuation; // ivar: _enableAutoPunctuation
@property (readonly, nonatomic) BOOL enableEmojiRecognition; // ivar: _enableEmojiRecognition
@property (readonly, nonatomic) BOOL enableVoiceCommands; // ivar: _enableVoiceCommands
@property (readonly, nonatomic) CGFloat endpointStart; // ivar: _endpointStart
@property (readonly, nonatomic) BOOL farField; // ivar: _farField
@property (readonly, copy, nonatomic) NSString *inputOrigin; // ivar: _inputOrigin
@property (readonly, nonatomic) BOOL isSpeechAPIRequest; // ivar: _isSpeechAPIRequest
@property (readonly, copy, nonatomic) NSArray *jitGrammar; // ivar: _jitGrammar
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language
@property (readonly, copy, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, copy, nonatomic) NSArray *loggingContext; // ivar: _loggingContext
@property (readonly, nonatomic) CGFloat maximumRecognitionDuration; // ivar: _maximumRecognitionDuration
@property (readonly, copy, nonatomic) NSURL *modelOverrideURL; // ivar: _modelOverrideURL
@property (readonly, nonatomic) BOOL narrowband; // ivar: _narrowband
@property (readonly, copy, nonatomic) NSURL *originalAudioFileURL; // ivar: _originalAudioFileURL
@property (readonly, copy, nonatomic) NSDictionary *overrides; // ivar: _overrides
@property (readonly, copy, nonatomic) NSString *postfixText; // ivar: _postfixText
@property (readonly, copy, nonatomic) AFPowerContextPolicy *powerContext; // ivar: _powerContext
@property (readonly, copy, nonatomic) NSString *prefixText; // ivar: _prefixText
@property (readonly, copy, nonatomic) NSData *profile; // ivar: _profile
@property (readonly, nonatomic) CGFloat recognitionStart; // ivar: _recognitionStart
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, nonatomic) BOOL secureOfflineOnly; // ivar: _secureOfflineOnly
@property (readonly, copy, nonatomic) NSString *selectedText; // ivar: _selectedText
@property (readonly, copy, nonatomic) NSArray *sharedUserInfos; // ivar: _sharedUserInfos
@property (readonly, nonatomic) BOOL shouldHandleCapitalization; // ivar: _shouldHandleCapitalization
@property (readonly, nonatomic) BOOL shouldStoreAudioOnDevice; // ivar: _shouldStoreAudioOnDevice
@property (readonly, copy, nonatomic) NSString *task; // ivar: _task


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 requestIdentifier:(id)arg1 dictationUIInteractionIdentifier:(id)arg2 task:(id)arg3 loggingContext:(id)arg4 applicationName:(id)arg5 profile:(id)arg6 overrides:(id)arg7 modelOverrideURL:(id)arg8 originalAudioFileURL:(id)arg9 codec:(id)arg10 narrowband:(BOOL)arg11 detectUtterances:(BOOL)arg12 censorSpeech:(BOOL)arg13 farField:(BOOL)arg14 secureOfflineOnly:(BOOL)arg15 shouldStoreAudioOnDevice:(BOOL)arg16 continuousListening:(BOOL)arg17 shouldHandleCapitalization:(BOOL)arg18 isSpeechAPIRequest:(BOOL)arg19 maximumRecognitionDuration:(CGFloat)arg20 endpointStart:(CGFloat)arg21 inputOrigin:(id)arg22 location:(id)arg23 jitGrammar:(id)arg24 deliverEagerPackage:(BOOL)arg25 disableDeliveringAsrFeatures:(BOOL)arg26 enableEmojiRecognition:(BOOL)arg27 enableAutoPunctuation:(BOOL)arg28 enableVoiceCommands:(BOOL)arg29 sharedUserInfos:(id)arg30 prefixText:(id)arg31 postfixText:(id)arg32 selectedText:(id)arg33 powerContext:(id)arg34 ;
-(id)initWithLanguage:(id)arg0 requestIdentifier:(id)arg1 dictationUIInteractionIdentifier:(id)arg2 task:(id)arg3 loggingContext:(id)arg4 applicationName:(id)arg5 profile:(id)arg6 overrides:(id)arg7 modelOverrideURL:(id)arg8 originalAudioFileURL:(id)arg9 codec:(id)arg10 narrowband:(BOOL)arg11 detectUtterances:(BOOL)arg12 censorSpeech:(BOOL)arg13 farField:(BOOL)arg14 secureOfflineOnly:(BOOL)arg15 shouldStoreAudioOnDevice:(BOOL)arg16 continuousListening:(BOOL)arg17 shouldHandleCapitalization:(BOOL)arg18 isSpeechAPIRequest:(BOOL)arg19 maximumRecognitionDuration:(CGFloat)arg20 endpointStart:(CGFloat)arg21 inputOrigin:(id)arg22 location:(id)arg23 jitGrammar:(id)arg24 deliverEagerPackage:(BOOL)arg25 disableDeliveringAsrFeatures:(BOOL)arg26 enableEmojiRecognition:(BOOL)arg27 enableAutoPunctuation:(BOOL)arg28 enableVoiceCommands:(BOOL)arg29 sharedUserInfos:(id)arg30 prefixText:(id)arg31 postfixText:(id)arg32 selectedText:(id)arg33 powerContext:(id)arg34 recognitionStart:(CGFloat)arg35 ;
-(id)initWithLanguage:(id)arg0 requestIdentifier:(id)arg1 dictationUIInteractionIdentifier:(id)arg2 task:(id)arg3 loggingContext:(id)arg4 applicationName:(id)arg5 profile:(id)arg6 overrides:(id)arg7 modelOverrideURL:(id)arg8 originalAudioFileURL:(id)arg9 codec:(id)arg10 narrowband:(BOOL)arg11 detectUtterances:(BOOL)arg12 censorSpeech:(BOOL)arg13 farField:(BOOL)arg14 secureOfflineOnly:(BOOL)arg15 shouldStoreAudioOnDevice:(BOOL)arg16 continuousListening:(BOOL)arg17 shouldHandleCapitalization:(BOOL)arg18 isSpeechAPIRequest:(BOOL)arg19 maximumRecognitionDuration:(CGFloat)arg20 endpointStart:(CGFloat)arg21 inputOrigin:(id)arg22 location:(id)arg23 jitGrammar:(id)arg24 deliverEagerPackage:(BOOL)arg25 disableDeliveringAsrFeatures:(BOOL)arg26 sharedUserIds:(id)arg27 enableEmojiRecognition:(BOOL)arg28 enableAutoPunctuation:(BOOL)arg29 ;
-(id)initWithLanguage:(id)arg0 requestIdentifier:(id)arg1 dictationUIInteractionIdentifier:(id)arg2 task:(id)arg3 loggingContext:(id)arg4 applicationName:(id)arg5 profile:(id)arg6 overrides:(id)arg7 modelOverrideURL:(id)arg8 originalAudioFileURL:(id)arg9 codec:(id)arg10 narrowband:(BOOL)arg11 detectUtterances:(BOOL)arg12 censorSpeech:(BOOL)arg13 farField:(BOOL)arg14 secureOfflineOnly:(BOOL)arg15 shouldStoreAudioOnDevice:(BOOL)arg16 continuousListening:(BOOL)arg17 shouldHandleCapitalization:(BOOL)arg18 isSpeechAPIRequest:(BOOL)arg19 maximumRecognitionDuration:(CGFloat)arg20 endpointStart:(CGFloat)arg21 inputOrigin:(id)arg22 location:(id)arg23 jitGrammar:(id)arg24 deliverEagerPackage:(BOOL)arg25 disableDeliveringAsrFeatures:(BOOL)arg26 sharedUserIds:(id)arg27 enableEmojiRecognition:(BOOL)arg28 enableAutoPunctuation:(BOOL)arg29 enableVoiceCommands:(BOOL)arg30 ;
-(id)initWithLanguage:(id)arg0 requestIdentifier:(id)arg1 interactionIdentifier:(id)arg2 task:(id)arg3 loggingContext:(id)arg4 applicationName:(id)arg5 profile:(id)arg6 overrides:(id)arg7 modelOverrideURL:(id)arg8 originalAudioFileURL:(id)arg9 codec:(id)arg10 narrowband:(BOOL)arg11 detectUtterances:(BOOL)arg12 censorSpeech:(BOOL)arg13 farField:(BOOL)arg14 secureOfflineOnly:(BOOL)arg15 shouldStoreAudioOnDevice:(BOOL)arg16 continuousListening:(BOOL)arg17 shouldHandleCapitalization:(BOOL)arg18 isSpeechAPIRequest:(BOOL)arg19 maximumRecognitionDuration:(CGFloat)arg20 endpointStart:(CGFloat)arg21 inputOrigin:(id)arg22 location:(id)arg23 jitGrammar:(id)arg24 deliverEagerPackage:(BOOL)arg25 disableDeliveringAsrFeatures:(BOOL)arg26 ;
-(id)initWithLanguage:(id)arg0 requestIdentifier:(id)arg1 interactionIdentifier:(id)arg2 task:(id)arg3 loggingContext:(id)arg4 applicationName:(id)arg5 profile:(id)arg6 overrides:(id)arg7 modelOverrideURL:(id)arg8 originalAudioFileURL:(id)arg9 codec:(id)arg10 narrowband:(BOOL)arg11 detectUtterances:(BOOL)arg12 censorSpeech:(BOOL)arg13 farField:(BOOL)arg14 secureOfflineOnly:(BOOL)arg15 shouldStoreAudioOnDevice:(BOOL)arg16 continuousListening:(BOOL)arg17 shouldHandleCapitalization:(BOOL)arg18 maximumRecognitionDuration:(CGFloat)arg19 endpointStart:(CGFloat)arg20 inputOrigin:(id)arg21 location:(id)arg22 jitGrammar:(id)arg23 deliverEagerPackage:(BOOL)arg24 disableDeliveringAsrFeatures:(BOOL)arg25 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif