// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORESOURCEMANIFESTDOWNLOADTASK_H
#define GEORESOURCEMANIFESTDOWNLOADTASK_H

@class NSURL, NSString;
@protocol GEODataSessionTaskDelegate, OS_dispatch_queue, NSObject;

#import <Foundation/Foundation.h>

#import "GEODataSessionTask.h"

@interface GEOResourceManifestDownloadTask : NSObject <GEODataSessionTaskDelegate>

 {
    GEOOnce_s _started;
    GEOOnce_s _finished;
    NSObject<OS_dispatch_queue> *_queue;
    id<NSObject> *_transaction;
    NSURL *_url;
    NSString *_existingETag;
    GEODataSessionTask *_task;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id *_callback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithURL:(id)arg0 eTag:(id)arg1 ;
-(void)_captureNetworkEventForTask:(id)arg0 ;
-(void)_finishWithUpdatedManifest:(id)arg0 newETag:(id)arg1 isExistingManifestCurrent:(BOOL)arg2 error:(id)arg3 ;
-(void)cancel;
-(void)dataSession:(id)arg0 didCompleteTask:(id)arg1 ;
-(void)dataSession:(id)arg0 shouldConvertDataTask:(id)arg1 toDownloadTaskForEstimatedResponseSize:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)startWithQueue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif