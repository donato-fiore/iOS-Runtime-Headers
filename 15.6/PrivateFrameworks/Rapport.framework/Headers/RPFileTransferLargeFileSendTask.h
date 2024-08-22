// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPFILETRANSFERLARGEFILESENDTASK_H
#define RPFILETRANSFERLARGEFILESENDTASK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RPFileTransferItem.h"

@interface RPFileTransferLargeFileSendTask : NSObject {
    BOOL _failed;
    unsigned int _sentFlags;
    CC_SHA256state_st _sha256Ctx;
    unsigned int _xid;
}


@property (nonatomic) int fileFD; // ivar: _fileFD
@property (retain, nonatomic) RPFileTransferItem *fileItem; // ivar: _fileItem
@property (nonatomic) BOOL needsRetry; // ivar: _needsRetry
@property (nonatomic) int outstandingSends; // ivar: _outstandingSends
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSUInteger remainingSize; // ivar: _remainingSize
@property (nonatomic) NSUInteger taskID; // ivar: _taskID




@end


#endif