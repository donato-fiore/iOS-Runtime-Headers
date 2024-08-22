// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXNOTIFICATIONEVENT_H
#define ATXNOTIFICATIONEVENT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface ATXNotificationEvent : NSObject {
    BOOL _ending;
    BOOL _hiding;
}


@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (nonatomic) BOOL fromOffScreen; // ivar: _fromOffScreen
@property (nonatomic) NSUInteger pos; // ivar: _pos
@property (nonatomic) BOOL topOfPile; // ivar: _topOfPile
@property (retain, nonatomic) NSDate *ts; // ivar: _ts


+(id)clearEventSet;
+(id)endingEventSet;
+(id)hidingEventSet;
-(BOOL)isEndingEvent;
-(BOOL)isHidingEvent;
-(id)init:(NSInteger)arg0 timestamp:(id)arg1 position:(NSUInteger)arg2 ;
-(id)init:(NSInteger)arg0 timestamp:(id)arg1 position:(NSUInteger)arg2 fromOffScreen:(BOOL)arg3 ;
-(id)init:(NSInteger)arg0 timestamp:(id)arg1 position:(NSUInteger)arg2 fromOffScreen:(BOOL)arg3 topOfPile:(BOOL)arg4 ;
-(id)pbmsg;


@end


#endif