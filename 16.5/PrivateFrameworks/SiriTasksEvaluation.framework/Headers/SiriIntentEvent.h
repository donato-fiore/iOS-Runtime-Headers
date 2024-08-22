// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIINTENTEVENT_H
#define SIRIINTENTEVENT_H

@class NSDate, NSData, NSString;

#import <Foundation/Foundation.h>


@interface SiriIntentEvent : NSObject

@property (readonly, copy, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (readonly, nonatomic) NSData *eventData; // ivar: _eventData
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) NSString *intentId; // ivar: _intentId


-(id)initWithIntentId:(id)arg0 eventType:(NSInteger)arg1 eventData:(id)arg2 createdAt:(id)arg3 ;


@end


#endif