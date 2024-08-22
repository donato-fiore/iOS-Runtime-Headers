// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBSQLCONTEXT_H
#define HMBSQLCONTEXT_H

@class HMFObject, NSString, HMFUnfairLock, NSOperationQueue, NSURL;
@protocol HMFLogging;



@interface HMBSQLContext : HMFObject <HMFLogging>

 {
    *sqlite3_stmt _begin;
    *sqlite3_stmt _commit;
    *sqlite3_stmt _rollback;
}


@property (nonatomic) *sqlite3 context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL finalized; // ivar: _finalized
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMFUnfairLock *lock; // ivar: _lock
@property (retain, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (nonatomic) NSUInteger mutation; // ivar: _mutation
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (readonly, nonatomic) BOOL readOnly; // ivar: _readOnly
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)logCategory;
-(BOOL)fetchSQLite3:(struct sqlite3_stmt *)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)fetchSQLite3:(struct sqlite3_stmt *)arg0 limit:(NSUInteger)arg1 error:(*id)arg2 block:(id)arg3 ;
-(BOOL)fetchSQLite3One:(struct sqlite3_stmt *)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)runSQLite3:(char *)arg0 error:(*id)arg1 ;
-(BOOL)updateSchemaVersionTo:(NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)migrateFromSchemaVersion:(NSInteger)arg0 error:(*id)arg1 ;
-(NSUInteger)execSQLite3:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(NSUInteger)insertSQLite3:(struct sqlite3_stmt *)arg0 error:(*id)arg1 ;
-(id)_prepareFrom:(id)arg0 ;
-(id)attributeDescriptions;
-(id)begin;
-(id)commit;
-(id)execSQLite3:(struct sqlite3_stmt *)arg0 ;
-(id)initWithURL:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)initialize;
-(id)prepare;
-(id)runSQLite3:(char *)arg0 ;
-(id)sqlBlock:(id)arg0 ;
-(id)sqlBlockWithActivity:(id)arg0 block:(id)arg1 ;
-(id)sqlTransaction:(id)arg0 ;
-(id)sqlTransactionWithActivity:(id)arg0 block:(id)arg1 ;
-(void)_finalize;
-(void)close;
-(void)dealloc;
-(void)finalize;
-(void)rollback;


@end


#endif