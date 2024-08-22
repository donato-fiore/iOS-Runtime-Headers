// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDONTOLOGYSHARDDOWNLOADTASK_H
#define _HDONTOLOGYSHARDDOWNLOADTASK_H

@class HKOntologyShardRegistryEntry, NSURLSession, NSString, NSError;
@protocol NSURLSessionTaskDelegate, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "HDOntologyShardDownloader.h"

@interface _HDOntologyShardDownloadTask : NSObject <NSURLSessionTaskDelegate>

 {
    HKOntologyShardRegistryEntry *_entry;
    HDOntologyShardDownloader *_downloader;
    NSURLSession *_session;
    NSObject<OS_dispatch_group> *_group;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_handleResponse:(id)arg0 task:(id)arg1 ;
-(id)init;
-(id)initForEntry:(id)arg0 downloader:(id)arg1 session:(id)arg2 group:(id)arg3 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)resume;


@end


#endif