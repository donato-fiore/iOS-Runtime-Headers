// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDRADARFINISHER_H
#define DEDRADARFINISHER_H

@class NSString, NSMutableSet, NSURLSession;
@protocol NSURLSessionDataDelegate, DEDFinisher, NSSecureCoding, DEDSecureArchiving, OS_os_log;

#import <Foundation/Foundation.h>

#import "DEDBugSessionConfiguration.h"
#import "DEDBugSession.h"

@interface DEDRadarFinisher : NSObject <NSURLSessionDataDelegate, DEDFinisher, NSSecureCoding, DEDSecureArchiving>



@property (weak) DEDBugSessionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property float percentComplete; // ivar: _percentComplete
@property int retryAttemptCount; // ivar: _retryAttemptCount
@property (weak) DEDBugSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain) NSMutableSet *uploadItems; // ivar: _uploadItems
@property (retain) NSURLSession *urlSession; // ivar: _urlSession
@property (retain) NSMutableSet *verificationTasks; // ivar: _verificationTasks


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(BOOL)allUploadsComplete;
-(BOOL)allVerificationTasksComplete;
-(id)createUploadTaskForAttachment:(id)arg0 atRadarURL:(id)arg1 ;
-(id)folderNameForAttachmentGroup:(id)arg0 ;
-(id)getUploadItemForTask:(id)arg0 ;
-(id)getVerificationTaskForDataTask:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 session:(id)arg1 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishRadarUploadSession;
-(void)finishSession:(id)arg0 withConfiguration:(id)arg1 ;
-(void)processVerifyTaskResults;
-(void)startAttachmentVerificationTasks;


@end


#endif