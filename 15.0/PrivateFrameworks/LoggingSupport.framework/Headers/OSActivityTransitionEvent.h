// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSACTIVITYTRANSITIONEVENT_H
#define OSACTIVITYTRANSITIONEVENT_H



#import "OSActivityEvent.h"

@interface OSActivityTransitionEvent : OSActivityEvent

@property (readonly, nonatomic) NSUInteger transitionToActivityID; // ivar: _transitionToActivityID


-(id)initWithEntry:(struct os_activity_stream_entry_s *)arg0 ;
-(void)_addProperties:(id)arg0 ;


@end


#endif