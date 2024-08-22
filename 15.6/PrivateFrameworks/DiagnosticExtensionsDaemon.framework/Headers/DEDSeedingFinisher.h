// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDSEEDINGFINISHER_H
#define DEDSEEDINGFINISHER_H

@class NSString, NSMutableDictionary, NSMutableSet;
@protocol DEDFinisherState, DEDFinisher, DEDSeedingClientDelegate, DEDSecureArchiving, NSSecureCoding, OS_os_log, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "DEDSeedingClient.h"
#import "DEDBugSessionConfiguration.h"
#import "DEDBugSession.h"

@interface DEDSeedingFinisher : NSObject <DEDFinisherState, DEDFinisher, DEDSeedingClientDelegate, DEDSecureArchiving, NSSecureCoding>



@property NSInteger bytesUploadedFromAllFiles; // ivar: _bytesUploadedFromAllFiles
@property (retain) DEDSeedingClient *client; // ivar: _client
@property (retain) DEDBugSessionConfiguration *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isPreparing; // ivar: _isPreparing
@property NSInteger lastUploadPercentageReported; // ivar: _lastUploadPercentageReported
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (retain) NSMutableDictionary *promises; // ivar: _promises
@property (weak) DEDBugSession *session; // ivar: _session
@property (readonly) Class superclass;
@property NSInteger totalUploadSize; // ivar: _totalUploadSize
@property (retain) NSObject<OS_os_transaction> *transaction; // ivar: _transaction
@property (nonatomic) int uploadProgressCounter; // ivar: _uploadProgressCounter
@property (retain) NSMutableSet *uploads; // ivar: _uploads


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(BOOL)isCompressing;
-(BOOL)isUploading;
-(BOOL)shouldReportProgress;
-(BOOL)uploadFinished;
-(id)additionalStateInfo;
-(id)archiveItemsInDirectory:(id)arg0 ;
-(id)attachmentHandler;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 session:(id)arg1 ;
-(id)prepareSessionDirectoryForSubmission:(id)arg0 ;
-(id)prepareUpload:(id)arg0 forSubmissionWithSession:(id)arg1 metadata:(id)arg2 ;
-(id)uploadItemForTask:(id)arg0 ;
-(void)cleanup;
-(void)didAdoptAttachmentGroup:(id)arg0 ;
-(void)didCancelCollectionOnExtension:(id)arg0 ;
-(void)didCollectAttachmentGroup:(id)arg0 ;
-(void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishSession:(id)arg0 withConfiguration:(id)arg1 ;
-(void)save;
-(void)updateUploadProgressOnSessionIfNeeded;
-(void)uploadTask:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)uploadTask:(id)arg0 didSendBytes:(NSInteger)arg1 totalBytesExpectedToSend:(NSInteger)arg2 ;


@end


#endif