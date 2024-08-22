// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMSECURITYINFORMATIONCOMMAND_STATUS_H
#define CEMSECURITYINFORMATIONCOMMAND_STATUS_H



#import "CEMPayloadBase.h"
#import "CEMSecurityInformationCommand_StatusSecurityInfo.h"

@interface CEMSecurityInformationCommand_Status : CEMPayloadBase

@property (copy, nonatomic) CEMSecurityInformationCommand_StatusSecurityInfo *statusSecurityInfo; // ivar: _statusSecurityInfo


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithSecurityInfo:(id)arg0 ;
+(id)buildWithSecurityInfo:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif