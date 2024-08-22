// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFLOCALDOWNLOADFILE_H
#define __NSCFLOCALDOWNLOADFILE_H

@class NSString;
@protocol OS_dispatch_io, OS_dispatch_queue, __NSCFLocalDownloadFileOpener;

#import <Foundation/Foundation.h>


@interface __NSCFLocalDownloadFile : NSObject {
    stat _stat;
    NSObject<OS_dispatch_io> *_writeIO;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _finished;
    BOOL _createdPlaceholder;
    BOOL _skipUnlink;
    BOOL _truncateFile;
    int _error;
    id<__NSCFLocalDownloadFileOpener> *_fileProvider;
    id *_finishCompletion;
    NSString *_protectionType;
}


@property (retain) NSString *path; // ivar: _path


-(void)dealloc;


@end


#endif