// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LBLOCALSPEECHRECOGNITIONSETTINGS_H
#define LBLOCALSPEECHRECOGNITIONSETTINGS_H

@class NSString, NSArray, CLLocation, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LBLocalSpeechRecognitionSettings : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *UILanguage; // ivar: _UILanguage
@property (readonly, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (readonly, nonatomic) BOOL continuousListening; // ivar: _continuousListening
@property (readonly, nonatomic) BOOL deliverEagerPackage; // ivar: _deliverEagerPackage
@property (readonly, nonatomic) BOOL detectUtterances; // ivar: _detectUtterances
@property (readonly, nonatomic) NSString *inputOrigin; // ivar: _inputOrigin
@property (readonly, nonatomic) NSArray *jitGrammar; // ivar: _jitGrammar
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) CGFloat maximumRecognitionDuration; // ivar: _maximumRecognitionDuration
@property (readonly, nonatomic) NSString *overrideModelPath; // ivar: _overrideModelPath
@property (readonly, nonatomic) NSDictionary *recognitionOverrides; // ivar: _recognitionOverrides
@property (readonly, nonatomic) NSString *requestId; // ivar: _requestId
@property (readonly, nonatomic) BOOL secureOfflineOnly; // ivar: _secureOfflineOnly
@property (readonly, nonatomic) BOOL shouldHandleCapitalization; // ivar: _shouldHandleCapitalization
@property (readonly, nonatomic) BOOL shouldStoreAudioOnDevice; // ivar: _shouldStoreAudioOnDevice
@property (readonly, nonatomic) NSUInteger speechRecognitionTask; // ivar: _speechRecognitionTask


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 deliverEagerPackage:(BOOL)arg14 ;
-(id)initWithRequestId:(id)arg0 inputOrigin:(id)arg1 speechRecognitionTaskName:(NSUInteger)arg2 location:(id)arg3 jitGrammar:(id)arg4 overrideModelPath:(id)arg5 applicationName:(id)arg6 detectUtterances:(BOOL)arg7 continuousListening:(BOOL)arg8 shouldHandleCapitalization:(BOOL)arg9 secureOfflineOnly:(BOOL)arg10 maximumRecognitionDuration:(CGFloat)arg11 recognitionOverrides:(id)arg12 shouldStoreAudioOnDevice:(BOOL)arg13 deliverEagerPackage:(BOOL)arg14 UILanguage:(id)arg15 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif