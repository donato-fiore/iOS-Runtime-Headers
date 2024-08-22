// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    *sqlite3_stmt deleteEventByKeyLikePreparedStatement;
    *sqlite3_stmt deleteBeforeTimestampPreparedStatement;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *fileName; // ivar: _fileName
@property (readonly) NSUInteger hash;
@property (retain) NSString *integrityCheckError; // ivar: _integrityCheckError
@property (retain) NSString *readJournalMode; // ivar: _readJournalMode
@property (readonly) Class superclass;
@property (readonly) BOOL useWal; // ivar: _useWal


-(BOOL)startup;
-(BOOL)writer:(id)arg0 saveEventIfAllowed:(id)arg1 topic:(id)arg2 ;
-(BOOL)writer:(id)arg0 saveEventIfDifferent:(id)arg1 topic:(id)arg2 ;
-(id)eventsForTopicFilters:(id)arg0 ;
-(id)eventsForTopicFilters:(id)arg0 sinceReferenceTimestamp:(CGFloat)arg1 ;
-(id)initInMemoryStore;
-(id)initWithFileName:(id)arg0 ;
-(id)initWithFileName:(id)arg0 useWal:(BOOL)arg1 ;
-(id)lastEventForTopic:(id)arg0 ;
-(void)dealloc;
-(void)resetBeforeReferenceTimestamp:(CGFloat)arg0 ;
-(void)resetEventStore;
-(void)resetTopic:(id)arg0 ;
-(void)resetWildcardTopics:(id)arg0 ;
-(void)writer:(id)arg0 saveEvent:(id)arg1 topic:(id)arg2 ;


@end


#endif