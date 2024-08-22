// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSMARTPROMPTCONFIGURATION_H
#define WFSMARTPROMPTCONFIGURATION_H

@class NSString, NSData, WFContentCollection, NSArray;


#import "WFWorkflowAuthorizationConfiguration.h"
#import "WFDeletionAuthorizationState.h"
#import "WFWorkflowReference.h"

@interface WFSmartPromptConfiguration : WFWorkflowAuthorizationConfiguration

@property (readonly, copy, nonatomic) NSString *actionUUID; // ivar: _actionUUID
@property (readonly, copy, nonatomic) NSData *archivedSourceContentCollection; // ivar: _archivedSourceContentCollection
@property (readonly, nonatomic) WFContentCollection *cachedSourceContentCollection; // ivar: _cachedSourceContentCollection
@property (readonly, copy, nonatomic) WFDeletionAuthorizationState *deletionAuthorizationState; // ivar: _deletionAuthorizationState
@property (readonly, nonatomic) BOOL isSpecialRequest; // ivar: _isSpecialRequest
@property (readonly, copy, nonatomic) NSString *localizedPrompt; // ivar: _localizedPrompt
@property (readonly, copy, nonatomic) NSString *requestSource; // ivar: _requestSource
@property (readonly, copy, nonatomic) NSString *requestType; // ivar: _requestType
@property (readonly, copy, nonatomic) NSArray *smartPromptStates; // ivar: _smartPromptStates
@property (readonly, nonatomic) WFWorkflowReference *workflowReference; // ivar: _workflowReference


+(BOOL)supportsSecureCoding;
-(BOOL)containsPrivatePreviews;
-(id)authorizationDialogRequestWithAttribution:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeletionAuthorizationState:(id)arg0 contentCollection:(id)arg1 action:(id)arg2 reference:(id)arg3 source:(id)arg4 ;
-(id)initWithSmartPromptStates:(id)arg0 attributionSet:(id)arg1 contentItemCache:(id)arg2 action:(id)arg3 contentDestination:(id)arg4 reference:(id)arg5 source:(id)arg6 isWebpageCoercion:(BOOL)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif