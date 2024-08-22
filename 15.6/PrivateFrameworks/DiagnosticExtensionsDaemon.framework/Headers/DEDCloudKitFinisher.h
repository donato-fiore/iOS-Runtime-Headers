// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDCLOUDKITFINISHER_H
#define DEDCLOUDKITFINISHER_H

@class NSMutableArray, NSString, ELSManager, NSMutableDictionary;
@protocol DEDFinisher, NSSecureCoding, DEDSecureArchiving, OS_os_log;

#import <Foundation/Foundation.h>

#import "DEDCloudKitClient.h"
#import "DEDBugSession.h"

@interface DEDCloudKitFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving>



@property (retain) NSMutableArray *attachments; // ivar: _attachments
@property (retain, nonatomic) DEDCloudKitClient *cloudKitClient; // ivar: _cloudKitClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ELSManager *elsManager; // ivar: _elsManager
@property (nonatomic) int failedUploads; // ivar: _failedUploads
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (weak) DEDBugSession *session; // ivar: _session
@property (nonatomic) int successfulUploads; // ivar: _successfulUploads
@property (readonly) Class superclass;
@property NSUInteger totalUploadSize; // ivar: _totalUploadSize
@property (retain) NSMutableDictionary *uploadedBytes; // ivar: _uploadedBytes


+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(id)createAttachmentGroupStatusWithAttachmentGroupModel:(id)arg0 ;
-(id)createAttachmentGroupWithData:(id)arg0 ;
-(id)createAttachmentModelWithURL:(id)arg0 attachmentGroupModel:(id)arg1 ;
-(id)encryptLogsForExtensionIdentifier:(id)arg0 withAttachmentUrl:(id)arg1 ;
-(id)encryptLogsIfNecessary:(id)arg0 ;
-(id)extractExtensionIdentifierFromAttachmentUrl:(id)arg0 ;
-(id)getAttachmentURLs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 session:(id)arg1 ;
-(void)createAttachmentGroupStatusForAttachmentGroup:(id)arg0 ;
-(void)didCancelCollectionOnExtension:(id)arg0 ;
-(void)didCollectAttachmentGroup:(id)arg0 ;
-(void)didFinishAllCollections;
-(void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishSession:(id)arg0 withConfiguration:(id)arg1 ;
-(void)localCleanup;
-(void)logError:(id)arg0 forRecord:(id)arg1 ;
-(void)postProcessRecord:(id)arg0 withError:(id)arg1 attachmentGroup:(id)arg2 ;
-(void)processAttachmentsWithRecord:(id)arg0 withProgress:(CGFloat)arg1 ;


@end


#endif