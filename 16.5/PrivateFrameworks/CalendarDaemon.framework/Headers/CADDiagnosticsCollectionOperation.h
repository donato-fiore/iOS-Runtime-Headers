// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADDIAGNOSTICSCOLLECTIONOPERATION_H
#define CADDIAGNOSTICSCOLLECTIONOPERATION_H

@class NSOperation, NSMutableDictionary, NSMutableSet, NSURL, NSDateFormatter, NSString;
@protocol CADDiagnosticLogCollector, CADDiagnosticLogContext;


#import "ClientConnection.h"

@interface CADDiagnosticsCollectionOperation : NSOperation <CADDiagnosticLogCollector, CADDiagnosticLogContext>

 {
    ClientConnection *_conn;
    NSInteger _options;
    int _batchDepth;
    NSMutableDictionary *_files;
    NSMutableSet *_changedFiles;
    BOOL _finished;
    NSMutableSet *_temporaryFileNames;
    NSURL *_logDirectoryURL;
    NSURL *_incomingLogDirectoryURL;
    NSURL *_completedLogDirectoryURL;
    os_unfair_lock_s _lock;
    *__sFILE _logFile;
    NSURL *_logFileURL;
    NSDateFormatter *_dateFormatter;
}


@property (readonly, nonatomic) BOOL canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL redactLogs;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int token; // ivar: _token


-(id)_createLogDirectory;
-(id)_createLogFile;
-(id)_randomString;
-(id)finalFileForFile:(id)arg0 ;
-(id)initWithConnection:(id)arg0 token:(unsigned int)arg1 options:(NSInteger)arg2 ;
-(id)loadLogCollectors;
-(id)temporaryFileForName:(id)arg0 ;
-(void)batch:(id)arg0 ;
-(void)collect:(id)arg0 ;
-(void)deleteTemporaryFile:(id)arg0 ;
-(void)determineExpectedOutputFiles:(id)arg0 ;
-(void)finish;
-(void)log:(id)arg0 ;
-(void)logError:(id)arg0 ;
-(void)logWithLevel:(unsigned char)arg0 formatString:(id)arg1 arguments:(char *)arg2 ;
-(void)main;
-(void)reportFileStatusChangesToClient;
-(void)setStatus:(NSUInteger)arg0 forFile:(id)arg1 ;


@end


#endif