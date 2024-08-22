// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMCLASSROOMLOGOUTUSERCOMMAND_STATUS_H
#define CEMCLASSROOMLOGOUTUSERCOMMAND_STATUS_H



#import "CEMPayloadBase.h"

@interface CEMClassroomLogOutUserCommand_Status : CEMPayloadBase



+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)build;
+(id)buildRequiredOnly;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif