// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFRUNSHORTCUTSACCESSRESOURCE_H
#define WFRUNSHORTCUTSACCESSRESOURCE_H

@class WFAccessResource;



@interface WFRunShortcutsAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)attemptRecoveryFromGlobalLevelErrorMessage;
-(id)errorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)importErrorReasonForGlobalLevelStatus:(NSUInteger)arg0 ;
-(id)protectedResourceDescription;
-(id)workflowLevelDeniedStatusMessage;
-(id)workflowLevelMessageTemplate;
-(id)workflowLevelNotDeterminedStatusMessage;
-(id)workflowLevelPromptTemplate;
-(void)makeAvailableAtLevel:(NSUInteger)arg0 withUserInterface:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif