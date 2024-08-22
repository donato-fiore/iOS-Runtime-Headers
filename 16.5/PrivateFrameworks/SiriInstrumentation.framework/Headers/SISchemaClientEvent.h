// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMACLIENTEVENT_H
#define SISCHEMACLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "SISchemaAnnounceCarPlayBannerTapped.h"
#import "SISchemaAnnounceCarPlayGlyphSettingToggled.h"
#import "SISchemaAudioFirstBufferRecorded.h"
#import "SISchemaAudioStopRecording.h"
#import "SISchemaAudioStopRecordingStarted.h"
#import "SISchemaCarPlayHeadUnitContext.h"
#import "SISchemaCasinoRelationship.h"
#import "SISchemaConversationTrace.h"
#import "SISchemaClientFlow.h"
#import "SISchemaDeviceDynamicContext.h"
#import "SISchemaDeviceFixedContext.h"
#import "SISchemaDeviceLockStateChanged.h"
#import "SISchemaDialogOutput.h"
#import "SISchemaDictationAlternativeSelected.h"
#import "SISchemaUEIDictationAlternativeConfusionPairsSelected.h"
#import "SISchemaDictationAlternativesViewed.h"
#import "SISchemaDictationContentEdited.h"
#import "SISchemaDictationContext.h"
#import "SISchemaDictationEndPointCancel.h"
#import "SISchemaDictationEndPointStop.h"
#import "SISchemaDictationTranscriptionMetadata.h"
#import "SISchemaEngagedAccessoryContext.h"
#import "SISchemaClientEventMetadata.h"
#import "SISchemaUEIHostingPlatformViewAppearContext.h"
#import "SISchemaUEIHostingPlatformViewDisappearContext.h"
#import "SISchemaInstrumentationMessage.h"
#import "SISchemaIntercomMessageRecorded.h"
#import "SISchemaInvocation.h"
#import "SISchemaKeyboardDismissed.h"
#import "SISchemaLocation.h"
#import "SISchemaPNRFatalError.h"
#import "SISchemaPNRSpeechRecognitionSourceContext.h"
#import "SISchemaPNRTextToSpeechRequestReceived.h"
#import "SISchemaPunchOut.h"
#import "SISchemaSiriCue.h"
#import "SISchemaSpeechTranscription.h"
#import "SISchemaTextToSpeechBegin.h"
#import "SISchemaTextToSpeechEnd.h"
#import "SISchemaClientTransportEventMetadata.h"
#import "SISchemaTurnMTERequest.h"
#import "SISchemaUEIDictationAlternativeTextPairsSelected.h"
#import "SISchemaUEIDictationInputModeSwitchContext.h"
#import "SISchemaUEIDictationPartialResultUpdated.h"
#import "SISchemaUEIDictationDiscoveryToolTipDisplayContext.h"
#import "SISchemaUEIDictationTranscriptionTokenized.h"
#import "SISchemaUEIDictationVoiceCommandExecuted.h"
#import "SISchemaUEILaunchContext.h"
#import "SISchemaUEIRequestCategorization.h"
#import "SISchemaUEIUIRenderingContext.h"
#import "SISchemaUEIUUFRReady.h"
#import "SISchemaUEIUserSpeakingContext.h"
#import "SISchemaUIStateTransition.h"
#import "SISchemaUserViewRegionInteraction.h"
#import "SISchemaUUFRCompletion.h"
#import "SISchemaUUFRFatalError.h"
#import "SISchemaUUFRPresented.h"
#import "SISchemaUUFRSaid.h"
#import "SISchemaUUFRSelected.h"
#import "SISchemaUUFRShown.h"
#import "SISchemaUUFRShownTier1.h"

