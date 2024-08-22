// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOW_H
#define WFWORKFLOW_H

@class NSArray, NSString;
@protocol WFNaming, WFActionEventObserver, WFDatabaseObjectObserver, NSCopying, NSSecureCoding, WFWorkflowEditingDelegate, WFWorkflowNoInputBehavior, WFWorkflowStorage;

#import <Foundation/Foundation.h>

#import "WFIcon.h"
#import "WFDatabase.h"
#import "WFActionGroupingCache.h"
#import "WFWorkflowIcon.h"
#import "WFInputAction.h"
#import "WFWorkflowQuarantine.h"
#import "WFWorkflowRecord.h"
#import "WFWorkflowReference.h"
#import "WFWorkflow.h"
#import "WFDebouncer.h"
#import "WFVariableAvailability.h"

@interface WFWorkflow : NSObject <WFNaming, WFActionEventObserver, WFDatabaseObjectObserver, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) NSString *actionsDescription;
@property (readonly, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, nonatomic) WFIcon *attributionIcon;
@property (readonly, nonatomic) NSString *attributionTitle;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (nonatomic) BOOL deletedFromDatabase; // ivar: _deletedFromDatabase
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<WFWorkflowEditingDelegate> *editingDelegate; // ivar: _editingDelegate
@property (readonly, nonatomic) NSInteger environment; // ivar: _environment
@property (readonly, nonatomic) NSString *galleryIdentifier;
@property (retain, nonatomic) WFActionGroupingCache *groupingCache; // ivar: _groupingCache
@property (nonatomic) BOOL hasOutputFallback;
@property (nonatomic) BOOL hasShortcutInputVariables;
@property (readonly, nonatomic) BOOL hasStorageProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hiddenFromLibraryAndSync;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (copy, nonatomic) NSArray *importQuestions; // ivar: _importQuestions
@property (retain, nonatomic) WFInputAction *inputAction; // ivar: _inputAction
@property (copy, nonatomic) NSArray *inputClasses; // ivar: _inputClasses
@property (readonly, nonatomic) NSString *legacyName;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<WFWorkflowNoInputBehavior> *noInputBehavior; // ivar: _noInputBehavior
@property (copy, nonatomic) NSArray *outputClasses; // ivar: _outputClasses
@property (readonly, nonatomic) WFWorkflowQuarantine *quarantine;
@property (readonly, nonatomic) WFWorkflowRecord *record; // ivar: _record
@property (readonly, nonatomic) WFWorkflowReference *reference;
@property (nonatomic) NSInteger remoteQuarantineStatus;
@property (readonly, nonatomic, getter=isResidentCompatible) BOOL residentCompatible;
@property (retain, nonatomic) WFWorkflow *retainedSelf; // ivar: _retainedSelf
@property (readonly, nonatomic) WFDebouncer *saveDebouncer; // ivar: _saveDebouncer
@property (nonatomic) BOOL saveDisabled; // ivar: _saveDisabled
@property (getter=isSaving) BOOL saving; // ivar: _saving
@property (nonatomic) BOOL serializeActionsWhenSaving; // ivar: _serializeActionsWhenSaving
@property (readonly, nonatomic) NSString *source;
@property (retain, nonatomic) NSObject<WFWorkflowStorage> *storageProvider; // ivar: _storageProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) WFVariableAvailability *variableAvailability; // ivar: _variableAvailability
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) NSString *workflowID;
@property (readonly, nonatomic) NSString *workflowSubtitle;
@property (copy, nonatomic) NSArray *workflowTypes;


+(BOOL)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 ;
+(BOOL)checkClientVersion:(id)arg0 currentVersion:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)defaultName;
+(id)effectiveInputClassesFromInputClasses:(id)arg0 workflowTypes:(id)arg1 ;
+(id)localizedSubtitleWithActionCount:(NSUInteger)arg0 ;
+(id)supportedInputClassNames;
+(id)supportedInputClasses;
+(id)workflowWithReference:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
+(id)workflowWithReference:(id)arg0 database:(id)arg1 migrateIfNecessary:(BOOL)arg2 environment:(NSInteger)arg3 error:(*id)arg4 ;
-(BOOL)addWatchWorkflowTypeIfEligible;
-(BOOL)hasActions;
-(BOOL)isEligibleForWatch;
-(BOOL)isUntitled;
-(BOOL)record:(id)arg0 isEquivalentToRecord:(id)arg1 ;
-(BOOL)shouldShowInputAction;
-(Class)classForKeyedArchiver;
-(id)actionForSuggestionsDrawer;
-(id)actionsGroupedWithAction:(id)arg0 ;
-(id)additionalEffectiveInputClassesForTriggers:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createUserActivityForViewing;
-(id)effectiveInputClasses;
-(id)inferOutputTypesWithHasOutputFallback:(*BOOL)arg0 ;
-(id)init;
-(id)initWithActionDonation:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 description:(id)arg1 associatedAppBundleIdentifier:(id)arg2 actions:(id)arg3 ;
-(id)initWithRecord:(id)arg0 storageProvider:(id)arg1 error:(*id)arg2 ;
-(id)initWithRecord:(id)arg0 storageProvider:(id)arg1 migrateIfNecessary:(BOOL)arg2 environment:(NSInteger)arg3 error:(*id)arg4 ;
-(id)initWithShortcut:(id)arg0 error:(*id)arg1 ;
-(id)localizedActionsSummary;
-(id)localizedSubtitle;
-(id)prepareForSharingWithOptions:(id)arg0 ;
-(id)validImportQuestions;
-(void)action:(id)arg0 didChangeVariableName:(id)arg1 to:(id)arg2 ;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)action:(id)arg0 supplementalParameterValueDidChangeForKey:(id)arg1 ;
-(void)actionGroupingIdentifierDidChange:(id)arg0 ;
-(void)actionGroupingIdentifierWillChange:(id)arg0 ;
-(void)actionNameDidChange:(id)arg0 ;
-(void)actionOutputDetailsDidChange:(id)arg0 ;
-(void)addAction:(id)arg0 ;
-(void)addWatchWorkflowType;
-(void)configureAsSingleStepShortcutIfNecessary:(id)arg0 ;
-(void)configureWithStandaloneShortcutRepresentation:(id)arg0 homeSummaryText:(id)arg1 ;
-(void)databaseDidChange:(id)arg0 modified:(id)arg1 inserted:(id)arg2 removed:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fixControlFlowActionLayout;
-(void)generateShortcutRepresentation:(id)arg0 ;
-(void)generateStandaloneShortcutRepresentation:(id)arg0 ;
-(void)getHomeSummaryTextWithCompletion:(id)arg0 ;
-(void)initializeAddedAction:(id)arg0 ;
-(void)insertAction:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertActions:(id)arg0 atIndexes:(id)arg1 ;
-(void)loadFromRecord;
-(void)moveActionsAtIndexes:(id)arg0 toIndexes:(id)arg1 ;
-(void)performBatchOperation:(id)arg0 ;
-(void)reloadFromRecord;
-(void)removeAction:(id)arg0 ;
-(void)removeActions:(id)arg0 ;
-(void)requestToRunScriptsOnDomain:(id)arg0 withUserInterface:(id)arg1 database:(id)arg2 completionHandler:(id)arg3 ;
-(void)save;
-(void)saveFromDebouncer:(id)arg0 ;
-(void)saveWithCompletionBlock:(id)arg0 ;
-(void)updateInputAction;
-(void)updateMinimumClientVersion;


@end


#endif