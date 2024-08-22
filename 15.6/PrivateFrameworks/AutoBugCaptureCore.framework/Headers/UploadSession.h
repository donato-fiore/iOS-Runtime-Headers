// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPLOADSESSION_H
#define UPLOADSESSION_H

@class NSURL, NSDictionary, NSURLSession, NSMutableArray, NSMutableDictionary, NWPathEvaluator, NSDate, NSString, NSNumber, NSArray;
@protocol NSURLSessionDelegate, NSURLSessionTaskDelegate, UploadSessionDelegate;

#import <Foundation/Foundation.h>


@interface UploadSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>

 {
    NSURL *_uploadDestination;
    NSDictionary *_extraHTTPHeaders;
    NSURLSession *_urlSession;
    NSMutableArray *_uploadSessionTasks;
    NSMutableDictionary *_uploadSessionTaskToFileUploadInfo;
    NWPathEvaluator *_primaryPathEvaluator;
    NSInteger _primaryInterfaceType;
}


@property (nonatomic) NSUInteger apnsIdentifier; // ivar: _apnsIdentifier
@property (retain, nonatomic) NSDate *completedTime; // ivar: _completedTime
@property (nonatomic) BOOL consentWasRequired; // ivar: _consentWasRequired
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL radarAPI; // ivar: _radarAPI
@property (retain, nonatomic) NSNumber *radarID; // ivar: _radarID
@property (retain, nonatomic) NSDate *requestedTime; // ivar: _requestedTime
@property (retain, nonatomic) NSDate *scheduledTime; // ivar: _scheduledTime
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<UploadSessionDelegate> *uploadManager; // ivar: _uploadManager
@property (readonly, nonatomic) NSArray *uploadingFilesInfo; // ivar: _uploadingFilesInfo
@property (readonly, nonatomic) NSInteger urgencyFlag; // ivar: _urgencyFlag


+(id)sessionConfigurationWithIdentifier:(id)arg0 urgency:(NSInteger)arg1 ;
-(BOOL)_allFilesUploaded;
-(id)destinationURLForFile:(id)arg0 ;
-(id)initWithFilesToUpload:(id)arg0 destination:(id)arg1 urgency:(NSInteger)arg2 additionalHTTPHeaders:(id)arg3 ;
-(id)uploadTaskForFileInfo:(id)arg0 ;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareUploadSession;
-(void)startUploadSession;


@end


#endif