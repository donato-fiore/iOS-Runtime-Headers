// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESDOWNLOADCONTEXT_H
#define ESDOWNLOADCONTEXT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ESDownloadContext : NSObject

@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) NSString *attachmentUUID; // ivar: _attachmentUUID
@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy, nonatomic) id *progressBlock; // ivar: _progressBlock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


// -(id)initWithAttachmentUUID:(id)arg0 accountID:(id)arg1 queue:(id)arg2 downloadProgressBlock:(id)arg3 completionBlock:(unk)arg4  ;
-(void)finishedWithError:(id)arg0 ;
-(void)updateProgressDownloadedByteCount:(NSInteger)arg0 totalByteCount:(NSInteger)arg1 ;


@end


#endif