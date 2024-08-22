// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCESSRESOURCE_H
#define WFACCESSRESOURCE_H

@class NSString, NSError, WFImage, NSDictionary;
@protocol WFWorkflowReferencing, WFAccessResourcePerWorkflowState;


#import "WFResource.h"
#import "WFDatabaseProxy.h"
#import "WFWorkflow.h"

@interface WFAccessResource : WFResource <WFWorkflowReferencing>



@property (readonly, nonatomic) NSString *associatedAppIdentifier;
@property (readonly, nonatomic) NSString *attemptRecoveryFromGlobalLevelErrorMessage;
@property (readonly, nonatomic) BOOL canLogOut;
@property (readonly, nonatomic) NSError *computedAvailabilityError;
@property (retain, nonatomic) NSObject<WFAccessResourcePerWorkflowState> *currentPerWorkflowState; // ivar: _currentPerWorkflowState
@property (readonly, nonatomic) WFDatabaseProxy *databaseProxy; // ivar: _databaseProxy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *globalLevelAvailabilityError;
@property (readonly, nonatomic) NSUInteger globalLevelStatus;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFImage *icon;
@property (readonly, nonatomic) NSString *localizedWorkflowLevelDeniedStatusMessage;
@property (readonly, nonatomic) NSString *localizedWorkflowLevelMessage;
@property (readonly, nonatomic) NSString *localizedWorkflowLevelMessageTemplate;
@property (readonly, nonatomic) NSString *localizedWorkflowLevelNotDeterminedStatusMessage;
@property (readonly, nonatomic) NSString *localizedWorkflowLevelPrompt;
@property (readonly, nonatomic) NSString *localizedWorkflowLevelPromptTemplate;
@property (readonly, nonatomic) BOOL logOutAffectsOtherApps;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (readonly, nonatomic) NSString *protectedResourceDescription;
@property (readonly, nonatomic) NSString *resourceName;
@property (readonly, nonatomic) NSDictionary *settingsUIDefinition;
@property (readonly, nonatomic) NSUInteger status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMultipleAccounts;
@property (readonly, nonatomic) int token; // ivar: _token
@property (readonly, nonatomic) NSString *username;
@property (weak, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (readonly, nonatomic) NSError *workflowLevelAvailabilityError;
@property (readonly, nonatomic) NSString *workflowLevelDeniedStatusMessage;
@property (readonly, nonatomic) NSString *workflowLevelMessageTemplate;
@property (readonly, nonatomic) NSString *workflowLevelNotDeterminedStatusMessage;
@property (readonly, nonatomic) NSString *workflowLevelPromptTemplate;
@property (readonly, nonatomic) NSUInteger workflowLevelStatus;


+(BOOL)isSystemResource;
+(Class)perWorkflowStateClass;
+(id)accessResourceFromDatabaseState:(id)arg0 ;
-(BOOL)isEquivalentToAccessResource:(id)arg0 ;
-(NSUInteger)statusAtLevel:(NSUInteger)arg0 ;
-(id)authorizationConfiguration;
-(id)availabilityErrorForLevel:(NSUInteger)arg0 ;
-(id)errorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)importErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)initWithDefinition:(id)arg0 persistentIdentifier:(id)arg1 ;
-(id)initWithPersistentIdentifier:(id)arg0 ;
-(id)loadPersistedPerWorkflowStateForReference:(id)arg0 inDatabase:(id)arg1 ;
-(id)localizedAttemptRecoveryFromErrorMessage;
-(id)localizedErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)localizedImportErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)updatedPerWorkflowStateForAuthorizationChoice:(BOOL)arg0 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg1 ;
-(void)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 userInterface:(id)arg2 completionHandler:(id)arg3 ;
-(void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(NSUInteger)arg0 userInterface:(id)arg1 completionHandler:(id)arg2 ;
-(void)attemptRecoveryFromWorkflowLevelErrorWithOptionIndex:(NSUInteger)arg0 userInterface:(id)arg1 completionHandler:(id)arg2 ;
-(void)configureResourceForConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)logOut;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)makeAvailableAtLevel:(NSUInteger)arg0 withUserInterface:(id)arg1 completionHandler:(id)arg2 ;
-(void)makeAvailableAtWorkflowLevelWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)refreshAvailability;
-(void)refreshAvailabilityWithNotification:(BOOL)arg0 ;
-(void)refreshCurrentPerWorkflowState;
-(void)refreshCurrentPerWorkflowStateForReference:(id)arg0 inDatabase:(id)arg1 ;


@end


#endif