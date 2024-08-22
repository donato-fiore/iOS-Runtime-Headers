// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINTENTSACCESSRESOURCE_H
#define WFINTENTSACCESSRESOURCE_H

@class NSString;


#import "WFAccessResource.h"

@interface WFIntentsAccessResource : WFAccessResource {
    NSString *_associatedAppIdentifier;
}




+(BOOL)isSystemResource;
+(id)bundleIdentifierFromPersistentIdentifier:(id)arg0 ;
+(id)persistentIdentifierFromBundleIdentifier:(id)arg0 ;
-(NSUInteger)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)initWithBundleIdentifierForDisplay:(id)arg0 ;
-(id)initWithDefinition:(id)arg0 persistentIdentifier:(id)arg1 ;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;


@end


#endif