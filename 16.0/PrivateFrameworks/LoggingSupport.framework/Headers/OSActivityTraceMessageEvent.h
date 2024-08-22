// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSACTIVITYTRACEMESSAGEEVENT_H
#define OSACTIVITYTRACEMESSAGEEVENT_H

@protocol OS_xpc_object;


#import "OSActivityEventMessage.h"

@interface OSActivityTraceMessageEvent : OSActivityEventMessage

@property (readonly, nonatomic) unsigned char messageType; // ivar: _messageType
@property (readonly, nonatomic) NSObject<OS_xpc_object> *payload; // ivar: _payload
@property (readonly, nonatomic) NSUInteger senderProgramCounter; // ivar: _senderProgramCounter


-(id)initWithEntry:(struct os_activity_stream_entry_s *)arg0 ;
-(void)_addProperties:(id)arg0 ;


@end


#endif