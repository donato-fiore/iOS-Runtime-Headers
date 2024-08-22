// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMMANAGEMENTSTATECOMMAND_STATUS_H
#define CEMMANAGEMENTSTATECOMMAND_STATUS_H

@class NSArray;


#import "CEMPayloadBase.h"

@interface CEMManagementStateCommand_Status : CEMPayloadBase

@property (copy, nonatomic) NSArray *statusCommands; // ivar: _statusCommands
@property (copy, nonatomic) NSArray *statusDeclarations; // ivar: _statusDeclarations


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithCommands:(id)arg0 withDeclarations:(id)arg1 ;
+(id)buildWithCommands:(id)arg0 withDeclarations:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif