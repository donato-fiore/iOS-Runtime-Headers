// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMDEVICEINFORMATIONCOMMAND_STATUSERRORRESPONSESITEM_H
#define CEMDEVICEINFORMATIONCOMMAND_STATUSERRORRESPONSESITEM_H

@class NSString, NSArray;


#import "CEMPayloadBase.h"

@interface CEMDeviceInformationCommand_StatusErrorResponsesItem : CEMPayloadBase

@property (copy, nonatomic) NSString *statusCode; // ivar: _statusCode
@property (copy, nonatomic) NSArray *statusErrorChain; // ivar: _statusErrorChain


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithCode:(id)arg0 ;
+(id)buildWithCode:(id)arg0 withErrorChain:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif