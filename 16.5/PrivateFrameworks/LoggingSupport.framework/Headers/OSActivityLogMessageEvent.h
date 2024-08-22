// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSACTIVITYLOGMESSAGEEVENT_H
#define OSACTIVITYLOGMESSAGEEVENT_H

@class NSString;


#import "OSActivityEventMessage.h"

@interface OSActivityLogMessageEvent : OSActivityEventMessage

@property (readonly, copy, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) unsigned char messageType; // ivar: _messageType
@property (readonly, nonatomic) NSUInteger senderProgramCounter; // ivar: _senderProgramCounter
@property (readonly, copy, nonatomic) NSString *subsystem; // ivar: _subsystem


-(id)initWithEntry:(struct os_activity_stream_entry_s *)arg0 ;
-(void)_addProperties:(id)arg0 ;


@end


#endif