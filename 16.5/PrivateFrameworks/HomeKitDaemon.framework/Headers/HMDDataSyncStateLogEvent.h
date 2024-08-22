// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDATASYNCSTATELOGEVENT_H
#define HMDDATASYNCSTATELOGEVENT_H

@class HMMLogEvent;



@interface HMDDataSyncStateLogEvent : HMMLogEvent

@property (readonly) NSUInteger dataSyncState; // ivar: _dataSyncState


-(id)initWithDataSyncState:(NSUInteger)arg0 ;


@end


#endif