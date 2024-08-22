// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRUIFINSTRUMENTATIONMANAGER_H
#define SRUIFINSTRUMENTATIONMANAGER_H

@class NSString, NSMutableDictionary, NSUserDefaults, AFAnalyticsTurnBasedInstrumentationContext;
@protocol AFAnalyticsDialogIdentifierAssociationProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SRUIFInstrumentationManager : NSObject <AFAnalyticsDialogIdentifierAssociationProvider>

 {
    NSString *_lastDismissedIdentifier;
    NSObject<OS_dispatch_queue> *_instrumentationManagerQueue;
    NSMutableDictionary *_aceViewDialogIdentifiers;
    NSMutableDictionary *_aceViewDialogIdentifiersForMessageConstruction;
    NSMutableDictionary *_cardInfo;
    NSUserDefaults *_userDefaults;
    BOOL _shouldInstrument;
}


@property (copy, nonatomic) NSString *clientGeneratedDialogIdentifier; // ivar: _clientGeneratedDialogIdentifier
@property (retain) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext; // ivar: _currentInstrumentationTurnContext
@property int currentSiriUIState; // ivar: _currentSiriUIState


+(id)sharedManager;
-(BOOL)_hasDismissedForTurnContext:(id)arg0 ;
-(id)_convertVirtualAudioSubTypeToString:(unsigned int)arg0 ;
-(id)_displayedDialogForAssistantUtteranceView:(id)arg0 ;
-(id)_pnrErrorMessageWithError:(id)arg0 ;
-(id)_responseContextWithPresentationType:(int)arg0 dialogPhase:(id)arg1 mode:(int)arg2 ;
-(id)_routeInfoForOutputRoute;
-(id)associatedDialogIdentifiersForAceObjectIdentifier:(id)arg0 ;
-(id)cardIDforSnippetAceID:(id)arg0 ;
-(id)init;
-(id)latestStoredTurn;
-(void)_emitInstrumentation:(id)arg0 forTurn:(id)arg1 atTime:(NSUInteger)arg2 ;
-(void)_populateDefaultRouteInformationWithRouteInfo:(id)arg0 forTTSEvent:(id)arg1 ;
-(void)_populateWirelessRouteInformationWithRouteInfo:(id)arg0 forTTSEvent:(id)arg1 ;
-(void)_prepareForTesting;
-(void)_willInstrument:(id)arg0 forTurn:(id)arg1 ;
-(void)emitCasinoRelationshipEventWithViewIDFrom:(id)arg0 ViewIDTo:(id)arg1 casinoFromType:(int)arg2 ;
-(void)emitFinalSpeechTranscriptionEventForAceObjectWithIdentifier:(id)arg0 ;
-(void)emitInstrumentation:(id)arg0 ;
-(void)emitInstrumentation:(id)arg0 atTime:(NSUInteger)arg1 ;
-(void)emitPartialSpeechTranscriptionEventForAceObjectWithIdentifier:(id)arg0 ;
-(void)emitPunchOutEventWithURL:(id)arg0 appID:(id)arg1 ;
-(void)emitPunchOutEventWithURL:(id)arg0 appID:(id)arg1 punchoutOrigin:(int)arg2 ;
-(void)emitRequestFailedWithError:(id)arg0 ;
-(void)emitRevealSpeechTranscriptionEventForAceObjectWithIdentifier:(id)arg0 ;
-(void)emitTextToSpeechBeginEvent:(id)arg0 ;
-(void)emitTextToSpeechEndEvent:(id)arg0 ;
-(void)emitTextToSpeechRequestReceivedEventFor:(id)arg0 atTime:(NSUInteger)arg1 ;
-(void)emitUIStateTransitionEventWithFromState:(int)arg0 toState:(int)arg1 withPresentationType:(int)arg2 ;
-(void)emitUIStateTransitionForSiriDismissalWithReason:(int)arg0 ;
-(void)emitUUFRPresentedEventWith:(id)arg0 snippetClass:(id)arg1 dialogIdentifier:(id)arg2 dialogPhase:(id)arg3 ;
-(void)emitUUFRShownForAceObject:(id)arg0 presentationType:(int)arg1 dialogPhase:(id)arg2 ;
-(void)emitUUFRShownForAceObject:(id)arg0 presentationType:(int)arg1 dialogPhase:(id)arg2 mode:(int)arg3 viewRegion:(int)arg4 ;
-(void)emitUUFRSpokenForAceObject:(id)arg0 presentationType:(int)arg1 dialogPhase:(id)arg2 mode:(int)arg3 ;
-(void)emitUserViewRegionInteractionEventWithViewRegion:(int)arg0 userViewInteraction:(int)arg1 ;
-(void)setDialogIdentifiers:(id)arg0 forAceViewSpeakableTextWithIdentifier:(id)arg1 ;
-(void)storeCardID:(id)arg0 forSnippetAceID:(id)arg1 ;
-(void)storeClientGeneratedDUC:(id)arg0 ;
-(void)storeCurrentInstrumentationTurnContext:(id)arg0 ;


@end


#endif