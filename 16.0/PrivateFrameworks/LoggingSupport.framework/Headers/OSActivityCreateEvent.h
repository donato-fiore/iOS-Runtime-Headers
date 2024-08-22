// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSACTIVITYCREATEEVENT_H
#define OSACTIVITYCREATEEVENT_H



#import "OSActivityEvent.h"

@interface OSActivityCreateEvent : OSActivityEvent

@property (readonly, nonatomic) NSUInteger creatorActivityID; // ivar: _creatorActivityID
@property (readonly, nonatomic) NSUInteger creatorProcessUniqueID; // ivar: _creatorProcessUniqueID
@property (readonly, nonatomic) NSUInteger senderProgramCounter; // ivar: _senderProgramCounter


-(id)initWithEntry:(struct os_activity_stream_entry_s *)arg0 ;
-(void)_addProperties:(id)arg0 ;


@end


#endif