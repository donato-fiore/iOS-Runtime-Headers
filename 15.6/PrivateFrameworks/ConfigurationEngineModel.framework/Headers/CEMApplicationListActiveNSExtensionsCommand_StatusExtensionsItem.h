// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMAPPLICATIONLISTACTIVENSEXTENSIONSCOMMAND_STATUSEXTENSIONSITEM_H
#define CEMAPPLICATIONLISTACTIVENSEXTENSIONSCOMMAND_STATUSEXTENSIONSITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMApplicationListActiveNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *statusBundleIdentifier; // ivar: _statusBundleIdentifier
@property (copy, nonatomic) NSString *statusContainerDisplayName; // ivar: _statusContainerDisplayName
@property (copy, nonatomic) NSString *statusContainerIdentifier; // ivar: _statusContainerIdentifier
@property (copy, nonatomic) NSString *statusDisplayName; // ivar: _statusDisplayName
@property (copy, nonatomic) NSString *statusExtensionPoint; // ivar: _statusExtensionPoint
@property (copy, nonatomic) NSString *statusPath; // ivar: _statusPath
@property (copy, nonatomic) NSString *statusUserElection; // ivar: _statusUserElection
@property (copy, nonatomic) NSString *statusVersion; // ivar: _statusVersion


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithBundleIdentifier:(id)arg0 withExtensionPoint:(id)arg1 withDisplayName:(id)arg2 withPath:(id)arg3 withVersion:(id)arg4 withUserElection:(id)arg5 ;
+(id)buildWithBundleIdentifier:(id)arg0 withExtensionPoint:(id)arg1 withDisplayName:(id)arg2 withContainerDisplayName:(id)arg3 withContainerIdentifier:(id)arg4 withPath:(id)arg5 withVersion:(id)arg6 withUserElection:(id)arg7 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif