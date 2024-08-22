// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILDROPMAILDELIVERY_H
#define MFMAILDROPMAILDELIVERY_H

@class NSArray, EMMailDropMetadata;


#import "MFOutgoingMessageDelivery.h"

@interface MFMailDropMailDelivery : MFOutgoingMessageDelivery

@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (retain, nonatomic) EMMailDropMetadata *imageArchiveMetadata; // ivar: _imageArchiveMetadata
@property (nonatomic) NSInteger mailDropState; // ivar: _mailDropState


+(id)_mailDropZone;
-(BOOL)_uploadAttachmentsViaCloudKit:(id)arg0 zone:(id)arg1 records:(id)arg2 zippedPhotos:(id)arg3 attachmentRecords:(id)arg4 images:(id)arg5 ;
-(BOOL)updateMessageWithAttachmentsSynchronously;
-(NSInteger)_processAttachments;
-(id)_attachmentManager;
-(id)ckDatabase;
-(id)deliverSynchronouslyWithCompletion:(id)arg0 ;
-(id)publishRecord:(id)arg0 database:(id)arg1 attachmentRecords:(id)arg2 images:(id)arg3 allowsCellularAccess:(BOOL)arg4 ;
-(id)scaledImages:(id)arg0 ;
-(void)_recordZoneIDInDatabase:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif