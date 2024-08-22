// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACTION_H
#define WFACTION_H

@class NSString, NSArray, NSSet, NSDictionary, INAppDescriptor, NSAttributedString, NSMutableDictionary, NSDate, NSHashTable, WFImage, WFContentCollection, NSProgress;
@protocol WFAppInstalledResourceDelegate, WFUUIDProvider, WFParameterEventObserver, NSCopying, NSSecureCoding, WFVariableProvider, WFActionRemoteUserInterface, WFActionExtendedOperation, WFActionRunningDelegate, WFActionSandboxExtensionProvider, WFUserInterfaceHost, WFVariableDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICApp.h"
#import "WFAppInstalledResource.h"
#import "WFContentAttributionTracker.h"
#import "WFIcon.h"
#import "WFParameter.h"
#import "WFActionParameterSummary.h"
#import "WFResourceManager.h"
#import "WFWorkflow.h"

@interface WFAction : NSObject <WFAppInstalledResourceDelegate, WFUUIDProvider, WFParameterEventObserver, NSCopying, NSSecureCoding, WFVariableProvider>



@property (copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *accessibilityName;
@property (retain, nonatomic) NSObject<WFActionRemoteUserInterface> *actionUserInterface; // ivar: _actionUserInterface
@property (readonly, nonatomic) NSArray *additionalParameterSummaries;
@property (readonly, nonatomic) NSArray *additionalParameterSummaryDefinitions;
@property (readonly, nonatomic) NSSet *allPossibleDescriptionRequires;
@property (readonly, nonatomic) NSArray *allPossibleDescriptionResults;
@property (readonly, nonatomic) ICApp *app;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSDictionary *appDefinition;
@property (retain, nonatomic) INAppDescriptor *appDescriptor; // ivar: _appDescriptor
@property (readonly, nonatomic) ICApp *appForDisplay;
@property (retain, nonatomic) WFAppInstalledResource *appResource; // ivar: _appResource
@property (readonly, nonatomic) NSString *appSection;
@property (readonly, nonatomic) NSUInteger appearance;
@property (readonly, nonatomic) NSAttributedString *attributedLocalizedName;
@property (readonly, nonatomic) NSString *attribution;
@property (readonly, nonatomic) NSArray *availableOutputActions;
@property (readonly, nonatomic) NSArray *availableVariableNames;
@property (readonly, nonatomic) BOOL blocksSnapping;
@property (retain, nonatomic) NSMutableDictionary *cachedDefaultParameterStates; // ivar: _cachedDefaultParameterStates
@property (readonly, nonatomic) NSArray *categories;
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) Class configurationViewClass;
@property (readonly, nonatomic, getter=isConstructorAction) BOOL constructorAction;
@property (retain, nonatomic) WFContentAttributionTracker *contentAttributionTracker; // ivar: _contentAttributionTracker
@property (readonly, nonatomic) Class contentItemClass;
@property (readonly, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSArray *currentGeneratedResourceNodes; // ivar: _currentGeneratedResourceNodes
@property (readonly, nonatomic, getter=isDebugAction) BOOL debugAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultOutputName;
@property (readonly, copy, nonatomic) NSDictionary *definition; // ivar: _definition
@property (readonly, nonatomic) BOOL deletesInput;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *descriptionDictionary;
@property (readonly, nonatomic) NSString *descriptionInput;
@property (readonly, nonatomic) NSString *descriptionNote;
@property (readonly, nonatomic) NSString *descriptionOfAccessResources;
@property (readonly, nonatomic) NSString *descriptionRequires;
@property (readonly, nonatomic) NSString *descriptionResult;
@property (readonly, nonatomic) NSString *descriptionSummary;
@property (nonatomic) BOOL didRunRemotely; // ivar: _didRunRemotely
@property (readonly, nonatomic) NSArray *disabledOnPlatforms;
@property (readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;
@property (readonly, nonatomic, getter=isDiscoverable) BOOL discoverable;
@property (readonly, nonatomic, getter=isDiscoverableInSearch) BOOL discoverableInSearch;
@property (readonly, nonatomic) BOOL displaysParameterSummary;
@property (readonly, nonatomic) NSHashTable *eventObservers; // ivar: _eventObservers
@property (retain, nonatomic) NSObject<WFActionExtendedOperation> *extendedOperation; // ivar: _extendedOperation
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (copy, nonatomic) NSString *groupingIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL highRisk;
@property (readonly, nonatomic) WFIcon *icon;
@property (readonly, nonatomic) WFImage *iconImage;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSSet *ignoredParameterKeysForProcessing; // ivar: _ignoredParameterKeysForProcessing
@property (retain, nonatomic) NSDictionary *initialSerializedParameters; // ivar: _initialSerializedParameters
@property (readonly, nonatomic) NSInteger initialSuggestionBehavior;
@property (readonly, nonatomic) WFContentCollection *input; // ivar: _input
@property (readonly, nonatomic) NSArray *inputContentClasses; // ivar: _inputContentClasses
@property (readonly, nonatomic) NSDictionary *inputDictionary;
@property (readonly, nonatomic) WFParameter *inputParameter;
@property (readonly, nonatomic) NSString *inputParameterKey;
@property (nonatomic) BOOL inputParameterUnlocked; // ivar: _inputParameterUnlocked
@property (readonly, nonatomic) BOOL inputPassthrough;
@property (readonly, nonatomic) BOOL inputRequired;
@property (readonly, nonatomic) BOOL inputTypeDeterminesOutputType;
@property (readonly, nonatomic) BOOL inputTypePassthrough;
@property (readonly, nonatomic) NSArray *inputTypes;
@property (readonly, nonatomic) BOOL inputsMultipleItems;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) BOOL isRelevantToUser;
@property (readonly, nonatomic) NSArray *keyCommands;
@property (readonly, nonatomic) WFImage *keyImage;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic, getter=isLastAction) BOOL lastAction;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSString *localizedAttribution;
@property (readonly, nonatomic) NSArray *localizedCategories;
@property (readonly, nonatomic) NSString *localizedDefaultOutputName;
@property (readonly, nonatomic) NSAttributedString *localizedDescriptionAttribution;
@property (readonly, nonatomic) NSString *localizedDescriptionInput;
@property (readonly, nonatomic) NSString *localizedDescriptionNote;
@property (readonly, nonatomic) NSString *localizedDescriptionRequires;
@property (readonly, nonatomic) NSString *localizedDescriptionResult;
@property (readonly, nonatomic) NSString *localizedDescriptionSummary;
@property (readonly, nonatomic) NSAttributedString *localizedFooter;
@property (readonly, copy, nonatomic) NSString *localizedKeyParameterDisplayName;
@property (readonly, nonatomic) NSArray *localizedKeywords;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedShortName;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) BOOL locallyProcessesData;
@property (readonly, copy, nonatomic) NSString *metricsIdentifier;
@property (readonly, nonatomic, getter=isMissing) BOOL missing;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL neverSuggested;
@property (retain, nonatomic) WFContentCollection *output; // ivar: _output
@property (readonly, nonatomic) NSArray *outputContentClasses; // ivar: _outputContentClasses
@property (readonly, nonatomic) NSDictionary *outputDictionary;
@property (readonly, nonatomic) NSUInteger outputDisclosureLevel;
@property (readonly, nonatomic) WFIcon *outputIcon;
@property (readonly, nonatomic) WFImage *outputIconImage;
@property (readonly, nonatomic) NSString *outputMeasurementUnitType;
@property (copy, nonatomic) NSString *outputName;
@property (readonly, nonatomic) NSArray *outputTypes;
@property (readonly, nonatomic) BOOL outputsMultipleItems;
@property (readonly, nonatomic) NSUInteger parameterCollapsingBehavior;
@property (readonly, nonatomic) NSArray *parameterDefinitions;
@property (readonly, nonatomic) os_unfair_lock_s parameterInitializationLock; // ivar: _parameterInitializationLock
@property (readonly, nonatomic) WFActionParameterSummary *parameterSummary;
@property (readonly, nonatomic) id *parameterSummaryDefinition;
@property (readonly, nonatomic) NSString *parameterSummaryString;
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters
@property (copy, nonatomic) NSDictionary *parametersByKey; // ivar: _parametersByKey
@property (readonly, nonatomic) BOOL populatesInputFromInputParameter;
@property (copy, nonatomic) NSDictionary *processedParameters; // ivar: _processedParameters
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSInteger rateLimitDelay;
@property (readonly, nonatomic) NSInteger rateLimitThreshold;
@property (readonly, nonatomic) NSInteger rateLimitTimeout;
@property (readonly, nonatomic) NSArray *remoteExecuteOnPlatforms;
@property (readonly, nonatomic) NSArray *requiredResources;
@property (readonly, nonatomic) BOOL requiresRemoteExecution;
@property (readonly, nonatomic) BOOL requiresUnlock;
@property (readonly, nonatomic, getter=isResidentCompatible) BOOL residentCompatible;
@property (readonly, nonatomic) WFResourceManager *resourceManager; // ivar: _resourceManager
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (readonly, nonatomic) NSObject<WFActionRunningDelegate> *runningDelegate; // ivar: _runningDelegate
@property (readonly, nonatomic) NSObject<WFActionSandboxExtensionProvider> *sandboxExtensionProvider;
@property (readonly, nonatomic) NSDictionary *settingsUIDefinition;
@property (readonly, nonatomic) Class settingsViewControllerClass;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) BOOL shouldBeIncludedInAppsList;
@property (readonly, nonatomic) BOOL showsSettingsWhenResourcesUnavailable;
@property (readonly, nonatomic) BOOL skipsProcessingHiddenParameters; // ivar: _skipsProcessingHiddenParameters
@property (readonly, nonatomic) BOOL snappingPassthrough;
@property (readonly, nonatomic) NSArray *specifiedInputContentClasses;
@property (readonly, nonatomic) NSArray *specifiedOutputContentClasses;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *supplementalSerializedParameters; // ivar: _supplementalSerializedParameters
@property (readonly, nonatomic) NSArray *supportedAppIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *userDefinedParameterStates; // ivar: _userDefinedParameterStates
@property (retain, nonatomic) NSObject<WFUserInterfaceHost> *userInterface; // ivar: _userInterface
@property (readonly, nonatomic) NSDictionary *userInterfaceClasses;
@property (readonly, nonatomic) NSArray *userInterfaceTypes;
@property (readonly, nonatomic) BOOL usesLegacyInputBehavior;
@property (retain, nonatomic) NSObject<WFVariableDataSource> *variableSource; // ivar: _variableSource
@property (copy, nonatomic) NSString *widgetSizeClass; // ivar: _widgetSizeClass
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly, weak, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (readonly, nonatomic) NSArray *workflowInputClasses;


