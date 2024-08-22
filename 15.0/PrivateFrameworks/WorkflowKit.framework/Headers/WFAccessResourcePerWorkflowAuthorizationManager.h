// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCESSRESOURCEPERWORKFLOWAUTHORIZATIONMANAGER_H
#define WFACCESSRESOURCEPERWORKFLOWAUTHORIZATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface WFAccessResourcePerWorkflowAuthorizationManager : NSObject



+(void)setAccessResourcesToAuthorizedIfNotDetermined:(id)arg0 otherActions:(id)arg1 inDatabase:(id)arg2 ;
+(void)setAccessResourcesToAuthorizedIfNotDeterminedInActions:(id)arg0 existingActions:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3 ;
+(void)setAccessResourcesToAuthorizedIfNotDeterminedInWorkflow:(id)arg0 forReference:(id)arg1 inDatabase:(id)arg2 ;
+(void)setNotDeterminedAccessResourcesAuthorizedInAction:(id)arg0 forReference:(id)arg1 inDatabase:(id)arg2 existingAccessResources:(id)arg3 ;
+(void)setStatusForAllAccessResourcesTo:(NSInteger)arg0 inWorkflow:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3 ;


@end


#endif