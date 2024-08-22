// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSQLITEDATABASE_H
#define WBSSQLITEDATABASE_H

@class NSString, NSURL;
@protocol WBSSQLiteDatabaseDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSSQLiteDatabase : NSObject {
    NSString *_lastSQLQuery;
}


@property (readonly, nonatomic) NSInteger changedRowCount;
@property (weak, nonatomic) NSObject<WBSSQLiteDatabaseDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) *sqlite3 handle; // ivar: _handle
@property (readonly, nonatomic) int lastErrorCode;
@property (readonly, nonatomic) NSString *lastErrorMessage;
@property (readonly, nonatomic) NSInteger lastInsertRowID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)_errorWithErrorCode:(int)arg0 userInfo:(id)arg1 ;
+(id)inMemoryDatabaseURL;
+(id)privateOnDiskDatabaseURL;
+(id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)arg0 ;
+(id)writeAheadLogURLForDatabaseURL:(id)arg0 ;
+(void)initialize;
-(BOOL)_openWithFlags:(int)arg0 vfs:(id)arg1 error:(*id)arg2 ;
-(BOOL)enableWAL:(*id)arg0 ;
-(BOOL)executeQuery:(id)arg0 error:(*id)arg1 ;
-(BOOL)openWithAccessType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)openWithAccessType:(NSInteger)arg0 protectionType:(NSInteger)arg1 vfs:(id)arg2 error:(*id)arg3 ;
-(BOOL)openWithAccessType:(NSInteger)arg0 vfs:(id)arg1 error:(*id)arg2 ;
-(BOOL)reportErrorWithCode:(int)arg0 query:(id)arg1 error:(*id)arg2 ;
-(BOOL)reportErrorWithCode:(int)arg0 statement:(struct sqlite3_stmt *)arg1 error:(*id)arg2 ;
-(BOOL)tryToPerformTransactionInBlock:(id)arg0 ;
-(id)checkIntegrity;
-(id)fetchQuery:(id)arg0 ;
-(id)fetchQuery:(id)arg0 stringArguments:(id)arg1 ;
-(id)initWithURL:(id)arg0 queue:(id)arg1 ;
-(id)lastErrorWithMethodName:(char *)arg0 ;
-(int)checkpointWriteAheadLogWithLogFrameCount:(*int)arg0 checkpointedFrameCount:(*int)arg1 ;
-(int)close;
-(void)_reportSevereError:(id)arg0 ;
-(void)dealloc;
-(void)setBusyTimeout:(CGFloat)arg0 ;


@end


#endif