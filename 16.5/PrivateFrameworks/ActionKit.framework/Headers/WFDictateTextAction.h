// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDICTATETEXTACTION_H
#define WFDICTATETEXTACTION_H

@class WFAction, NSString, AFDictationConnection;
@protocol AFDictationDelegate, WFDictateTextActionUserInterface;



@interface WFDictateTextAction : WFAction <AFDictationDelegate>



@property (retain, nonatomic) NSObject<WFDictateTextActionUserInterface> *actionUserInterface; // ivar: _actionUserInterface
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AFDictationConnection *dictationConnection; // ivar: _dictationConnection
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *latestTranscription; // ivar: _latestTranscription
@property (readonly) Class superclass;


+(BOOL)outputIsExemptFromTaintTrackingInheritance;
+(id)userInterfaceProtocol;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)recognitionError;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(void)cancel;
-(void)dictationConnection:(id)arg0 didRecognizePackage:(id)arg1 ;
-(void)dictationConnection:(id)arg0 didRecognizeTokens:(id)arg1 languageModel:(id)arg2 ;
-(void)dictationConnection:(id)arg0 speechRecognitionDidFail:(id)arg1 ;
-(void)dictationConnection:(id)arg0 speechRecordingDidFail:(id)arg1 ;
-(void)finishRunningWithError:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithRemoteUserInterface:(id)arg0 locale:(id)arg1 stopListeningValue:(id)arg2 ;
-(void)runWithSiriUserInterface:(id)arg0 input:(id)arg1 ;
-(void)stopListening;


@end


#endif