// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCOREDATARECORDER_H
#define PLCOREDATARECORDER_H


#import <Foundation/Foundation.h>


@interface PLCoreDataRecorder : NSObject



+(BOOL)_installConnectionSwizzle;
+(BOOL)_installRecorder;
+(BOOL)_shouldRecordPhotoLibraryDb:(struct sqlite3 *)arg0 ;
+(BOOL)isRecording;
// +(BOOL)startRecordingForLibraries:(id)arg0 limitToMarkedThreads:(BOOL)arg1 includeBindVariables:(BOOL)arg2 includeIOMetrics:(BOOL)arg3 entryDecorator:(id)arg4 entriesAvailableHandler:(unk)arg5  ;
+(BOOL)stopRecording;
+(NSInteger)_libraryIDForDb:(struct sqlite3 *)arg0 ;
+(id)_recordedStatementsAndReset:(BOOL)arg0 ;
+(id)recordedStatements;
+(id)recordedStatementsAndReset;
+(id)recordedStatementsDescription;
+(struct sqlite3 *)_dbHandleFromConnection:(id)arg0 ;
+(void)_recordExecutedStatement:(struct sqlite3_stmt *)arg0 db:(struct sqlite3 *)arg1 normalizedSQL:(id)arg2 expandedSQL:(id)arg3 plan:(id)arg4 duration:(CGFloat)arg5 pageHitCountBeforeExecution:(int)arg6 pageMissCountBeforeExecution:(int)arg7 ;
+(void)_reset;


@end


#endif