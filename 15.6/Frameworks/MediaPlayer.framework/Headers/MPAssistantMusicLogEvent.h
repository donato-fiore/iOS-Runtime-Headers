// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPASSISTANTMUSICLOGEVENT_H
#define MPASSISTANTMUSICLOGEVENT_H

@class NSString, NSMutableDictionary;
@protocol MPAssistantLogEvent;

#import <Foundation/Foundation.h>


@interface MPAssistantMusicLogEvent : NSObject <MPAssistantLogEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger eventCode;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSMutableDictionary *eventPayload;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int sessionID; // ivar: _sessionID
@property (copy, nonatomic) NSString *siriSessionIdentifier; // ivar: _siriSessionIdentifier
@property (readonly) Class superclass;




@end


#endif