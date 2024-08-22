// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMNSEXTENSIONSMAPPINGSNSEXTENSIONSCOMMAND_STATUS_H
#define CEMNSEXTENSIONSMAPPINGSNSEXTENSIONSCOMMAND_STATUS_H

@class NSArray;


#import "CEMPayloadBase.h"

@interface CEMNSExtensionsMappingsNSExtensionsCommand_Status : CEMPayloadBase

@property (copy, nonatomic) NSArray *statusExtensions; // ivar: _statusExtensions


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithExtensions:(id)arg0 ;
+(id)buildWithExtensions:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif