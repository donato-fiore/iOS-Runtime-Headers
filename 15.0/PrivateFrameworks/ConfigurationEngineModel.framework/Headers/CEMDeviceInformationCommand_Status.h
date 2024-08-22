// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMDEVICEINFORMATIONCOMMAND_STATUS_H
#define CEMDEVICEINFORMATIONCOMMAND_STATUS_H



#import "CEMPayloadBase.h"
#import "CEMDeviceInformationCommand_StatusErrorResponses.h"
#import "CEMDeviceInformationCommand_StatusQueryResponses.h"

@interface CEMDeviceInformationCommand_Status : CEMPayloadBase

@property (copy, nonatomic) CEMDeviceInformationCommand_StatusErrorResponses *statusErrorResponses; // ivar: _statusErrorResponses
@property (copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponses *statusQueryResponses; // ivar: _statusQueryResponses


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithQueryResponses:(id)arg0 ;
+(id)buildWithQueryResponses:(id)arg0 withErrorResponses:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif