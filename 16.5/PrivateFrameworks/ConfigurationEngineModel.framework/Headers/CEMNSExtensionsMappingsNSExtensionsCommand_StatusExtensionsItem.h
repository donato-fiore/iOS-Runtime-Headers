// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMNSEXTENSIONSMAPPINGSNSEXTENSIONSCOMMAND_STATUSEXTENSIONSITEM_H
#define CEMNSEXTENSIONSMAPPINGSNSEXTENSIONSCOMMAND_STATUSEXTENSIONSITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *statusDisplayName; // ivar: _statusDisplayName
@property (copy, nonatomic) NSString *statusExtensionPoint; // ivar: _statusExtensionPoint
@property (copy, nonatomic) NSString *statusIdentifier; // ivar: _statusIdentifier


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withExtensionPoint:(id)arg1 withDisplayName:(id)arg2 ;
+(id)buildWithIdentifier:(id)arg0 withExtensionPoint:(id)arg1 withDisplayName:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif