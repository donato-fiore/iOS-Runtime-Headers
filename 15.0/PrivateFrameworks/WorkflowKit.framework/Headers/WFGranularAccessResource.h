// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGRANULARACCESSRESOURCE_H
#define WFGRANULARACCESSRESOURCE_H

@class NSSet;


#import "WFAccessResource.h"
#import "WFGranularAccessResourcePerWorkflowState.h"

@interface WFGranularAccessResource : WFAccessResource

@property (readonly, nonatomic) WFGranularAccessResourcePerWorkflowState *currentGranularPerWorkflowState;
@property (readonly, nonatomic) NSSet *requestedEntries;
@property (retain, nonatomic) WFGranularAccessResourcePerWorkflowState *stateForRequestedEntries; // ivar: _stateForRequestedEntries
@property (readonly, nonatomic) NSSet *valuesWithDeniedAccess;
@property (readonly, nonatomic) NSSet *valuesWithNotDeterminedAccess;


+(Class)perWorkflowStateClass;
-(NSUInteger)workflowLevelStatus;
-(id)description;
-(id)updatedPerWorkflowStateForAuthorizationChoice:(BOOL)arg0 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg1 ;
-(void)setCurrentPerWorkflowState:(id)arg0 ;
-(void)updateStateForRequestedEntries;


@end


#endif