// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMMODELMANAGEMENTTESTCOMMANDCOMMAND_STATUS_H
#define RMMODELMANAGEMENTTESTCOMMANDCOMMAND_STATUS_H

@class NSString;


#import "RMModelPayloadBase.h"

@interface RMModelManagementTestCommandCommand_Status : RMModelPayloadBase

@property (copy, nonatomic) NSString *statusEcho; // ivar: _statusEcho


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithEcho:(id)arg0 ;
+(id)buildWithEcho:(id)arg0 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif