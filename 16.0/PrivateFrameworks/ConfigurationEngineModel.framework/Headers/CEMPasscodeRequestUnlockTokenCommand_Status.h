// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMPASSCODEREQUESTUNLOCKTOKENCOMMAND_STATUS_H
#define CEMPASSCODEREQUESTUNLOCKTOKENCOMMAND_STATUS_H

@class NSData;


#import "CEMPayloadBase.h"

@interface CEMPasscodeRequestUnlockTokenCommand_Status : CEMPayloadBase

@property (copy, nonatomic) NSData *statusUnlockToken; // ivar: _statusUnlockToken


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithUnlockToken:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif