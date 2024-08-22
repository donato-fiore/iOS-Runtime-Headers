// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPFILETRANSFERLARGEFILERECEIVETASK_H
#define RPFILETRANSFERLARGEFILERECEIVETASK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RPFileTransferItem.h"

@interface RPFileTransferLargeFileReceiveTask : NSObject {
    CC_SHA256state_st _sha256Ctx;
}


@property (nonatomic) int fileFD; // ivar: _fileFD
@property (retain, nonatomic) RPFileTransferItem *fileItem; // ivar: _fileItem
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSUInteger taskID; // ivar: _taskID




@end


#endif