// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACCESSORYDIAGNOSTICSUPLOADMANAGER_H
#define HFACCESSORYDIAGNOSTICSUPLOADMANAGER_H

@class NSURLSession, NSString, NSMutableDictionary, NSMutableSet, NSMutableOrderedSet;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface HFAccessoryDiagnosticsUploadManager : NSObject <NSURLSessionDelegate>



@property (retain, nonatomic) NSURLSession *backgroundSession; // ivar: _backgroundSession
@property (copy, nonatomic) id *backgroundUrlSessionCompletionHandler; // ivar: _backgroundUrlSessionCompletionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *diagnosticItems; // ivar: _diagnosticItems
@property (retain, nonatomic) NSMutableSet *failedUploadIdentifiers; // ivar: _failedUploadIdentifiers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableOrderedSet *pendingIdentifiers; // ivar: _pendingIdentifiers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *uploadedIdentifiers; // ivar: _uploadedIdentifiers


+(id)backgroundURLSessionIdentifier;
+(id)sharedManager;
-(BOOL)_didPreviouslySubmitLog:(id)arg0 ;
-(BOOL)_isValidFilenameIdentifier:(id)arg0 ;
-(BOOL)_needsToPurgeOldLogs;
-(id)_nextFilenameIdentifierToProcess;
-(id)filePathForIdentifier:(id)arg0 ;
-(id)fileURLForIdentifier:(id)arg0 ;
-(id)init;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0 ;
-(void)_addToPendingUploads:(id)arg0 ;
-(void)_cleanUpLocalFilesForIdentifier:(id)arg0 ;
-(void)_failAttemptToUploadCurrentIdentifier;
-(void)_finalizeHandlingOfIdentifier:(id)arg0 ;
-(void)_submitNextPendingLog;
-(void)_updatePreviousLogIdentifiers:(id)arg0 forKey:(id)arg1 ;
-(void)purgeStaleSubmittedLogs;
-(void)resumeServiceForURLSessionIdentifier:(id)arg0 ;
-(void)updateLastPurgeDate;
-(void)uploadDiagnosticLogUsingItem:(id)arg0 ;
-(void)willResignActive:(id)arg0 ;


@end


#endif