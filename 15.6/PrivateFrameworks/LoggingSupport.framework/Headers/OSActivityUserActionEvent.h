// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSACTIVITYUSERACTIONEVENT_H
#define OSACTIVITYUSERACTIONEVENT_H



#import "OSActivityEvent.h"

@interface OSActivityUserActionEvent : OSActivityEvent

@property (readonly, nonatomic) NSUInteger senderProgramCounter; // ivar: _senderProgramCounter


-(id)initWithEntry:(struct os_activity_stream_entry_s *)arg0 ;
-(void)_addProperties:(id)arg0 ;


@end


#endif