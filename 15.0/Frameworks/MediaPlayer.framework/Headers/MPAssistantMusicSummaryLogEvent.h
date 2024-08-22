// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPASSISTANTMUSICSUMMARYLOGEVENT_H
#define MPASSISTANTMUSICSUMMARYLOGEVENT_H

@class NSNumber;


#import "MPAssistantMusicLogEvent.h"

@interface MPAssistantMusicSummaryLogEvent : MPAssistantMusicLogEvent

@property (nonatomic) CGFloat blockingSecureKeyLoadDuration; // ivar: _blockingSecureKeyLoadDuration
@property (copy, nonatomic) NSNumber *perceivedTotalStartupTime; // ivar: _perceivedTotalStartupTime
@property (nonatomic) CGFloat tracklistLoadDuration; // ivar: _tracklistLoadDuration


-(NSInteger)eventCode;
-(id)eventName;
-(id)eventPayload;


@end


#endif