+(BOOL)supportsSecureCoding;
+(id)indentationLevelsForActions:(id)arg0 ;
// +(void)showImplicitChooseFromListWithInput:(id)arg0 userInterface:(id)arg1 workQueue:(id)arg2 cancelHandler:(id)arg3 selectionHandler:(unk)arg4  ;
-(BOOL)canHandleInputOfContentClasses:(id)arg0 withSupportedClasses:(id)arg1 ;
-(BOOL)canHandleInputOfContentClasses:(id)arg0 withSupportedClasses:(id)arg1 includingCoercedTypes:(BOOL)arg2 ;
-(BOOL)containsVariableOfType:(id)arg0 ;
-(BOOL)getInputContentFromVariablesInParameterState:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)hasAvailableActionOutputVariables;
-(BOOL)hasAvailableVariables;
-(BOOL)hasChildren;
-(BOOL)ignoresOutputFromAction:(id)arg0 inWorkflow:(id)arg1 ;
-(BOOL)ignoresOutputFromPreviousActionInWorkflow:(id)arg0 ;
-(BOOL)isDisabledWhenRunOnDevice:(id)arg0 ;
-(BOOL)isVariableWithNameAvailable:(id)arg0 ;
-(BOOL)isVariableWithOutputUUIDAvailable:(id)arg0 ;
-(BOOL)legacyBehaviorIgnoresOutputFromAction:(id)arg0 inWorkflow:(id)arg1 ;
-(BOOL)requiresHandoffWhenRunWithUserInterfaceType:(id)arg0 ;
-(BOOL)requiresUserInteractionWhenRunWithInput:(id)arg0 ;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(BOOL)shouldBeConnectedToPreviousActionInWorkflow:(id)arg0 withOutputsConsumedByFollowingActions:(id)arg1 ;
-(BOOL)shouldBeSuggestedAfterAction:(id)arg0 inWorkflow:(id)arg1 ;
-(BOOL)shouldInsertExpandingParameterForParameter:(id)arg0 ;
-(BOOL)showsImplicitChooseFromListWhenRunWithInput:(id)arg0 ;
-(BOOL)supportsUserInterfaceType:(id)arg0 ;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg0 forParameter:(id)arg1 ;
-(id)actionForAppIdentifier:(id)arg0 ;
-(id)actionProvidingVariableWithOutputUUID:(id)arg0 ;
-(id)actionsProvidingVariableName:(id)arg0 ;
-(id)checkForResourceAvailabilityErrors;
-(id)classesForTypeArray:(id)arg0 includeAllOutputTypes:(BOOL)arg1 ;
-(id)containedVariables;
-(id)containedVariablesOfClass:(Class)arg0 ;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)contextualActionsForSurface:(NSUInteger)arg0 ;
-(id)copyForDuplicating;
-(id)copyForProcessing;
-(id)copyParameterStates;
-(id)copyWithDefinition:(id)arg0 serializedParameters:(id)arg1 ;
-(id)copyWithSerializedParameters:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAccompanyingActions;
-(id)createResourceManager;
-(id)createStateForParameter:(id)arg0 fromSerializedRepresentation:(id)arg1 ;
-(id)defaultParameterStateForKey:(id)arg0 ;
-(id)generateOutputUUIDForAction:(id)arg0 ;
-(id)generateUUIDIfNecessaryWithUUIDProvider:(id)arg0 ;
-(id)generatedResourceNodes;
-(id)inheritedInputVariableInWorkflow:(id)arg0 ;
-(id)inheritedInputVariableInWorkflow:(id)arg0 ignoringInputTypes:(BOOL)arg1 ;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg0 ;
-(id)inheritedOutputContentClassesInWorkflow:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)inputSourceInWorkflow:(id)arg0 ;
-(id)localizedSubcategoryForCategory:(id)arg0 ;
-(id)minimumSupportedClientVersion;
-(id)missingAppError;
-(id)outputVariableWithVariableProvider:(id)arg0 UUIDProvider:(id)arg1 ;
-(id)parameterForKey:(id)arg0 ;
-(id)parameterKeysIgnoredForParameterSummary;
-(id)parameterStateForKey:(id)arg0 ;
-(id)parameterStateForKey:(id)arg0 fallingBackToDefaultValue:(BOOL)arg1 ;
-(id)parameterValueForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)parametersRequiringUserInputAlongsideParameter:(id)arg0 ;
-(id)populatedInputWithProcessedParameterValues:(id)arg0 ;
-(id)possibleContentClassesForVariableNamed:(id)arg0 context:(id)arg1 ;
-(id)previousAction;
-(id)prioritizedParameterKeysForRemoteExecution;
-(id)providedVariableNames;
-(id)serializedParameters;
-(id)serializedParametersForDonatedIntent:(id)arg0 allowDroppingUnconfigurableValues:(BOOL)arg1 ;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)subcategoryForCategory:(id)arg0 ;
-(id)supplementalParameterValueForKey:(id)arg0 ofClass:(Class)arg1 ;
-(id)typeDescriptionWithTypes:(id)arg0 explanationText:(id)arg1 multiple:(BOOL)arg2 optional:(BOOL)arg3 ;
-(id)visibleParametersForParameterSummary;
-(id)visibleParametersWithProcessing:(BOOL)arg0 ;
-(void)_notifyEventObserversParameterStateDidChangeForKey:(id)arg0 ;
-(void)_processParameterStates:(id)arg0 withInput:(id)arg1 skippingHiddenParameters:(BOOL)arg2 askForValuesIfNecessary:(BOOL)arg3 workQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)addEventObserver:(id)arg0 ;
-(void)addVariableObserver:(id)arg0 ;
-(void)appInstalledResource:(id)arg0 didUpdateAppDescriptor:(id)arg1 ;
-(void)askForValuesOfParameters:(id)arg0 withDefaultStates:(id)arg1 prompts:(id)arg2 input:(id)arg3 workQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)authorizeAccessResourcesImplicitlyForParameterState:(id)arg0 forParameter:(id)arg1 ;
-(void)cancel;
-(void)checkUserInterfaceAndRunWithInput:(id)arg0 ;
-(void)configureResourcesForParameter:(id)arg0 ;
-(void)configureRuntimeResourcesWithCompletionHandler:(id)arg0 ;
-(void)didChangeVariableName:(id)arg0 to:(id)arg1 ;
-(void)dismissPresentedContentWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishRunningWithError:(id)arg0 ;
-(void)getContentDestinationWithCompletionHandler:(id)arg0 ;
-(void)initializeParameters;
-(void)initializeParametersIfNecessary;
-(void)initializeParametersWithLock;
-(void)loadIconWithCompletionHandler:(id)arg0 ;
-(void)lockInputParameter;
-(void)makeAccessResourcesAvailableAtWorkflowLevelAndRunWithContentItemCache:(id)arg0 ;
-(void)matchContextualAction:(id)arg0 toContentCollection:(id)arg1 completionHandler:(id)arg2 ;
-(void)parameterDefaultSerializedRepresentationDidChange:(id)arg0 ;
-(void)parameterStateValidityCriteriaDidChange:(id)arg0 ;
-(void)performDataAccessChecksWithUserInterface:(id)arg0 contentItemCache:(id)arg1 completionHandler:(id)arg2 ;
-(void)performDeletionAuthorizationChecksWithUserInterface:(id)arg0 contentItemCache:(id)arg1 completionHandler:(id)arg2 ;
-(void)performSmartPromptChecksWithUserInterface:(id)arg0 contentDestination:(id)arg1 contentItemCache:(id)arg2 completionHandler:(id)arg3 ;
-(void)prepareToProcessWithCompletionHandler:(id)arg0 ;
-(void)processParameterStates:(id)arg0 withInput:(id)arg1 skippingHiddenParameters:(BOOL)arg2 askForValuesIfNecessary:(BOOL)arg3 workQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)processParametersWithoutAskingForValuesWithInput:(id)arg0 workQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)recreateGeneratedResourcesIfNeeded;
-(void)removeEventObserver:(id)arg0 ;
-(void)removeVariableObserver:(id)arg0 ;
-(void)requestInterfacePresentationWithCompletionHandler:(id)arg0 ;
-(void)requestUnlock:(id)arg0 ;
-(void)requestUnlockIfNeeded:(id)arg0 ;
-(void)resolveAppDescriptorIfNecessary:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;
-(void)runWithInput:(id)arg0 error:(*id)arg1 ;
-(void)runWithInput:(id)arg0 userInterface:(id)arg1 runningDelegate:(id)arg2 variableSource:(id)arg3 workQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;
-(void)setDefaultCoercionOptionsOnContentCollection:(id)arg0 ;
-(void)setDefaultCoercionOptionsOnInputs;
-(void)setSupplementalParameterValue:(id)arg0 forKey:(id)arg1 ;
-(void)snapInputParameterIfNecessary;
-(void)unlockInputParameter;
-(void)updateAppDescriptorInDatabaseWithSelectedApp:(id)arg0 ;
-(void)updateAppDescriptorWithSelectedApp:(id)arg0 ;
-(void)wasAddedToWorkflow:(id)arg0 ;
-(void)wasAddedToWorkflowByUser:(id)arg0 ;
-(void)wasRemovedFromWorkflow:(id)arg0 ;


@end


#endif