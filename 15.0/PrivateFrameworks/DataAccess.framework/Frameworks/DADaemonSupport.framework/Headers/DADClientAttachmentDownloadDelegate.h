// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DADCLIENTATTACHMENTDOWNLOADDELEGATE_H
#define DADCLIENTATTACHMENTDOWNLOADDELEGATE_H

@class NSString;
@protocol DAEventsAttachmentDownloadConsumer;


#import "DADClientDelegate.h"

@interface DADClientAttachmentDownloadDelegate : DADClientDelegate <DAEventsAttachmentDownloadConsumer>



@property (retain, nonatomic) NSString *attachmentUUID; // ivar: _attachmentUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *downloadID; // ivar: _downloadID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccountID:(id)arg0 attachmentUUID:(id)arg1 client:(id)arg2 ;
-(void)beginDownload;
-(void)dealloc;
-(void)downloadFinishedError:(id)arg0 ;
-(void)downloadProgressDownloadedByteCount:(NSInteger)arg0 totalByteCount:(NSInteger)arg1 ;
-(void)finishWithError:(id)arg0 ;


@end


#endif