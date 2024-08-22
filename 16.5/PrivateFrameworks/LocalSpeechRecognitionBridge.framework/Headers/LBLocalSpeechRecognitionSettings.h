// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBLOCALSPEECHRECOGNITIONSETTINGS_H
#define LBLOCALSPEECHRECOGNITIONSETTINGS_H

@class NSString, NSArray, CLLocation, AFPowerContextPolicy, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LBLocalSpeechRecognitionSettings : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *UILanguage; // ivar: _UILanguage
@property (readonly, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (readonly, nonatomic) BOOL continuousListening; // ivar: _continuousListening
@property (readonly, nonatomic) BOOL deliverEagerPackage; // ivar: _deliverEagerPackage
@property (readonly, nonatomic) BOOL detectUtterances; // ivar: _detectUtterances
@property (readonly, nonatomic) NSString *dictationUIInteractionId; // ivar: _dictationUIInteractionId
@property (readonly, nonatomic) BOOL enableAutoPunctuation; // ivar: _enableAutoPunctuation
@property (readonly, nonatomic) BOOL enableEmojiRecognition; // ivar: _enableEmojiRecognition
@property (readonly, nonatomic) BOOL enableVoiceCommands; // ivar: _enableVoiceCommands
@property (readonly, nonatomic) NSString *inputOrigin; // ivar: _inputOrigin
@property (readonly, nonatomic) NSArray *jitGrammar; // ivar: _jitGrammar
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) CGFloat maximumRecognitionDuration; // ivar: _maximumRecognitionDuration
@property (readonly, nonatomic) NSString *overrideModelPath; // ivar: _overrideModelPath
@property (readonly, nonatomic) NSString *postfixText; // ivar: _postfixText
@property (readonly, nonatomic) AFPowerContextPolicy *powerContext; // ivar: _powerContext
@property (readonly, nonatomic) NSString *prefixText; // ivar: _prefixText
@property (readonly, nonatomic) NSDictionary *recognitionOverrides; // ivar: _recognitionOverrides
@property (readonly, nonatomic) NSString *requestId; // ivar: _requestId
@property (readonly, nonatomic) BOOL secureOfflineOnly; // ivar: _secureOfflineOnly
@property (readonly, nonatomic) NSString *selectedText; // ivar: _selectedText
@property (readonly, nonatomic) NSArray *sharedUserInfos; // ivar: _sharedUserInfos
@property (readonly, nonatomic) BOOL shouldHandleCapitalization; // ivar: _shouldHandleCapitalization
@property (readonly, nonatomic) BOOL shouldStoreAudioOnDevice; // ivar: _shouldStoreAudioOnDevice
@property (readonly, nonatomic) NSUInteger speechRecognitionTask; // ivar: _speechRecognitionTask


+(BOOL)supportsSecureCoding;
+(id)taskString:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 deliverEagerPackage:(BOOL)arg14 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 deliverEagerPackage:(BOOL)arg14 enableEmojiRecognition:(BOOL)arg15 enableAutoPunctuation:(BOOL)arg16 UILanguage:(id)arg17 enableVoiceCommands:(BOOL)arg18 dictationUIInteractionId:(id)arg19 sharedUserInfos:(id)arg20 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 deliverEagerPackage:(BOOL)arg14 enableEmojiRecognition:(BOOL)arg15 enableAutoPunctuation:(BOOL)arg16 UILanguage:(id)arg17 enableVoiceCommands:(BOOL)arg18 dictationUIInteractionId:(id)arg19 sharedUserInfos:(id)arg20 prefixText:(id)arg21 postfixText:(id)arg22 selectedText:(id)arg23 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 deliverEagerPackage:(BOOL)arg14 enableEmojiRecognition:(BOOL)arg15 enableAutoPunctuation:(BOOL)arg16 UILanguage:(id)arg17 enableVoiceCommands:(BOOL)arg18 dictationUIInteractionId:(id)arg19 sharedUserInfos:(id)arg20 prefixText:(id)arg21 postfixText:(id)arg22 selectedText:(id)arg23 powerContext:(id)arg24 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 deliverEagerPackage:(BOOL)arg14 sharedUserIds:(id)arg15 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 deliverEagerPackage:(BOOL)arg14 sharedUserIds:(id)arg15 enableEmojiRecognition:(BOOL)arg16 enableAutoPunctuation:(BOOL)arg17 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 deliverEagerPackage:(BOOL)arg14 sharedUserIds:(id)arg15 enableEmojiRecognition:(BOOL)arg16 enableAutoPunctuation:(BOOL)arg17 UILanguage:(id)arg18 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 deliverEagerPackage:(BOOL)arg14 sharedUserIds:(id)arg15 enableEmojiRecognition:(BOOL)arg16 enableAutoPunctuation:(BOOL)arg17 UILanguage:(id)arg18 enableVoiceCommands:(BOOL)arg19 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 deliverEagerPackage:(BOOL)arg14 sharedUserIds:(id)arg15 enableEmojiRecognition:(BOOL)arg16 enableAutoPunctuation:(BOOL)arg17 UILanguage:(id)arg18 enableVoiceCommands:(BOOL)arg19 dictationUIInteractionId:(id)arg20 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif