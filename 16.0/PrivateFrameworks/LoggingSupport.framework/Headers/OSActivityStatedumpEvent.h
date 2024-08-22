// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSACTIVITYSTATEDUMPEVENT_H
#define OSACTIVITYSTATEDUMPEVENT_H



#import "OSActivityEvent.h"

@interface OSActivityStatedumpEvent : OSActivityEvent



-(id)initWithEntry:(struct os_activity_stream_entry_s *)arg0 ;
-(void)_addProperties:(id)arg0 ;


@end


#endif