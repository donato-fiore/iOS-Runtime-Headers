// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCHANGESTORE_H
#define PLCHANGESTORE_H

@class NSMutableArray, NSURL, PLPhotoLibraryPathManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLChangeStore : NSObject {
    NSObject<OS_dispatch_queue> *_eventsIsolation;
    NSMutableArray *_events;
    *sqlite3 _database;
    NSObject<OS_dispatch_queue> *_databaseIsolation;
    NSUInteger _firstOnDiskEventIndex;
    int _sqliteOpenFlags;
}


@property (readonly, nonatomic) NSURL *databaseFileURL; // ivar: _databaseFileURL
@property (readonly, nonatomic) NSUInteger firstOnDiskEventIndex;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *photoLibraryPathManager; // ivar: _photoLibraryPathManager


// -(BOOL)getInMemoryEventsSinceIndex:(NSUInteger)arg0 filteredBy:(id)arg1 onQueue:(unk)arg2 withBlock:(id)arg3  ;
-(NSUInteger)lastIndex;
-(id)initWithPhotoLibraryPathManager:(id)arg0 ;
// -(id)newArrayWithEventsSince:(NSUInteger)arg0 filteredBy:(id)arg1 lastEventIndex:(unk)arg2  ;
-(struct sqlite3_stmt *)prepareStatement:(char *)arg0 ;
-(void)_backupStore;
-(void)_clearStore;
-(void)bindInt64:(NSInteger)arg0 toStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2 ;
-(void)bindInt:(int)arg0 toStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2 ;
-(void)bindString:(id)arg0 toStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2 ;
-(void)bindUUID:(unsigned char)arg0 toStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2 ;
-(void)bindXPCData:(id)arg0 toStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2 ;
-(void)clearStore:(id)arg0 ;
-(void)dealloc;
-(void)enumeratePersistedDidSaveEventsInRange:(struct _NSRange )arg0 withBlock:(id)arg1 ;
// -(void)getEventsSinceIndex:(NSUInteger)arg0 filteredBy:(id)arg1 onQueue:(unk)arg2 withBlock:(id)arg3  ;
// -(void)getOnDiskEventsSinceIndex:(NSUInteger)arg0 filteredBy:(id)arg1 onQueue:(unk)arg2 withBlock:(id)arg3  ;
-(void)openDatabase;
-(void)performBlockAsTransaction:(id)arg0 ;
-(void)prepareAndEvaluateStatement:(char *)arg0 ;
-(void)setupDatabase;


@end


#endif