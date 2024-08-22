// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKACTION_H
#define WFLINKACTION_H

@class NSArray, NSDictionary, LNActionSummary, INAppIntentDescriptor, LNConnection, LNAppIntentConnectionPolicy, NSString, NSSet, LNActionMetadata, NSNumber, NSMutableDictionary;
@protocol LNActionExecutorDelegate, WFStandaloneShortcutAction, WFDynamicEnumerationDataSource;


#import "WFAction.h"
#import "WFActionParameterSummary.h"

@interface WFLinkAction : WFAction <LNActionExecutorDelegate, WFStandaloneShortcutAction, WFDynamicEnumerationDataSource>

 {
    NSArray *_parameterDefinitions;
    NSDictionary *_inputDictionary;
    NSDictionary *_outputDictionary;
}


@property (retain, nonatomic) LNActionSummary *actionSummary; // ivar: _actionSummary
@property (readonly, nonatomic) INAppIntentDescriptor *appIntentDescriptor; // ivar: _appIntentDescriptor
@property (readonly, nonatomic) LNConnection *connection; // ivar: _connection
@property (readonly, nonatomic) LNAppIntentConnectionPolicy *connectionPolicy; // ivar: _connectionPolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *developerSpecifiedTitle;
@property (copy, nonatomic) NSSet *fetchingDisplayRepresentationParameterKeys; // ivar: _fetchingDisplayRepresentationParameterKeys
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *inputParameterEntityMetadata; // ivar: _inputParameterEntityMetadata
@property (readonly, nonatomic) BOOL isPlatformProvidedUnderstandingAction;
@property (readonly, nonatomic) NSString *mangledTypeName; // ivar: _mangledTypeName
@property (readonly, nonatomic) LNActionMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) BOOL openWhenRunParameterIsHidden;
@property (readonly, nonatomic) BOOL opensWhenRun;
@property (readonly, copy, nonatomic) NSNumber *opensWhenRunIfApplicable;
@property (copy, nonatomic) NSDictionary *outputMetadata; // ivar: _outputMetadata
@property (retain, nonatomic) NSMutableDictionary *parameterIdentifiersNeedingValues; // ivar: _parameterIdentifiersNeedingValues
@property (retain, nonatomic) WFActionParameterSummary *parameterSummary; // ivar: _parameterSummary
@property (readonly, nonatomic) BOOL showWhenRunParameterIsHidden;
@property (readonly, nonatomic) BOOL showsWhenRun;
@property (readonly, copy, nonatomic) NSNumber *showsWhenRunIfApplicable;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)classForLinkActionWithIdentifier:(id)arg0 metadata:(id)arg1 ;
+(id)inputParameterMetadataWithActionMetadata:(id)arg0 ;
+(id)linkActionClassOverrides;
+(id)linkProtocolClassOverrides;
-(BOOL)actionIsExecutedFromAnotherDevice;
-(BOOL)enumeration:(id)arg0 shouldStripSenstitiveContentFromValue:(id)arg1 ;
-(BOOL)executor:(id)arg0 shouldRunShowOutputAction:(id)arg1 ;
-(BOOL)mightSuppressRunningProgress;
-(BOOL)populatesInputFromInputParameter;
-(BOOL)requiresUnlock;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(BOOL)shouldAskForValuesWhileProcessingParameterStates;
-(BOOL)shouldLocalizeValueForSelector:(SEL)arg0 ;
-(BOOL)shouldStripSensitiveContentFromParameterSerialization;
-(BOOL)valueShouldStripSensitiveContent:(id)arg0 ;
-(id)alertForLinkActionConfirmationWithActionMetadata:(id)arg0 dialogString:(id)arg1 request:(id)arg2 ;
-(id)alertForLinkActionConfirmationWithParameterMetadata:(id)arg0 dialogString:(id)arg1 request:(id)arg2 ;
-(id)alertForLinkConfirmationDialogRequest:(id)arg0 preferredStyle:(NSInteger)arg1 handler:(id)arg2 ;
-(id)appBundleIdentifier;
-(id)bundleIdentifier;
-(id)copyWithSerializedParameters:(id)arg0 ;
-(id)createStateForParameter:(id)arg0 fromSerializedRepresentation:(id)arg1 ;
-(id)currentParameterStatesWithOverriddenParameterStateValue:(id)arg0 forKey:(id)arg1 ;
-(id)enumeration:(id)arg0 accessoryImageForPossibleState:(id)arg1 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)enumeration:(id)arg0 localizedSubtitleLabelForPossibleState:(id)arg1 ;
-(id)generatedResourceNodes;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 metadata:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 outputMetadata:(id)arg4 inputParameterEntityMetadata:(id)arg5 appIntentDescriptor:(id)arg6 ;
-(id)inputDictionary;
-(id)linkActionWithCurrentParameterValues;
-(id)linkActionWithParameterStates:(id)arg0 ;
-(id)linkActionWithParameters:(id)arg0 ;
-(id)localizedKeywords;
-(id)localizedSubcategoryForCategory:(id)arg0 ;
-(id)name;
-(id)outputDictionary;
-(id)parameterDefinitions;
-(id)parameterMetadataForIdentifier:(id)arg0 ;
-(id)parametersNeedingDisplayRepresentation;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(id)sessionKitSessionInvocationType;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)valueForParameterData:(id)arg0 withParameterState:(id)arg1 ;
-(void)askForParameterValueWithRequest:(id)arg0 dialogString:(id)arg1 ;
-(void)configureParameter:(id)arg0 ;
-(void)confirmActionWithRequest:(id)arg0 dialogString:(id)arg1 ;
-(void)confirmParameterValueWithRequest:(id)arg0 dialogString:(id)arg1 ;
-(void)disambiguateParameterValueWithRequest:(id)arg0 dialogString:(id)arg1 ;
-(void)documentsValueFromRepresentation:(id)arg0 valueType:(id)arg1 completionHandler:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executor:(id)arg0 didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)executor:(id)arg0 environmentForViewSnippetWithCompletion:(id)arg1 ;
-(void)executor:(id)arg0 needsActionConfirmationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsConfirmationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsDisambiguationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsValueWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 preferredContentSizeForViewSnippetWithCompletion:(id)arg1 ;
-(void)fetchMissingDisplayRepresentationValuesWithCompletionHandler:(id)arg0 ;
-(void)finishRunningWithError:(id)arg0 ;
-(void)finishRunningWithExecutor:(id)arg0 result:(id)arg1 error:(id)arg2 ;
-(void)forceUpdateParameterVisibility;
-(void)generateStandaloneShortcutRepresentation:(id)arg0 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)getDocumentsLinkValueFromParameterMetadata:(id)arg0 processedParameters:(id)arg1 parameterState:(id)arg2 valueType:(id)arg3 completionHandler:(id)arg4 ;
-(void)getLinkActionForArchivingWithCompletionHandler:(id)arg0 ;
-(void)getLinkActionWithProcessedParameters:(id)arg0 completionHandler:(id)arg1 ;
-(void)getLinkActionWithProcessedParameters:(id)arg0 forFocusConfiguration:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)getLinkActionWithProcessedParameters:(id)arg0 forFocusConfiguration:(BOOL)arg1 fallingBackToDefaultValue:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)getValueForParameterData:(id)arg0 ofProcessedParameters:(id)arg1 completionHandler:(id)arg2 ;
-(void)getValueForParameterData:(id)arg0 ofProcessedParameters:(id)arg1 fallingBackToDefaultValue:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)initializeParameters;
-(void)loadDefaultSerializedRepresentationForEnumeration:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadPossibleStatesForEnumeration:(id)arg0 searchTerm:(id)arg1 completionHandler:(id)arg2 ;
-(void)performPresentationActionWithExecutor:(id)arg0 result:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runAsynchronouslyWithLinkAction:(id)arg0 ;
-(void)serializeAppIntentDescriptorIfNecessary;
-(void)showResultIfNeeded:(id)arg0 executor:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateParameterVisibility;
-(void)willBeginProcessingParameterStates;


@end


#endif