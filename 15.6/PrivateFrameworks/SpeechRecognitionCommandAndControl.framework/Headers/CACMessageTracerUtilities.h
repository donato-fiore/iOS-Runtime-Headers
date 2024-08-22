// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACMESSAGETRACERUTILITIES_H
#define CACMESSAGETRACERUTILITIES_H

@class NSOperationQueue, NSDictionary, NSString;
@protocol _SFSpeechRecognitionTaskDelegatePrivate, SFSpeechRecognitionTaskDelegate;

#import <Foundation/Foundation.h>


@interface CACMessageTracerUtilities : NSObject <_SFSpeechRecognitionTaskDelegatePrivate, SFSpeechRecognitionTaskDelegate>

 {
    NSOperationQueue *_remoteSpeechOperationQueue;
}


@property (retain, nonatomic) NSDictionary *customUserCommandProperties; // ivar: _customUserCommandProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (retain, nonatomic) NSDictionary *recognitionProperties; // ivar: _recognitionProperties
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *targetApplicationIdentifier; // ivar: _targetApplicationIdentifier
@property (retain, nonatomic) NSString *textAreaIdentifierOrLabel; // ivar: _textAreaIdentifierOrLabel
@property (retain, nonatomic) NSString *textAreaSelectionRange; // ivar: _textAreaSelectionRange


+(id)sharedCACMessageTracerUtilities;
-(id)_mutablePlistCompatibleObjectFromObject:(id)arg0 ;
-(id)dictionaryOfNormallyStaticPreferenceValuesForCoreAnalytics;
-(id)init;
-(void)_prepareToSendAudioDataToAppleServers;
-(void)logCommandWithIdentifier:(id)arg0 ;
-(void)removeCachedAudioFile;
-(void)sendCoreAnalyticsForRecognizedCommandIdentifier:(id)arg0 appIdentifier:(id)arg1 ;
-(void)sendRecentAudioDataToAppleServers;
-(void)speechRecognitionTask:(id)arg0 didFinishRecognition:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg0 didFinishSuccessfully:(BOOL)arg1 ;
-(void)speechRecognitionTaskWasCancelled:(id)arg0 ;


@end


#endif