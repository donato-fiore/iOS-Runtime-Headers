// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASITEMOPERATIONSFETCHATTACHMENTTASK_H
#define ASITEMOPERATIONSFETCHATTACHMENTTASK_H

@class NSString, NSFileHandle, NSError;
@protocol ASFetchAttachmentTaskProtocol;


#import "ASTask.h"

@interface ASItemOperationsFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol>



@property (retain, nonatomic) NSString *attachmentContentType; // ivar: _attachmentContentType
@property (retain, nonatomic) NSString *attachmentName; // ivar: _attachmentName
@property (retain, nonatomic) NSString *attachmentUUID; // ivar: _attachmentUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSFileHandle *localFileHandle; // ivar: _localFileHandle
@property (nonatomic) NSUInteger localFileLength; // ivar: _localFileLength
@property (retain, nonatomic) NSString *localFileName; // ivar: _localFileName
@property (retain, nonatomic) NSString *messageID; // ivar: _messageID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSError *writeAttachmentError; // ivar: _writeAttachmentError


-(BOOL)getTopLevelToken:(char *)arg0 outStatusCodePage:(char *)arg1 outStatusToken:(char *)arg2 ;
-(BOOL)handleStreamOperation:(int)arg0 forCodePage:(int)arg1 tag:(int)arg2 withParentItem:(id)arg3 withData:(char *)arg4 dataLength:(int)arg5 ;
-(BOOL)processContext:(id)arg0 ;
-(id)initForMessageServerID:(id)arg0 andAttachmentName:(id)arg1 ;
-(id)initForMessageUUID:(id)arg0 ;
-(id)requestBody;
-(int)commandCode;
-(void)finishWithError:(id)arg0 ;


@end


#endif