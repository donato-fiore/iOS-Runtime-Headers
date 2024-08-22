// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMAPPLICATIONLISTINSTALLEDAPPLICATIONSCOMMAND_STATUS_H
#define CEMAPPLICATIONLISTINSTALLEDAPPLICATIONSCOMMAND_STATUS_H

@class NSArray;


#import "CEMPayloadBase.h"

@interface CEMApplicationListInstalledApplicationsCommand_Status : CEMPayloadBase

@property (copy, nonatomic) NSArray *statusInstalledApplicationList; // ivar: _statusInstalledApplicationList


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithInstalledApplicationList:(id)arg0 ;
+(id)buildWithInstalledApplicationList:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif