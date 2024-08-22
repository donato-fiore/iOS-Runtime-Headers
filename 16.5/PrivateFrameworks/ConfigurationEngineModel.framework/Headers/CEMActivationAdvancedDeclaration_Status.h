// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMACTIVATIONADVANCEDDECLARATION_STATUS_H
#define CEMACTIVATIONADVANCEDDECLARATION_STATUS_H

@class NSArray;


#import "CEMPayloadBase.h"

@interface CEMActivationAdvancedDeclaration_Status : CEMPayloadBase

@property (copy, nonatomic) NSArray *statusInstalledConfigurations; // ivar: _statusInstalledConfigurations


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithInstalledConfigurations:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif