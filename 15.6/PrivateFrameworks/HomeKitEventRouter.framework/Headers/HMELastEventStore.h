// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMELASTEVENTSTORE_H
#define HMELASTEVENTSTORE_H

@class NSString;
@protocol HMEEventPersistence, OS_os_log;

#import <Foundation/Foundation.h>


@interface HMELastEventStore : NSObject <HMEEventPersistence>

 {
    NSObject<OS_os_log> *_logger;
    *sqlite3 _db;
    *sqlite3_stmt insertEventPreparedStatement;
    *sqlite3_stmt replaceEventIfMoreRecentOrDifferentSourcePreparedStatement;
    *sqlite3_stmt selectEventByKeyPreparedStatement;
    *sqlite3_stmt deleteEventByKeyPreparedStatement;
    *sqlite3_stmt deleteBeforeTimestampPreparedStatement;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *fileName; // ivar: _fileName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)startup;
-(BOOL)writer:(id)arg0 saveEventIfAllowed:(id)arg1 topic:(id)arg2 ;
-(BOOL)writer:(id)arg0 saveEventIfDifferent:(id)arg1 topic:(id)arg2 ;
-(id)eventsForTopicFilters:(id)arg0 ;
-(id)eventsForTopicFilters:(id)arg0 sinceReferenceTimestamp:(CGFloat)arg1 ;
-(id)initInMemoryStore;
-(id)initWithFileName:(id)arg0 ;
-(id)lastEventForTopic:(id)arg0 ;
-(void)dealloc;
-(void)resetBeforeReferenceTimestamp:(CGFloat)arg0 ;
-(void)resetEventStore;
-(void)resetTopic:(id)arg0 ;
-(void)writer:(id)arg0 saveEvent:(id)arg1 topic:(id)arg2 ;


@end


#endif