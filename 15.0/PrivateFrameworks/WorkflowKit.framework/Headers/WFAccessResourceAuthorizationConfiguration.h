// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACCESSRESOURCEAUTHORIZATIONCONFIGURATION_H
#define WFACCESSRESOURCEAUTHORIZATIONCONFIGURATION_H

@class NSDictionary, NSString;


#import "WFWorkflowAuthorizationConfiguration.h"
#import "WFAccessResource.h"
#import "WFWorkflowReference.h"

@interface WFAccessResourceAuthorizationConfiguration : WFWorkflowAuthorizationConfiguration

@property (readonly, nonatomic) WFAccessResource *accessResource; // ivar: _accessResource
@property (readonly, copy, nonatomic) NSDictionary *accessResourceDefinition; // ivar: _accessResourceDefinition
@property (readonly, copy, nonatomic) NSString *accessResourcePersistantIdentifier; // ivar: _accessResourcePersistantIdentifier
@property (readonly, copy, nonatomic) NSString *localizedMessage;
@property (readonly, copy, nonatomic) NSString *localizedPrompt;
@property (readonly, copy, nonatomic) NSString *resourceClassName;
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) WFWorkflowReference *workflowReference; // ivar: _workflowReference


+(BOOL)supportsSecureCoding;
-(id)authorizationDialogRequestWithAttribution:(id)arg0 ;
-(id)initWithAccessResource:(id)arg0 ;
-(id)initWithAccessResource:(id)arg0 userInfo:(id)arg1 ;
-(id)initWithAccessResourceDefinition:(id)arg0 persistentIdentifier:(id)arg1 reference:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)siriDialogAlertWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif