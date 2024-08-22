// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASFETCHATTACHMENTTASK_H
#define ASFETCHATTACHMENTTASK_H

@class NSString, NSFileHandle;
@protocol ASFetchAttachmentTaskProtocol;


#import "ASTask.h"

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol>



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


-(BOOL)processContext:(id)arg0 ;
-(BOOL)shouldLogIncomingData;
-(id)command;
-(id)initForMessageServerID:(id)arg0 andAttachmentName:(id)arg1 ;
-(id)initForMessageUUID:(id)arg0 ;
-(id)parameterData;
-(id)requestBody;
-(int)commandCode;
-(void)finishWithError:(id)arg0 ;


@end


#endif