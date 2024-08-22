// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMMANAGEMENTTESTCOMMANDCOMMAND_STATUS_H
#define CEMMANAGEMENTTESTCOMMANDCOMMAND_STATUS_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMManagementTestCommandCommand_Status : CEMPayloadBase

@property (copy, nonatomic) NSString *statusEcho; // ivar: _statusEcho


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithEcho:(id)arg0 ;
+(id)buildWithEcho:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif