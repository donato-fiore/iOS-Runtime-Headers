// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFDOWNLOAD_H
#define _SFDOWNLOAD_H

@class _WKDownload, WBSFluidProgressState, NSTimer, WKWebView, NSData, NSString, NSURLRequest, NSURL, NSDate, NSDictionary, WBSFluidProgressController, NSUUID, SFQuickLookDocument, NSURLResponse, _WKUserInitiatedAction;
@protocol SFDownloadFileDelegate, _WKDownloadDelegate, WBSFluidProgressStateSource, _SFDownloadDelegate, _SFDownloadPlaceholderImporter;

#import <Foundation/Foundation.h>

#import "SFDownloadFile.h"

@interface _SFDownload : NSObject <SFDownloadFileDelegate, _WKDownloadDelegate, WBSFluidProgressStateSource>

 {
    _WKDownload *_download;
    BOOL _wasCanceled;
    WBSFluidProgressState *_fluidProgressState;
    CGFloat _timeLastProgressNotificationWasSent;
    NSInteger _cachedFileType;
    NSTimer *_reportUpdatedProgressTimer;
    WKWebView *_originatingWebView;
    NSData *_resumeData;
    SFDownloadFile *_placeholderFile;
    SFDownloadFile *_completedFile;
    NSString *_suggestedFilename;
    NSURLRequest *_request;
}


@property (readonly, nonatomic) NSInteger bytesExpected; // ivar: _bytesExpected
@property (readonly, nonatomic) NSUInteger bytesLoaded; // ivar: _bytesLoaded
@property (readonly, nonatomic) BOOL canResume;
@property (readonly, nonatomic) BOOL canReveal;
@property (readonly, nonatomic) NSURL *completedFileURL;
@property (readonly, nonatomic) NSInteger dataOwner;
@property (readonly, nonatomic) NSDate *dateAdded; // ivar: _dateAdded
@property (readonly, nonatomic) NSDate *dateFinished; // ivar: _dateFinished
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFDownloadDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL explicitlySaved; // ivar: _explicitlySaved
@property (readonly, nonatomic) NSString *fileDownloadPath; // ivar: _fileDownloadPath
@property (readonly, nonatomic) NSInteger fileType;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *filenameWithoutExtension;
@property (weak, nonatomic) WBSFluidProgressController *fluidProgressController; // ivar: _fluidProgressController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isIdle) BOOL idle;
@property (readonly, copy, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (weak, nonatomic) NSObject<_SFDownloadPlaceholderImporter> *placeholderImporter; // ivar: _placeholderImporter
@property (readonly, nonatomic) CGFloat progress;
@property (retain, nonatomic) SFQuickLookDocument *quickLookDocument; // ivar: _quickLookDocument
@property (readonly, nonatomic) NSURLResponse *response; // ivar: _response
@property (readonly, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesPrompt; // ivar: _suppressesPrompt
@property (readonly, nonatomic) _WKUserInitiatedAction *userInitiatedAction; // ivar: _userInitiatedAction
@property (readonly, copy, nonatomic) NSString *uti; // ivar: _uti
@property (readonly, nonatomic) _WKDownload *wkDownload;


+(id)downloadDestinationPathWithFilename:(id)arg0 ;
+(id)provisionalDownloadWithMIMEType:(id)arg0 request:(id)arg1 response:(id)arg2 filename:(id)arg3 uti:(id)arg4 userInitiatedAction:(id)arg5 ;
-(BOOL)createFluidProgressState;
-(BOOL)hasFailedURL;
-(BOOL)removeFromDisk;
-(CGFloat)estimatedProgress;
-(id)_createResumeData;
-(id)completedFileURL:(*BOOL)arg0 ;
-(id)expectedOrCurrentURL;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 didUpdateRepresentation:(*BOOL)arg1 ;
-(void)_cancelReportUpdatedProgressTimer;
-(void)_continueAfterDecidingFileDownloadPath:(id)arg0 ;
-(void)_continueAfterDownloadConfirmation:(BOOL)arg0 destinationCompletionHandler:(id)arg1 ;
-(void)_didImportFileAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_didImportPlaceholderAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_didUpdateBytesLoaded;
-(void)_download:(id)arg0 decideDestinationWithSuggestedFilename:(id)arg1 completionHandler:(id)arg2 ;
-(void)_download:(id)arg0 didFailWithError:(id)arg1 ;
-(void)_download:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)_download:(id)arg0 didWriteData:(NSUInteger)arg1 totalBytesWritten:(NSUInteger)arg2 totalBytesExpectedToWrite:(NSUInteger)arg3 ;
-(void)_downloadDidCancel:(id)arg0 ;
-(void)_downloadDidFinish:(id)arg0 ;
-(void)_downloadDidStart:(id)arg0 ;
-(void)_downloadProcessDidCrash:(id)arg0 ;
-(void)_importCompleteDownloadIfNeeded;
-(void)_importPlaceholderIfNeeded:(id)arg0 ;
-(void)_notifyDelegateOfFinishedDownload;
-(void)_reportUpdatedProgressNow;
-(void)_reportUpdatedProgressSoon;
-(void)_reportUpdatedProgressTimerFired:(id)arg0 ;
-(void)_validateSandboxAccessToURL:(id)arg0 ;
-(void)cancel;
-(void)clearFluidProgressState;
-(void)dealloc;
-(void)downloadFileContentsDidChange:(id)arg0 ;
-(void)downloadFileDidChangeURL:(id)arg0 ;
-(void)downloadFileWillBeDeleted:(id)arg0 ;
-(void)removeDataAndPlaceholderFromDisk;
-(void)resumeInProcessPool:(id)arg0 ;
-(void)reveal;


@end


#endif