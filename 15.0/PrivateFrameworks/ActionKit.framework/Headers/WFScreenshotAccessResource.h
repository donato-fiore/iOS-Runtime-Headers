// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSCREENSHOTACCESSRESOURCE_H
#define WFSCREENSHOTACCESSRESOURCE_H

@class WFAccessResource;



@interface WFScreenshotAccessResource : WFAccessResource



+(BOOL)isSystemResource;
-(NSUInteger)globalLevelStatus;
-(id)icon;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)name;


@end


#endif