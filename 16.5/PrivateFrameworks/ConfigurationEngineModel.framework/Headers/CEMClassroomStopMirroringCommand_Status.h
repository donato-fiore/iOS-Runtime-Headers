// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMCLASSROOMSTOPMIRRORINGCOMMAND_STATUS_H
#define CEMCLASSROOMSTOPMIRRORINGCOMMAND_STATUS_H



#import "CEMPayloadBase.h"

@interface CEMClassroomStopMirroringCommand_Status : CEMPayloadBase



+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)build;
+(id)buildRequiredOnly;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif