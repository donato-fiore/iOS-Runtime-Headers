// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSACTIVITYSIGNPOSTEVENT_H
#define OSACTIVITYSIGNPOSTEVENT_H



#import "OSActivityLogMessageEvent.h"

@interface OSActivitySignpostEvent : OSActivityLogMessageEvent

@property (readonly, nonatomic) NSUInteger signpostID; // ivar: _signpostID


-(id)initWithEntry:(struct os_activity_stream_entry_s *)arg0 ;


@end


#endif