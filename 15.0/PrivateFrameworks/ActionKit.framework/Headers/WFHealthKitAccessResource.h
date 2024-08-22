// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFHEALTHKITACCESSRESOURCE_H
#define WFHEALTHKITACCESSRESOURCE_H

@class WFGranularAccessResource, HKHealthStore;



@interface WFHealthKitAccessResource : WFGranularAccessResource {
    NSUInteger _globalLevelStatus;
}


@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore


+(BOOL)alwaysMakeAvailable;
+(BOOL)isSystemResource;
+(Class)perWorkflowStateClass;
-(NSUInteger)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)errorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)importErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)localizedImportErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)objectTypes;
-(id)objectTypesForAccessType:(id)arg0 ;
-(id)protectedResourceDescription;
-(id)readTypes;
-(id)readableUnauthorizedResourceDescription;
-(id)requestedEntries;
-(id)writeTypes;
-(void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(NSUInteger)arg0 userInterface:(id)arg1 completionHandler:(id)arg2 ;
-(void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)refreshAvailability;


@end


#endif