// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFDICTATIONOPTIONS_H
#define AFDICTATIONOPTIONS_H

@class NSString, NSArray, NSURL, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "STSiriContext.h"
#import "AFLanguageDetectionUserContext.h"

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *applicationDisplayName; // ivar: _applicationDisplayName
@property (copy, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (copy, nonatomic) NSString *applicationVersion; // ivar: _applicationVersion
@property (retain, nonatomic) STSiriContext *context; // ivar: _context
@property (nonatomic) BOOL continuousListening; // ivar: _continuousListening
@property (nonatomic) BOOL detectUtterances; // ivar: _detectUtterances
@property (nonatomic) NSInteger dictationInputOrigin; // ivar: _dictationInputOrigin
@property (nonatomic) BOOL farField; // ivar: _farField
@property (copy, nonatomic) NSString *fieldIdentifier; // ivar: _fieldIdentifier
@property (copy, nonatomic) NSString *fieldLabel; // ivar: _fieldLabel
@property (nonatomic) BOOL forceOfflineRecognition; // ivar: _forceOfflineRecognition
@property (nonatomic) BOOL incremental; // ivar: _incremental
@property (copy, nonatomic) NSArray *inlineItemList; // ivar: _inlineItemList
@property (copy, nonatomic) NSString *interactionIdentifier; // ivar: _interactionIdentifier
@property (copy, nonatomic) NSString *keyboardIdentifier; // ivar: _keyboardIdentifier
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *languageCodeOverride; // ivar: _languageCodeOverride
@property (copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext; // ivar: _languageDetectionUserContext
@property (nonatomic) CGFloat maximumRecognitionDuration; // ivar: _maximumRecognitionDuration
@property (copy, nonatomic) NSString *microphoneIdentifier; // ivar: _microphoneIdentifier
@property (copy, nonatomic) NSURL *modelOverrideURL; // ivar: _modelOverrideURL
@property (copy, nonatomic) NSString *offlineLanguage; // ivar: _offlineLanguage
@property (copy, nonatomic) NSURL *originalAudioFileURL; // ivar: _originalAudioFileURL
@property (copy, nonatomic) NSString *orthography; // ivar: _orthography
@property (copy, nonatomic) NSString *postfixText; // ivar: _postfixText
@property (nonatomic) BOOL preferOnDeviceRecognition; // ivar: _preferOnDeviceRecognition
@property (nonatomic) BOOL preferOnlineRecognition; // ivar: _preferOnlineRecognition
@property (copy, nonatomic) NSString *prefixText; // ivar: _prefixText
@property (copy, nonatomic) NSDictionary *recognitionOverrides; // ivar: _recognitionOverrides
@property (nonatomic) BOOL releaseAudioSessionOnRecordingCompletion; // ivar: _releaseAudioSessionOnRecordingCompletion
@property (copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) NSInteger returnKeyType; // ivar: _returnKeyType
@property (copy, nonatomic) NSString *samplingInfo; // ivar: _samplingInfo
@property (nonatomic) BOOL secureOfflineOnly; // ivar: _secureOfflineOnly
@property (copy, nonatomic) NSString *selectedText; // ivar: _selectedText
@property (nonatomic) BOOL shouldHandleCapitalization; // ivar: _shouldHandleCapitalization
@property (nonatomic) NSInteger taskHint; // ivar: _taskHint
@property (nonatomic) NSInteger transcriptionMode; // ivar: _transcriptionMode
@property (copy, nonatomic) NSDictionary *voiceSearchHeaderFields; // ivar: _voiceSearchHeaderFields
@property (copy, nonatomic) NSDictionary *voiceSearchQueryParameters; // ivar: _voiceSearchQueryParameters
@property (nonatomic) NSInteger voiceSearchTypeOptions; // ivar: _voiceSearchTypeOptions
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo; // ivar: _voiceTriggerEventInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictationOptionsWithoutTextContext;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif