// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBVOICECONTROLVIEWCONTROLLER_H
#define SBVOICECONTROLVIEWCONTROLLER_H

@class UIViewController, NSString, UIView, NSTimer, SUICFlamesView, NSDictionary, VSRecognitionSession, UILabel, SiriUISuggestionsView, NSArray;
@protocol SiriUISuggestionsViewDelegate, SUICFlamesViewDelegate, VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate, SBVoiceControlViewControllerDelegate;


#import "SBVoiceControlPresentationSource.h"

@interface SBVoiceControlViewController : UIViewController <SiriUISuggestionsViewDelegate, SUICFlamesViewDelegate, VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate>

 {
    NSString *_avAudioRouteName;
    NSString *_avAudioRouteUID;
    UIView *_contentView;
    NSTimer *_delayedConfirmationActionTimer;
    SUICFlamesView *_flamesView;
    BOOL _hasConfiguredRouting;
    NSDictionary *_localizationKeys;
    BOOL _isHeadsetButtonPressedDown;
    VSRecognitionSession *_session;
    SBVoiceControlPresentationSource *_source;
    NSInteger _startingKeywordIndex;
    UILabel *_subtitleLabel;
    SiriUISuggestionsView *_suggestionsView;
    UILabel *_titleLabel;
    BOOL _wasRecognizing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *nextRecognitionAudioInputPaths; // ivar: _nextRecognitionAudioInputPaths
@property (readonly, nonatomic) BOOL prefersProximityDetectionEnabled; // ivar: _prefersProximityDetectionEnabled
@property (nonatomic) BOOL shouldAllowSensitiveActions; // ivar: _shouldAllowSensitiveActions
@property (nonatomic) BOOL shouldDisableHandlerActions; // ivar: _shouldDisableHandlerActions
@property (nonatomic) BOOL shouldDisableVoiceControlForBluetoothRequests; // ivar: _shouldDisableVoiceControlForBluetoothRequests
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SBVoiceControlViewControllerDelegate> *voiceControlDelegate; // ivar: _voiceControlDelegate
@property (nonatomic, getter=isVoiceControlLoggingEnabled) BOOL voiceControlLoggingEnabled; // ivar: _voiceControlLoggingEnabled


-(BOOL)_canShowWhileLocked;
-(BOOL)_hasPickableBluetoothDevice;
-(BOOL)handleHomeButtonPress;
-(BOOL)recognitionSessionWillBeginAction:(id)arg0 ;
-(CGFloat)_subtitleBaseline;
-(CGFloat)_titleBaseline;
-(float)audioLevelForFlamesView:(id)arg0 ;
-(id)_availableRouteDictionaries;
-(id)_currentPreferredRouteDictionary;
-(id)_localizedStringForKey:(id)arg0 ;
-(id)_newRecognitionSession;
-(id)_popNextRecognitionAudioInputPath;
-(id)_preferredRouteDictionaryWithAvailableRouteDictionaries:(id)arg0 preferredAVAudioRouteName:(id)arg1 preferredAVAudioRouteUID:(id)arg2 shouldPreferBluetooth:(BOOL)arg3 ;
-(id)initWithSource:(id)arg0 ;
-(id)nextSuggestionsForSuggestionsView:(id)arg0 maxSuggestions:(NSUInteger)arg1 ;
-(struct CGRect )_flamesViewFrame;
-(void)_avSystemControllerHeadphoneJackIsConnectedDidChangeNotification:(id)arg0 ;
-(void)_avSystemControllerPickableRoutesDidChangeNotification:(id)arg0 ;
-(void)_configureRoutingIfNeeded;
-(void)_continueRecognitionAction;
-(void)_continueWithRecognitionAction;
-(void)_deviceProximityStateDidChangeNotification:(id)arg0 ;
-(void)_handleButtonUpCancel;
-(void)_performConfirmationAction;
-(void)_performNoMatchFound;
-(void)_recognitionSessionKeywordsDidChangeNotification:(id)arg0 ;
-(void)_requestDismissal;
-(void)_resetSession;
-(void)_setAVAudioRouteUID:(id)arg0 ;
-(void)_setFeedbackVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setNeedsRoutingUpdate;
-(void)_setSession:(id)arg0 ;
-(void)_setStatusText:(id)arg0 ;
-(void)_setTitleText:(id)arg0 ;
-(void)_speakFeedbackText;
-(void)_speakText:(id)arg0 ;
-(void)_startSession;
-(void)dealloc;
-(void)handleHeadsetButtonUpFromButtonDownSource:(BOOL)arg0 ;
-(void)performDismissalTransitionAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)performPresentationTransitionAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)recognitionSession:(id)arg0 didCompleteActionWithError:(id)arg1 ;
-(void)recognitionSession:(id)arg0 didFinishSpeakingFeedbackStringWithError:(id)arg1 ;
-(void)recognitionSession:(id)arg0 openURL:(id)arg1 completion:(id)arg2 ;
-(void)recognitionSessionDidBeginAction:(id)arg0 ;
-(void)resetSessionWithSource:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif