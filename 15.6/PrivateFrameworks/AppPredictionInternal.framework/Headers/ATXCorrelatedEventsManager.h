// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXCORRELATEDEVENTSMANAGER_H
#define ATXCORRELATEDEVENTSMANAGER_H

@class _PASLock;

#import <Foundation/Foundation.h>

#import "ATXCorrelatedEventsDateBuffer.h"

@interface ATXCorrelatedEventsManager : NSObject {
    _PASLock *_correlatedEventsLock;
    _PASLock *_typeAEventDataLock;
    _PASLock *_typeBEventDataLock;
}


@property (readonly, nonatomic) Class firstEventType; // ivar: _firstEventType
@property (readonly, nonatomic) ATXCorrelatedEventsDateBuffer *firstEventTypeDateBuffer; // ivar: _firstEventTypeDateBuffer
@property (readonly, nonatomic) Class secondEventType; // ivar: _secondEventType
@property (readonly, nonatomic) ATXCorrelatedEventsDateBuffer *secondEventTypeDateBuffer; // ivar: _secondEventTypeDateBuffer


+(BOOL)eventsOverlapForEventA:(id)arg0 withDateBuffer:(id)arg1 eventB:(id)arg2 withDateBuffer:(id)arg3 ;
-(id)correlatedEvents;
-(id)initWithFirstEventType:(Class)arg0 firstEventTypeDateBuffer:(id)arg1 secondEventType:(Class)arg2 secondEventTypeDateBuffer:(id)arg3 ;
-(void)correlateEvents;
-(void)insertEvents:(id)arg0 forEventType:(NSInteger)arg1 ;


@end


#endif