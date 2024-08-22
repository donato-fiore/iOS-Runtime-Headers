// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3MEDIALIBRARYWRITER_H
#define ML3MEDIALIBRARYWRITER_H

@class NSTimer, NSOperationQueue, NSMutableDictionary;
@protocol ML3MediaLibraryWriterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ML3MediaLibraryWriter : NSObject {
    NSTimer *_watchdogTimer;
}


@property (readonly, nonatomic) NSOperationQueue *databaseOperationQueue; // ivar: _databaseOperationQueue
@property (readonly, nonatomic) NSOperationQueue *databaseOperationSerialQueue; // ivar: _databaseOperationSerialQueue
@property (weak, nonatomic) NSObject<ML3MediaLibraryWriterDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended
@property (readonly, nonatomic) NSMutableDictionary *transactionMap; // ivar: _transactionMap
@property (nonatomic) CGFloat transactionTimeout; // ivar: _transactionTimeout


+(id)writerErrorWithCode:(NSInteger)arg0 description:(id)arg1 ;
+(id)writerErrorWithCode:(NSInteger)arg0 description:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_shouldWatchdogTransaction:(id)arg0 ;
-(BOOL)endTransaction:(id)arg0 shouldCommit:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)executeUntrustedUpdate:(id)arg0 withParameters:(id)arg1 onTransaction:(id)arg2 error:(*id)arg3 ;
-(BOOL)executeUpdate:(id)arg0 withParameters:(id)arg1 onTransaction:(id)arg2 error:(*id)arg3 ;
-(id)_allDatabaseOperations;
-(id)_createNewTransactionForLibrary:(id)arg0 fromClient:(id)arg1 readOnly:(BOOL)arg2 ;
-(id)_transactionForIdentifier:(id)arg0 ;
-(id)beginTransactionForLibrary:(id)arg0 withClient:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)description;
-(id)executeQuery:(id)arg0 withParameters:(id)arg1 options:(id)arg2 onTransaction:(id)arg3 error:(*id)arg4 ;
-(id)executeUntrustedQuery:(id)arg0 withParameters:(id)arg1 options:(id)arg2 onTransaction:(id)arg3 error:(*id)arg4 ;
-(id)init;
-(void)_destroyTransaction:(id)arg0 forceRelinquishConnection:(BOOL)arg1 ;
-(void)_destroyTransactionForIdentifier:(id)arg0 forceRelinquishConnection:(BOOL)arg1 ;
-(void)_registerTransaction:(id)arg0 ;
-(void)_setupWatchdogTimer;
-(void)_tearDownWatchdogTimer;
-(void)_unregisterTransaction:(id)arg0 ;
-(void)_watchdogTimerFired:(id)arg0 ;
-(void)cancelActiveTransactionForClient:(id)arg0 ;
-(void)cancelAllActiveDatabaseOperationsAndWaitUntilFinished:(BOOL)arg0 ;
-(void)cancelAllActiveDatabaseOperationsForClient:(id)arg0 waitUntilFinished:(BOOL)arg1 ;
-(void)cancelAllActiveTransactions;
-(void)dealloc;
-(void)performDatabaseOperation:(NSUInteger)arg0 onLibrary:(id)arg1 withAttributes:(id)arg2 options:(id)arg3 fromClient:(id)arg4 completionHandler:(id)arg5 ;
-(void)reset;


@end


#endif