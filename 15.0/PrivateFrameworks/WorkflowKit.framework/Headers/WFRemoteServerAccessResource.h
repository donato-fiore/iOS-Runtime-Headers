// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMOTESERVERACCESSRESOURCE_H
#define WFREMOTESERVERACCESSRESOURCE_H

@class NSArray;


#import "WFGranularAccessResource.h"

@interface WFRemoteServerAccessResource : WFGranularAccessResource

@property (copy, nonatomic) NSArray *requestedURLs; // ivar: _requestedURLs


+(BOOL)isSystemResource;
+(Class)perWorkflowStateClass;
-(NSUInteger)globalLevelStatus;
-(id)authorizationConfiguration;
-(id)icon;
-(id)init;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)name;
-(id)requestedEntries;
-(void)configureResourceForConfiguration:(id)arg0 ;


@end


#endif