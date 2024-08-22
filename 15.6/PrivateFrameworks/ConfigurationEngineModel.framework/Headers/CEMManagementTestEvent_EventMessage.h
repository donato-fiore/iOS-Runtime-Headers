// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMMANAGEMENTTESTEVENT_EVENTMESSAGE_H
#define CEMMANAGEMENTTESTEVENT_EVENTMESSAGE_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMManagementTestEvent_EventMessage : CEMPayloadBase

@property (copy, nonatomic) NSString *eventmessageEcho; // ivar: _eventmessageEcho


+(id)allowedEventMessageKeys;
+(id)allowedReasons;
+(id)buildRequiredOnlyWithEcho:(id)arg0 ;
+(id)buildWithEcho:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif