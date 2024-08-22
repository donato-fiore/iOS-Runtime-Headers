// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSQLSTATEMENTFILERECORDER_H
#define PLSQLSTATEMENTFILERECORDER_H

@class NSMutableDictionary, NSString;
@protocol PLSearchIndexManagerDatabaseConnectionDelegate, OS_dispatch_io, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLSQLiteRecorder.h"
#import "PLPhotoLibraryBundleController.h"

@interface PLSQLStatementFileRecorder : NSObject <PLSearchIndexManagerDatabaseConnectionDelegate>

 {
    NSMutableDictionary *_observationCountByNormalizedStatementSQL;
    NSMutableDictionary *_observationCountByBacktraceHash;
    NSMutableDictionary *_isMutedByBacktraceHash;
    os_unfair_lock_s _observationsLock;
    NSString *_backtraceFilter;
    NSObject<OS_dispatch_io> *_file;
    NSObject<OS_dispatch_queue> *_writingQueue;
    PLSQLiteRecorder *_splSearchDbRecorder;
    PLPhotoLibraryBundleController *_bundleController;
}




+(NSUInteger)_callStackHash;
+(id)_chooseFileURLFromFileURL:(id)arg0 ;
+(id)_daemonSearchIndexManagerFromBundleController:(id)arg0 ;
+(void)_writeRecordingPostambleUsingQueue:(id)arg0 toFile:(id)arg1 ;
+(void)_writeStatements:(id)arg0 toFile:(id)arg1 usingQueue:(id)arg2 ;
-(BOOL)_decorateStatement:(id)arg0 ;
-(BOOL)startRecordingToFileURL:(id)arg0 withTag:(id)arg1 ;
-(BOOL)stopRecording;
-(id)initWithBundleController:(id)arg0 ;
-(void)_installSignalHandler;
-(void)_reconsiderRecordingState;
-(void)didCreateConnection:(struct sqlite3 *)arg0 ;
-(void)willTeardownConnection:(struct sqlite3 *)arg0 ;


@end


#endif