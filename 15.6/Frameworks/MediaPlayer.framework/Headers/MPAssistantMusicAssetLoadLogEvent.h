// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPASSISTANTMUSICASSETLOADLOGEVENT_H
#define MPASSISTANTMUSICASSETLOADLOGEVENT_H



#import "MPAssistantMusicLogEvent.h"

@interface MPAssistantMusicAssetLoadLogEvent : MPAssistantMusicLogEvent

@property (nonatomic) CGFloat duration; // ivar: _duration


-(NSInteger)eventCode;
-(id)eventName;
-(id)eventPayload;


@end


#endif