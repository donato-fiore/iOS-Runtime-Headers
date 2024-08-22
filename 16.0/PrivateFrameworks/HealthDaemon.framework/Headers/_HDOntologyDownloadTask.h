// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDONTOLOGYDOWNLOADTASK_H
#define _HDONTOLOGYDOWNLOADTASK_H

@class NSURLSession, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "HDOntologyShardDownloader.h"

@interface _HDOntologyDownloadTask : NSObject {
    HDOntologyShardDownloader *_downloader;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_downloadGroup;
    NSArray *_downloadTasks;
}




-(id)_taskError;
-(id)init;
-(id)initForDownloader:(id)arg0 session:(id)arg1 queue:(id)arg2 ;
-(void)downloadShardsForEntries:(id)arg0 completion:(id)arg1 ;


@end


#endif