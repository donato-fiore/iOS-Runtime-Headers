// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPFILETRANSFERSMALLFILESTASK_H
#define RPFILETRANSFERSMALLFILESTASK_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPFileTransferSmallFilesTask : NSObject

@property (retain, nonatomic) NSMutableArray *fileItems; // ivar: _fileItems
@property (nonatomic) BOOL needsRetry; // ivar: _needsRetry
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSUInteger taskID; // ivar: _taskID




@end


#endif