@interface SISchemaClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) SISchemaAnnounceCarPlayBannerTapped *announceCarPlayBannerTapped; // ivar: _announceCarPlayBannerTapped
@property (retain, nonatomic) SISchemaAnnounceCarPlayGlyphSettingToggled *announceCarPlayGlyphSettingToggled; // ivar: _announceCarPlayGlyphSettingToggled
@property (retain, nonatomic) SISchemaAudioFirstBufferRecorded *audioFirstBufferRecorded; // ivar: _audioFirstBufferRecorded
@property (retain, nonatomic) SISchemaAudioStopRecording *audioStopRecording; // ivar: _audioStopRecording
@property (retain, nonatomic) SISchemaAudioStopRecordingStarted *audioStopRecordingStarted; // ivar: _audioStopRecordingStarted
@property (retain, nonatomic) SISchemaCarPlayHeadUnitContext *carPlayHeadUnitContext; // ivar: _carPlayHeadUnitContext
@property (retain, nonatomic) SISchemaCasinoRelationship *casinoRelationship; // ivar: _casinoRelationship
@property (retain, nonatomic) SISchemaConversationTrace *clientConversationTrace; // ivar: _clientConversationTrace
@property (retain, nonatomic) SISchemaClientFlow *clientFlow; // ivar: _clientFlow
@property (retain, nonatomic) SISchemaDeviceDynamicContext *deviceDynamicContext; // ivar: _deviceDynamicContext
@property (retain, nonatomic) SISchemaDeviceFixedContext *deviceFixedContext; // ivar: _deviceFixedContext
@property (retain, nonatomic) SISchemaDeviceLockStateChanged *deviceLockStateChanged; // ivar: _deviceLockStateChanged
@property (retain, nonatomic) SISchemaDialogOutput *dialogOutput; // ivar: _dialogOutput
@property (retain, nonatomic) SISchemaDictationAlternativeSelected *dictationAlternativeSelected; // ivar: _dictationAlternativeSelected
@property (retain, nonatomic) SISchemaUEIDictationAlternativeConfusionPairsSelected *dictationAlternativesSelected; // ivar: _dictationAlternativesSelected
@property (retain, nonatomic) SISchemaDictationAlternativesViewed *dictationAlternativesViewed; // ivar: _dictationAlternativesViewed
@property (retain, nonatomic) SISchemaDictationContentEdited *dictationContentEdited; // ivar: _dictationContentEdited
@property (retain, nonatomic) SISchemaDictationContext *dictationContext; // ivar: _dictationContext
@property (retain, nonatomic) SISchemaDictationEndPointCancel *dictationEndPointCancel; // ivar: _dictationEndPointCancel
@property (retain, nonatomic) SISchemaDictationEndPointStop *dictationEndPointStop; // ivar: _dictationEndPointStop
@property (retain, nonatomic) SISchemaDictationTranscriptionMetadata *dictationTranscriptionMetadata; // ivar: _dictationTranscriptionMetadata
@property (retain, nonatomic) SISchemaEngagedAccessoryContext *engagedAccessoryContext; // ivar: _engagedAccessoryContext
@property (retain, nonatomic) SISchemaClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasAnnounceCarPlayBannerTapped; // ivar: _hasAnnounceCarPlayBannerTapped
@property (nonatomic) BOOL hasAnnounceCarPlayGlyphSettingToggled; // ivar: _hasAnnounceCarPlayGlyphSettingToggled
@property (nonatomic) BOOL hasAudioFirstBufferRecorded; // ivar: _hasAudioFirstBufferRecorded
@property (nonatomic) BOOL hasAudioStopRecording; // ivar: _hasAudioStopRecording
@property (nonatomic) BOOL hasAudioStopRecordingStarted; // ivar: _hasAudioStopRecordingStarted
@property (nonatomic) BOOL hasCarPlayHeadUnitContext; // ivar: _hasCarPlayHeadUnitContext
@property (nonatomic) BOOL hasCasinoRelationship; // ivar: _hasCasinoRelationship
@property (nonatomic) BOOL hasClientConversationTrace; // ivar: _hasClientConversationTrace
@property (nonatomic) BOOL hasClientFlow; // ivar: _hasClientFlow
@property (nonatomic) BOOL hasDeviceDynamicContext; // ivar: _hasDeviceDynamicContext
@property (nonatomic) BOOL hasDeviceFixedContext; // ivar: _hasDeviceFixedContext
@property (nonatomic) BOOL hasDeviceLockStateChanged; // ivar: _hasDeviceLockStateChanged
@property (nonatomic) BOOL hasDialogOutput; // ivar: _hasDialogOutput
@property (nonatomic) BOOL hasDictationAlternativeSelected; // ivar: _hasDictationAlternativeSelected
@property (nonatomic) BOOL hasDictationAlternativesSelected; // ivar: _hasDictationAlternativesSelected
@property (nonatomic) BOOL hasDictationAlternativesViewed; // ivar: _hasDictationAlternativesViewed
@property (nonatomic) BOOL hasDictationContentEdited; // ivar: _hasDictationContentEdited
@property (nonatomic) BOOL hasDictationContext; // ivar: _hasDictationContext
@property (nonatomic) BOOL hasDictationEndPointCancel; // ivar: _hasDictationEndPointCancel
@property (nonatomic) BOOL hasDictationEndPointStop; // ivar: _hasDictationEndPointStop
@property (nonatomic) BOOL hasDictationTranscriptionMetadata; // ivar: _hasDictationTranscriptionMetadata
@property (nonatomic) BOOL hasEngagedAccessoryContext; // ivar: _hasEngagedAccessoryContext
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasHostPlatformViewAppearContext; // ivar: _hasHostPlatformViewAppearContext
@property (nonatomic) BOOL hasHostPlatformViewDisappearContext; // ivar: _hasHostPlatformViewDisappearContext
@property (nonatomic) BOOL hasIntercomMessageRecorded; // ivar: _hasIntercomMessageRecorded
@property (nonatomic) BOOL hasInvocation; // ivar: _hasInvocation
@property (nonatomic) BOOL hasKeyboardDismissed; // ivar: _hasKeyboardDismissed
@property (nonatomic) BOOL hasLocation; // ivar: _hasLocation
@property (nonatomic) BOOL hasPnrFatalError; // ivar: _hasPnrFatalError
@property (nonatomic) BOOL hasPnrSpeechRecognitionSourceContext; // ivar: _hasPnrSpeechRecognitionSourceContext
@property (nonatomic) BOOL hasPnrTextToSpeechRequestReceived; // ivar: _hasPnrTextToSpeechRequestReceived
@property (nonatomic) BOOL hasPunchOut; // ivar: _hasPunchOut
@property (nonatomic) BOOL hasSiriCue; // ivar: _hasSiriCue
@property (nonatomic) BOOL hasSpeechTranscription; // ivar: _hasSpeechTranscription
@property (nonatomic) BOOL hasTextToSpeechBegin; // ivar: _hasTextToSpeechBegin
@property (nonatomic) BOOL hasTextToSpeechEnd; // ivar: _hasTextToSpeechEnd
@property (nonatomic) BOOL hasTransportMetadata; // ivar: _hasTransportMetadata
@property (nonatomic) BOOL hasTurnMTERequest; // ivar: _hasTurnMTERequest
@property (nonatomic) BOOL hasUeiDictationAlternativeTextPairsSelected; // ivar: _hasUeiDictationAlternativeTextPairsSelected
@property (nonatomic) BOOL hasUeiDictationInputModeSwitchContext; // ivar: _hasUeiDictationInputModeSwitchContext
@property (nonatomic) BOOL hasUeiDictationPartialResultUpdated; // ivar: _hasUeiDictationPartialResultUpdated
@property (nonatomic) BOOL hasUeiDictationToolTipDisplayContext; // ivar: _hasUeiDictationToolTipDisplayContext
@property (nonatomic) BOOL hasUeiDictationTranscriptionTokenized; // ivar: _hasUeiDictationTranscriptionTokenized
@property (nonatomic) BOOL hasUeiDictationVoiceCommandExecuted; // ivar: _hasUeiDictationVoiceCommandExecuted
@property (nonatomic) BOOL hasUeiLaunchContext; // ivar: _hasUeiLaunchContext
@property (nonatomic) BOOL hasUeiRequestCategorization; // ivar: _hasUeiRequestCategorization
@property (nonatomic) BOOL hasUeiUIRenderingContext; // ivar: _hasUeiUIRenderingContext
@property (nonatomic) BOOL hasUeiUUFRReady; // ivar: _hasUeiUUFRReady
@property (nonatomic) BOOL hasUeiUserSpeakingContext; // ivar: _hasUeiUserSpeakingContext
@property (nonatomic) BOOL hasUiStateTransition; // ivar: _hasUiStateTransition
@property (nonatomic) BOOL hasUserViewRegionInteraction; // ivar: _hasUserViewRegionInteraction
@property (nonatomic) BOOL hasUufrCompletion; // ivar: _hasUufrCompletion
@property (nonatomic) BOOL hasUufrFatalError; // ivar: _hasUufrFatalError
@property (nonatomic) BOOL hasUufrPresented; // ivar: _hasUufrPresented
@property (nonatomic) BOOL hasUufrSaid; // ivar: _hasUufrSaid
@property (nonatomic) BOOL hasUufrSelected; // ivar: _hasUufrSelected
@property (nonatomic) BOOL hasUufrShown; // ivar: _hasUufrShown
@property (nonatomic) BOOL hasUufrShownTier1; // ivar: _hasUufrShownTier1
@property (retain, nonatomic) SISchemaUEIHostingPlatformViewAppearContext *hostPlatformViewAppearContext; // ivar: _hostPlatformViewAppearContext
@property (retain, nonatomic) SISchemaUEIHostingPlatformViewDisappearContext *hostPlatformViewDisappearContext; // ivar: _hostPlatformViewDisappearContext
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SISchemaIntercomMessageRecorded *intercomMessageRecorded; // ivar: _intercomMessageRecorded
@property (retain, nonatomic) SISchemaInvocation *invocation; // ivar: _invocation
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaKeyboardDismissed *keyboardDismissed; // ivar: _keyboardDismissed
@property (retain, nonatomic) SISchemaLocation *location; // ivar: _location
@property (retain, nonatomic) SISchemaPNRFatalError *pnrFatalError; // ivar: _pnrFatalError
@property (retain, nonatomic) SISchemaPNRSpeechRecognitionSourceContext *pnrSpeechRecognitionSourceContext; // ivar: _pnrSpeechRecognitionSourceContext
@property (retain, nonatomic) SISchemaPNRTextToSpeechRequestReceived *pnrTextToSpeechRequestReceived; // ivar: _pnrTextToSpeechRequestReceived
@property (retain, nonatomic) SISchemaPunchOut *punchOut; // ivar: _punchOut
@property (retain, nonatomic) SISchemaSiriCue *siriCue; // ivar: _siriCue
@property (retain, nonatomic) SISchemaSpeechTranscription *speechTranscription; // ivar: _speechTranscription
@property (retain, nonatomic) SISchemaTextToSpeechBegin *textToSpeechBegin; // ivar: _textToSpeechBegin
@property (retain, nonatomic) SISchemaTextToSpeechEnd *textToSpeechEnd; // ivar: _textToSpeechEnd
@property (retain, nonatomic) SISchemaClientTransportEventMetadata *transportMetadata; // ivar: _transportMetadata
@property (retain, nonatomic) SISchemaTurnMTERequest *turnMTERequest; // ivar: _turnMTERequest
@property (retain, nonatomic) SISchemaUEIDictationAlternativeTextPairsSelected *ueiDictationAlternativeTextPairsSelected; // ivar: _ueiDictationAlternativeTextPairsSelected
@property (retain, nonatomic) SISchemaUEIDictationInputModeSwitchContext *ueiDictationInputModeSwitchContext; // ivar: _ueiDictationInputModeSwitchContext
@property (retain, nonatomic) SISchemaUEIDictationPartialResultUpdated *ueiDictationPartialResultUpdated; // ivar: _ueiDictationPartialResultUpdated
@property (retain, nonatomic) SISchemaUEIDictationDiscoveryToolTipDisplayContext *ueiDictationToolTipDisplayContext; // ivar: _ueiDictationToolTipDisplayContext
@property (retain, nonatomic) SISchemaUEIDictationTranscriptionTokenized *ueiDictationTranscriptionTokenized; // ivar: _ueiDictationTranscriptionTokenized
@property (retain, nonatomic) SISchemaUEIDictationVoiceCommandExecuted *ueiDictationVoiceCommandExecuted; // ivar: _ueiDictationVoiceCommandExecuted
@property (retain, nonatomic) SISchemaUEILaunchContext *ueiLaunchContext; // ivar: _ueiLaunchContext
@property (retain, nonatomic) SISchemaUEIRequestCategorization *ueiRequestCategorization; // ivar: _ueiRequestCategorization
@property (retain, nonatomic) SISchemaUEIUIRenderingContext *ueiUIRenderingContext; // ivar: _ueiUIRenderingContext
@property (retain, nonatomic) SISchemaUEIUUFRReady *ueiUUFRReady; // ivar: _ueiUUFRReady
@property (retain, nonatomic) SISchemaUEIUserSpeakingContext *ueiUserSpeakingContext; // ivar: _ueiUserSpeakingContext
@property (retain, nonatomic) SISchemaUIStateTransition *uiStateTransition; // ivar: _uiStateTransition
@property (retain, nonatomic) SISchemaUserViewRegionInteraction *userViewRegionInteraction; // ivar: _userViewRegionInteraction
@property (retain, nonatomic) SISchemaUUFRCompletion *uufrCompletion; // ivar: _uufrCompletion
@property (retain, nonatomic) SISchemaUUFRFatalError *uufrFatalError; // ivar: _uufrFatalError
@property (retain, nonatomic) SISchemaUUFRPresented *uufrPresented; // ivar: _uufrPresented
@property (retain, nonatomic) SISchemaUUFRSaid *uufrSaid; // ivar: _uufrSaid
@property (retain, nonatomic) SISchemaUUFRSelected *uufrSelected; // ivar: _uufrSelected
@property (retain, nonatomic) SISchemaUUFRShown *uufrShown; // ivar: _uufrShown
@property (retain, nonatomic) SISchemaUUFRShownTier1 *uufrShownTier1; // ivar: _uufrShownTier1
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(Class)getEventTypeClassForTag:(int)arg0 ;
+(id)getTagForEventTypeClass:(Class)arg0 ;
+(int)joinability;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getComponentId;
-(id)getEventType;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)componentName;
-(int)getAnyEventType;
-(void)deleteAnnounceCarPlayBannerTapped;
-(void)deleteAnnounceCarPlayGlyphSettingToggled;
-(void)deleteAudioFirstBufferRecorded;
-(void)deleteAudioStopRecording;
-(void)deleteAudioStopRecordingStarted;
-(void)deleteCarPlayHeadUnitContext;
-(void)deleteCasinoRelationship;
-(void)deleteClientConversationTrace;
-(void)deleteClientFlow;
-(void)deleteDeviceDynamicContext;
-(void)deleteDeviceFixedContext;
-(void)deleteDeviceLockStateChanged;
-(void)deleteDialogOutput;
-(void)deleteDictationAlternativeSelected;
-(void)deleteDictationAlternativesSelected;
-(void)deleteDictationAlternativesViewed;
-(void)deleteDictationContentEdited;
-(void)deleteDictationContext;
-(void)deleteDictationEndPointCancel;
-(void)deleteDictationEndPointStop;
-(void)deleteDictationTranscriptionMetadata;
-(void)deleteEngagedAccessoryContext;
-(void)deleteEventMetadata;
-(void)deleteHostPlatformViewAppearContext;
-(void)deleteHostPlatformViewDisappearContext;
-(void)deleteIntercomMessageRecorded;
-(void)deleteInvocation;
-(void)deleteKeyboardDismissed;
-(void)deleteLocation;
-(void)deletePnrFatalError;
-(void)deletePnrSpeechRecognitionSourceContext;
-(void)deletePnrTextToSpeechRequestReceived;
-(void)deletePunchOut;
-(void)deleteSiriCue;
-(void)deleteSpeechTranscription;
-(void)deleteTextToSpeechBegin;
-(void)deleteTextToSpeechEnd;
-(void)deleteTransportMetadata;
-(void)deleteTurnMTERequest;
-(void)deleteUeiDictationAlternativeTextPairsSelected;
-(void)deleteUeiDictationInputModeSwitchContext;
-(void)deleteUeiDictationPartialResultUpdated;
-(void)deleteUeiDictationToolTipDisplayContext;
-(void)deleteUeiDictationTranscriptionTokenized;
-(void)deleteUeiDictationVoiceCommandExecuted;
-(void)deleteUeiLaunchContext;
-(void)deleteUeiRequestCategorization;
-(void)deleteUeiUIRenderingContext;
-(void)deleteUeiUUFRReady;
-(void)deleteUeiUserSpeakingContext;
-(void)deleteUiStateTransition;
-(void)deleteUserViewRegionInteraction;
-(void)deleteUufrCompletion;
-(void)deleteUufrFatalError;
-(void)deleteUufrPresented;
-(void)deleteUufrSaid;
-(void)deleteUufrSelected;
-(void)deleteUufrShown;
-(void)deleteUufrShownTier1;
-(void)setEventType:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif