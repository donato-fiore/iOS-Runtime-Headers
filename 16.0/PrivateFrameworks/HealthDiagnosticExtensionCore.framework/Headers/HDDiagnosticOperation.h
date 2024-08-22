// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDIAGNOSTICOPERATION_H
#define HDDIAGNOSTICOPERATION_H

@class NSOperation, NSMutableArray, NSURL, NSArray, NSMutableString, NSString;
@protocol HDDiagnosticOperationDelegate, OS_dispatch_queue;



@interface HDDiagnosticOperation : NSOperation {
    NSMutableArray *_attachments;
}


@property (readonly, copy, nonatomic) NSURL *attachmentDirectoryURL; // ivar: _attachmentDirectoryURL
@property (readonly, copy) NSArray *attachments;
@property (weak, nonatomic) NSObject<HDDiagnosticOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSURL *healthDirectoryURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableString *reportContents; // ivar: _reportContents
@property (readonly, copy) NSString *reportFilename;


+(id)operationWithAttachmentDirectoryURL:(id)arg0 ;
-(BOOL)_copyDatabase:(struct sqlite3 *)arg0 toDatabase:(struct sqlite3 *)arg1 ;
-(BOOL)copyDatabaseFromURL:(id)arg0 toURL:(id)arg1 ;
-(CGFloat)absoluteTimeForTimespec:(struct timespec )arg0 ;
-(NSInteger)_reportCountOfObjectsForEntityClass:(Class)arg0 database:(id)arg1 ;
-(NSInteger)_reportCountOfObjectsInTable:(id)arg0 database:(id)arg1 ;
-(NSInteger)fileSizeForURL:(id)arg0 ;
-(NSUInteger)getFileStatisticsForDirectoryWithURL:(id)arg0 earliestModificationDate:(*CGFloat)arg1 totalFileSize:(*NSInteger)arg2 maxFileSize:(*NSInteger)arg3 ;
-(id)_fileAttributesAtURL:(id)arg0 ;
-(id)_headerString;
-(id)fileCreationDateForURL:(id)arg0 ;
-(id)fileModificationDateForURL:(id)arg0 ;
-(id)initWithAttachmentDirectoryURL:(id)arg0 ;
-(id)openReadOnlyDatabaseAtURL:(id)arg0 ;
-(id)prettyPrintFileSize:(NSInteger)arg0 ;
-(id)stringFromDate:(id)arg0 ;
-(void)_appendString:(id)arg0 newLine:(BOOL)arg1 ;
-(void)_queue_submitAttachment:(id)arg0 ;
-(void)appendFormat:(id)arg0 ;
-(void)appendNewline;
-(void)appendSeparator;
-(void)appendString:(id)arg0 ;
-(void)appendStrongSeparator;
-(void)checkSchemaVersionForDatabase:(id)arg0 currentSchema:(int)arg1 futureSchema:(int)arg2 ;
-(void)log:(id)arg0 ;
-(void)main;
-(void)reportCountsForDatabase:(id)arg0 entityClasses:(id)arg1 ;
-(void)reportIntegrityForDatabase:(id)arg0 ;
-(void)reportStatsForDatabaseAtURL:(id)arg0 ;
-(void)run;
-(void)submitAttachment:(id)arg0 ;
-(void)submitAttachments:(id)arg0 ;
-(void)verifyPermissionsForFileAtURL:(id)arg0 ;


@end


#endif