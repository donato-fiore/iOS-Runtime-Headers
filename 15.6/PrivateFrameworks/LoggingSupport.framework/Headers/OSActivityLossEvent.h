// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSACTIVITYLOSSEVENT_H
#define OSACTIVITYLOSSEVENT_H



#import "OSActivityEvent.h"

@interface OSActivityLossEvent : OSActivityEvent

@property (readonly, nonatomic) unsigned int count; // ivar: _count
@property (readonly, nonatomic) NSUInteger endMachTimestamp; // ivar: _endMachTimestamp
@property (readonly, nonatomic) BOOL saturated; // ivar: _saturated
@property (readonly, nonatomic) NSUInteger startMachTimestamp; // ivar: _startMachTimestamp


-(id)initWithEntry:(struct os_activity_stream_entry_s *)arg0 ;
-(void)_addProperties:(id)arg0 ;


@end


#endif