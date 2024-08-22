// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMEVENTSUBSCRIPTIONNOWCOMMAND_STATUS_H
#define CEMEVENTSUBSCRIPTIONNOWCOMMAND_STATUS_H

@class NSArray;


#import "CEMPayloadBase.h"

@interface CEMEventSubscriptionNowCommand_Status : CEMPayloadBase

@property (copy, nonatomic) NSArray *statusInactiveEvents; // ivar: _statusInactiveEvents
@property (copy, nonatomic) NSArray *statusUnknownEvents; // ivar: _statusUnknownEvents


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithInactiveEvents:(id)arg0 withUnknownEvents:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif